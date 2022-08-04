#include<bits/stdc++.h>

using namespace std;

int main(){
    // Arrays -> int arr[100]; 
 
 
	array<int, 3> arr;  // -> {?, ?, ?}
 
 
	array<int, 5> arr = {1}; // -> {1, 0, 0, 0, 0}
 
 
	int arr[10000] = {0}; 
 
 
 
	array<int, 5> arr; 
	arr.fill(10);  /// {10, 10, 10, 10, 10} 
 
 
	arr.at(5);  // 5th index
 
	for(int i = 0;i<5;i++) {
		cout << arr.at(i) << " "; 
	}
 
 
	// iterators 
	// begin(), end(), rbegin(), rend() 
 
	// 
 
	array<int, 5> arr = {1, 3, 4, 5, 6}; 
	for(auto it = arr.begin(); it!=arr.end();it++) {
		cout << *it << " "; 
	}
 
 
 
	for(auto it = arr.rbegin(); it>arr.rend();it++) {
		cout << *it << " "; 
	}
 
	for(auto it = arr.end() - 1; it>=arr.begin();it--) {
		cout << *it << " "; 
	}
 
	// for each loop 
	for(auto it: arr) {
		cout << it << " "; 
	}
 
	string s = "xhegcwe"; 
	// x h e g c w e 
	for(auto c:s) {
		cout << c << " "; 
	}
 
 
	// size 
	cout << arr.size(); 
 
	// front 
	cout << arr.front(); // arr.at(0); 
 
	// back
	cout << arr.back(); // arr.at(arr.size() - 1); 
    return 0;
}