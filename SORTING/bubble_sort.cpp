// Bubble Sort
// TC - O(n*n)
// SC - O(1)
// Best Case - O(n)
// Worst Case - O(n*n)
// Used when small array size
// Stable Algorithm

#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int>v = {1,5,0,-1,56,23,2,9,87,-4,0,74};
    int n = v.size();
    int min_index;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(v[j]>v[j+1]){
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
    for(auto it: v){
        cout<<it<<" ";
    }
    return 0;
}