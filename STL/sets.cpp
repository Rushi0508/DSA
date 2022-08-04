#include<bits/stdc++.h>

using namespace std;

int main(){
    // set -> unique and sorted elements. TC - generally logaritmic
    // unordered -> unique but unsorted. TC - generally O(1) but sometimes O(n)
    // multiset -> duplicate also and sorted. TC - generally logarithimc

 
	// given n elements, tell me the number of unique elements 
	int arr[] = {2, 5, 2, 1, 5}; // 3 unique elements -> {1. 2. 5}
 
	set<int> st; 
	int n;
	cin >> n;
	for(int i = 0;i<n;i++) {
		int x;
		cin >> x; 
		st.insert(x); 
	}
 
	cout << st.size(); 
 
	// st -> {1, 2, 5}
	// erase functionality 
	// log n 
	st.erase(st.begin()); // st.erase(iterator) // st -> {2, 5}
 
	// log n 
	// 77777777777
	// st.erase(startIterator, endIterator) 
 
	st.erase(5); // st.erase(key) // delete the 5 -> {1, 2}
 
 
	set<int> st = {1, 5, 7, 8}; 
 
	auto it = st.find(7); // log n // it will be iterator to 7
	
	auto it = st.find(9); // it = st.end(); 
 
	st.emplace(6); // st.insert(6) 
 
	cout << st.size() << endl; 
 
 
	set<int> st; 
	st.insert(5); // -> {5}
	st.insert(5); // -> {5}
 
	for(auto it=st.begin(); it!=st.end();it++) {
		cout << *it << " "; 
	}
 
	for(auto it : st) {
		cout << it << endl; 
	}
 
	// delete the entire set 
	st.erase(st.begin(), st.end()); // makes sure the entire set is deleted 
 
 
 
	unordered_set<int> st; 
 
	st.insert(2); 
	st.insert(3);
	st.insert(1); 
 
	// average time complexity is O(1) 
	// tle -> switch to set 
	// but the worst case is linear in nature, O(set size)
 
	multiset<int> ms; 
 
	ms.insert(1); 
	ms.insert(1); 
	ms.insert(2); 
	ms.insert(2); 
	ms.insert(3); // ms.emplace(3) 
	// st -> {1, 1, 2, 2, 3}
 
	ms.erase(2); // all the instances will be erased 
 
	auto it = ms.find(2); // returns an iterator pointing to the first element of 2 
	ms.clear(); // deleted the entire set 
	ms.erase(ms.begin(), ms.end()); // deletes the entire set 
	// log n in size  
 
 
	for(auto it=st.begin(); it!=st.end();it++) {
		cout << *it << " "; 
	}
 
	for(auto it : st) {
		cout << it << endl; 
	}
	// finds how many times 2 occurs 
	st.count(2); 
 
 
	ms.erase(ms.find(2)); 
	
    return 0;
}