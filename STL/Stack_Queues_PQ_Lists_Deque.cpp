#include<bits/stdc++.h>

using namespace std;

int main(){
    // Stack and Queue 
	stack<int> st; // lifo ds -> last in first out
	// pop 
	// top 
	// size 
	// empty 
	// push and emplace 
 
	st.push(2); 
	st.push(4); 
	st.push(3); 
	st.push(1); 
 
 
	cout << st.top(); // prints 1 
	st.pop(); // deletes the last entered element 
	cout << st.top(); // prints 3 
	st.pop(); 
	cout << st.top(); 
 
	bool flag = st.empty(); // returns true if stack is empty, or false
 
	// deleted the entire stack 
	while(!st.empty()) {
		st.pop(); 
	}
 
	cout << st.size() << endl; // number of elements in the stack 
 
	stack<int> st; 
	if(!st.empty()) {
		cout << st.top() << endl; // throw error 
	}
 
 
	// queue // fifo operation ds -> first in first out
	// push 
	// front
	// pop 
	// size 
	// empty 
 
	queue<int> q; 
	q.push(1); 
	q.push(5);
	q.push(3); 
	q.push(6); 
 
	cout << q.front();; // prints 1 
	q.pop(); 
	cout << q.front(); // prints 5 
 
	// linear time 
	while(!q.empty()) {
		q.pop(); 
	}
	queue<int> q;
	for(int i = 0;i<10;i++) q.push(i); 
 
 
 
	// priority_queue 
	// push 
	// size 
	// top pop empty 
	priority_queue<int> pq;
	pq.push(1); 
	pq.push(5); 
	pq.push(2); 
	pq.push(6); 
 
	cout << pq.top(); // print 6 
	pq.pop(); 
	cout << pq.top(); // print 5 
 
	priority_queue<pair<int,int>> pqq;
	pqq.push({1, 5}); 
	pqq.push({1, 6}); 
	pqq.push({1, 7}); 
 

	// min priority queue desi method
	priority_queue<int> pq2;
	pq2.push(-1); // pq.push(-1 * el); 
	pq2.push(-5); 
	pq2.push(-2); 
	pq2.push(-6); 
 
	cout << -1 * pq2.top() << endl; // prints 1
 
	// min priority queue is 
	priority_queue<int, vector<int>, greater<int>> pq1; 
	pq1.push(1); 
	pq1.push(5); 
	pq1.push(2); 
	pq1.push(6); 
 
	cout << pq1.top() << endl; // prints 1 
 
 
 
	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq3; 
 
 
	deque<int> dq; 
	// push_front() 
	// push_back() 
	// pop_front() 
	// pop_back()
	// begin, end, rbegin, rend 
	// size 
	// clear
	// empty 
	// at 
 
 
	list<int> ls; 
	// push_front() 
	// push_back() 
	// pop_front() 
	// pop_back()
	// begin, end, rbegin, rend 
	// size 
	// clear
	// empty 
	// at 
	// remove -> O(1) 
	ls.push_front(1); 
	ls.push_front(2); 
	ls.push_front(3);
	ls.remove(2);  // o(1) operation 
 
    return 0;
}