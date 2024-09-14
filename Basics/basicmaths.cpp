#include<bits/stdc++.h>
using namespace std;

//count number of digits in number
void countdigit(int n){

    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    cout<< count;
}

//check how many digits of number divides the number completely
void evenlyDivides(int n) {
    int copy = n;
    int count = 0;
    
    while (n > 0) {
        int lastdigit = n % 10;
        if (lastdigit != 0 && copy % lastdigit == 0) {
            count++;
        }
        n = n / 10;
    }
    
    cout<<count;
}

//gives sum of the digits in a number
void SumOfDigits(int n){

    int sum=0;
    while(n>0){
        int lastdigit = n%10;
        n=n/10;
        sum = sum+lastdigit;
    }

    cout<<sum;
}

//reverse a number without printing zeros present at end
void RevNum(int n){
    int revnum =0;
    while(n>0){
        int lastdigit = n%10;
        n=n/10;
        revnum=(revnum*10)+lastdigit;
    }

    cout<<revnum;
}

//check palindrome of a number
void CheckPalindrome(int n){
    int revnum =0;
    int copy =n;
    while(n>0){
        int lastdigit = n%10;
        n=n/10;
        revnum=(revnum*10)+lastdigit;
    }

    if(revnum==copy){
        cout<<"it is a palindrome";
    }
    else cout<<"it is not a palindrome";
}

//Armstrong number
void Armstrong(int n){
    int sum =0;
    int copy =n;
    while(n>0){
        int ld =n%10;
        n=n/10;
        sum=sum+(ld*ld*ld);
    }
    if(sum==copy){
        cout<<"it is a armstrong number";
    }
    else cout<<"it is not a armstrong number";
}

//print sum of all the divisors of given number
void SumOfDivisors(int N)
    {
        // Write Your Code here
        int sum=0;
        for(int i=1;i<=N;i++){
            if(N%i==0){
                sum=sum+i;
            }
        }
        
        cout<<sum;
    }

//check for a prime number
void isPrime(int n){
    int count=0;
    for (int i=1;i<=n;i++){
        if(n%i==0) 
        {
            count++;
        }
    }
    if(count==2) 
    {
        cout<<"It is a prime number";
    }
    else 
    {
        cout<<"It is not a Prime number";
    }
}

//check prime (optimal approach)
void OptimalPrime(int n){
    int count =0;
    for(int i =1;i<=sqrt(n);i++){
        if(n%i==0){
            count++;
        }
    
    }
    
//if checking till sqrt give 2 or more than 2 divisors than definetly it is not prime 
//as if we check after sqrt their will be some factors for sure
    if(count>=2){
        cout<<"It is not prime number";
    }
    else cout<<"It is  a prime number";

}

//HCF of two numbers
//to use this fuction in main you need to take 2 inputs
void HCF(int a , int b){
    //two apply loop till the smaller number only as after that we cant find HCF
    //swap b to a if a is bigger than b and apply loop till a
    int hcf=0;
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    for(int i=1;i<=a;i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    cout<<hcf;
}

//optimal approach for HCF/GCD
void OptimalHCF(int a, int b){
    int hcf=0;
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a==0) hcf=b;
    if(b=0)  hcf=a;

    cout<<hcf;
}
//braute force method to print all the divisor of a number
void PrintDivisors(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<",";
        }
    }
}

//optimal method to print all divisors
void OptimalDivisors(int n){
    vector<int> ls;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            ls.push_back(i);
        }

        if(n/i!=i){    //to print other half factors present after sqrt of n
            ls.push_back(n/i);
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it : ls) cout<<it<<",";
}

int main(){
    int n;
    cin>>n;
    OptimalDivisors(n);//write the funtion you want to perform
    return 0;
}