#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    getline(cin,s); //take complete line as input

    //precompute
    int hash[256]={0}; //all characters
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;  //this will take ascii of each character and increment its value from 0 to 1 and so on
        //if we need to take only small alphabet than do hash[s[i]-'a'] .....
    }
    
    int q;
    cin>>q;

    vector<char> queries(q);
    for(int i=0;i<q;i++){
        cin>>queries[i];
    }

    for(int i=0;i<q;i++){
        cout<<hash[queries[i]]<<" ";
    }


}