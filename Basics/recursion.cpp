#include<bits/stdc++.h>
using namespace std;

//to print from 1 to n
void print1toN(int n){
    if(n==0){
        return;
    }

    print1toN(n-1);

    cout<<n<<" ";
}

//practiced on geeksforgeeks
void printGfg(int N) {
        if(N==0){
            return;
        }
        
        printGfg(N-1);
        
        cout<<"GFG"<<" ";
    }

//print n to 1
void printNto1(int N) {
        if(N==0) return;
        cout<<N<<" ";
        
        printNto1(N-1);
        
    }

//sum of cube of numbers from 1 to n
long long sumOfSeries(long long n) {
        if(n==0)
        {
            return 0;
        }
      
        return n*n*n+sumOfSeries(n-1);
    }

//factorial of n
long long factorial(long long n){
    if(n==0||n==1){
        return 1;
    }

    return n*factorial(n-1);    
}

//fibonacci series
int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        
        return fib(n-1)+fib(n-2);
}

int main(){
    int n;
    cin>>n;
    factorial(n);//write the funtion you need to use 
    return 0;
}