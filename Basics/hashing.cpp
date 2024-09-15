#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    
    // Take array input
    for(int i = 0; i < n; i++){ 
        cin >> arr[i]; 
    }

    // Precompute the frequency of numbers in the array
    int hash[20] = {0};  // Assuming numbers are between 0 and 19
    for(int i = 0; i < n; i++){
        hash[arr[i]] += 1;
    }

    int q;  // Number of queries the user wants to ask
    cin >> q;
    
    vector<int> queries(q);
    
    // Take all the query numbers first
    for(int i = 0; i < q; i++){
        cin >> queries[i];
    }

    // Print the frequencies of all query numbers together
    for(int i = 0; i < q; i++){
        cout << hash[queries[i]] << endl;
    }

    return 0;
}
