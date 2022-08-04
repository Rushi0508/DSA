#include<bits/stdc++.h>

using namespace std;

int main(){
    // Key Value 
	// raj -> 27 
	// hima -> 31 
	// sandeep -> 67 
	// tank -> 89 
	// map only stores unique keys 
	// log n is the tc of map 
	map<string, int> mpp; 
	mpp["raj"] = 27; 
	mpp["hima"] = 31; 
	mpp["praveer"] = 31;
	mpp["sandeep"] = 67; 
	mpp["tank"] = 89; 
	mpp["raj"] = 29; 
	mpp.emplace("raj", 45); 
	mpp.erase("raj"); // mpp.erase(key) 
	mpp.erase(mpp.begin()); // mpp.erase(iterator)
	mpp.clear(); // entire map is cleaned up
	// mpp.erase(mpp.begin(), mpp.begin()+2); // cleans up a given range
	auto it = mpp.find("raj"); // points to where raj lies 
	auto it = mpp.find("simran"); // points to end since she does not exists 
 
	if(mpp.empty()) {
		cout << "Yes it is empty"; 
	}
	mpp.count("raj"); // always returns 1 as it stores only 1 
	// instance of raj 
 
	pair<int,int> pr;
	pr.first = 1; 
	pr.second = 10; 
 
	// printing map 
	for(auto it: mpp) {
		cout << it.first << " " << it.second << endl; 
	}
 
	for(auto it = mpp.begin(); it!=mpp.end();it++) {
		cout << it->first << " " << it->second << endl; 
	}
 
	// does not stores in any order 
	unordered_map<int,int> mpp; 
	// unordered_map<pair<int,int>,int> mpp; xxxxxx
	// o(1) in almost all cases
	// o(n) in the worst case, where n is the container size 
 
 
	// Pair class 
	pair<int,int> pr = {1,2}; 
	pair< pair<int,int>, int> prr = {{1,2}, 2}; 
	cout << prr.first.second << endl;
	pair<pair<int,int>, pair<int,int>> prrr = {{1,2},{2, 4}};
	cout << prrr.first.first; //-> 1 
	cout << prrr.second.second; //-> 4 
 
	vector<pair<int,int>> vec; 
	set<pair<int,int>> st; 
	map< pair<int,int>, int> mpp; 
 
 
 
	multimap<string, int> mpp;
	mpp.emplace("raj", 2); 
	mpp.emplace("raj", 5); 
 
    return 0;
}