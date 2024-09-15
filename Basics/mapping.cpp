#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //precompute using mapping
    map<int , int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    int q;
    cin>>q;
//take user input for frequency of a number he need to know
    vector<int> queries(q);
    for(int i=0;i<q;i++){
        cin>>queries[i];
    }
// prints frequencies for every query asked
    for(int i=0;i<q;i++){
        cout<<mpp[queries[i]]<<" ";
    }


}