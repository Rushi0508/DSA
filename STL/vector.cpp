#include<bits/stdc++.h>

using namespace std;

int main(){
    // VECTOR 
 
 
	// segmentation fault if you push_back 10^7 times
 
	vector<int> arr; // -> {}
	cout << arr.size() << endl; // -> print 0 
	arr.push_back(0); // {0}
	arr.push_back(2); // {0,2}
	cout << arr.size() << endl; // -> print 2
	arr.pop_back(); // {0}
	cout << arr.size() << endl; // print 1  
 
	arr.push_back(0); // {0,0}
	arr.push_back(2); // {0,0,2}
 
 
	arr.clear(); // --> erase all elements at once {}
 
 
	vector<int> vec1(4, 0); // -> {0,0,0,0}
	vector<int> vec2(4, 10); // -> {10,10,10,10}
 
	// copy the entire vec2 into vec3
	vector<int> vec3(vec2.begin(), vec2.end()); // -> [)
	vector<int> vec3(vec2); 
 
 
 
	vector<int> raj;
	raj.push_back(1); // raj.emplace_back(1); // emplace_back takes lesser time than push back 
	raj.push_back(3); 
	raj.push_back(2); 
	raj.push_back(5); // -> {1, 3, 2, 5} 
 
	vector<int> raj1(raj.begin(), raj.begin() + 2);  // -> {1, 3}  
 
 
	// lower bound , upper bound 
 
	// swap swap(v1, v2) 
	// begin(), end(), rbegin(), rend() 
 
 
	// to defining 2d vectors 
 
	vector<vector<int>> vec; 
 
	vector<int> raj1;
	raj1.push_back(1); 
	raj1.push_back(2); 
 
	vector<int> raj2;
	raj2.push_back(10); 
	raj2.push_back(20); 
 
	vector<int> raj3;
	raj3.push_back(19); 
	raj3.push_back(24); 
	raj3.push_back(27); 
 
	vec.push_back(raj1); 
	vec.push_back(raj2); 
	vec.push_back(raj3); 
 
	// it is vector itself 
	for(auto vctr: vec) {
		for(auto it: vctr) {
			cout << it << " "; 
		}
		cout << endl; 
	}
 
 
	for(int i = 0;i<vec.size();i++) {
		for(int j = 0;j<vec[i].size();j++) {
			cout <<  vec[i][j] << " "; 
		}
		cout << endl; 
	}
 
 
	// define 10 x 20 
	vector<vector<int>> vec(10, vector<int> (20, 0)); 
	vec.push_back(vector<int>(20, 0)); 
	cout << vec.size() << endl; // 11 prints
 
	vec[2].push_back(1); 
 
 
	vector<int> ar[4]; 
	ar[1].push_back(0); 
 
 
	// 10 x 20 x 30 // int arr[10][20][30] 
	vector<vector<vector<int>>> vec(10, vector<vector<int>>(20, vector<int> (30, 0)));
 
    return 0;
}