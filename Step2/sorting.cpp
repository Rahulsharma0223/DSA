#include <bits/stdc++.h>
using namespace std;

//select minimum from the array and swap
int Selection_Sort(int n, int arr[]){
    for(int i=0;i<=n-2;i++){ 
        // it can be i<n-1 also
        int mini=i;
        for(int j=i;j<n-1;j++){
            if(arr[j]<arr[mini]) mini =j;
        }
        swap(arr[mini],arr[i]);
    }

}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Selection_Sort(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}