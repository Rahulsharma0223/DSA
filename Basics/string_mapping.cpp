#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    getline(cin,s);

    //precompute using mapping
    map<char , int> mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }

    int q;
    cin>>q;
//take user input for frequency of a cahracter he need to know
    vector<char> queries(q);
    for(int i=0;i<q;i++){
        cin>>queries[i];
    }
// prints frequencies for every query asked
    for(int i=0;i<q;i++){
        cout<<mpp[queries[i]]<<" ";
    }


}