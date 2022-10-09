// Selection Sort
// TC - O(n*n)
// SC - O(1)
// Best Case - O(1)
// Worst Case - O(n*n)
// Used when small array size
// Not Stable Algorithm

#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int>v = {1,5,0,-1,56,23,2,9,87,-4,0,74};
    int n = v.size();
    int min_index;
    for(int i=0;i<n-1;i++){
        min_index=i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[min_index]){
                min_index = j;
            }
        }
        swap(v[i],v[min_index]);
    }
    for(auto it: v){
        cout<<it<<" ";
    }
    return 0;
}