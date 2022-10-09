// Insertion Sort
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
    int temp,j;
    for(int i=1;i<n;i++){
        temp = v[i];
        for(j=i-1;j>=0;j--){
            if(v[j]>temp){ // shift
                v[j+1] = v[j];
            }else{
                break;
            }
        }
        v[j+1] = temp;
    }
    for(auto it: v){
        cout<<it<<" ";
    }
    return 0;
}