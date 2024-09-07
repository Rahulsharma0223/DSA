#include<bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
void print5(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print6(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}
void print7(int n){
    
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }   
}
void print8(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*n-2*i-1;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print9(int n){
    //print7 for upper part
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }   

    //print8 for lower part 
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*n-2*i-1;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print10(int n){
        for(int i=0;i<2*n-1;i++){
            if(i<n){
                for(int j=0;j<=i;j++){
                cout<<"*";
                }
            }
            else{
                for(int j=1;j<2*n-i;j++){
                    cout<<"*";
                }
            }
            
            cout<<endl;
        }
}
void print11(int n){
    for(int i=0;i<n;i++){
        int start;
        if(i%2==0){
            start=1;
        }
        else start=0;
        for(int j=0;j<=i;j++){
            cout<<start<<" ";
            start=1-start;
        }
        cout<<endl;
    }

}
void print12(int n){
    for(int i=1;i<=n;i++){
        //num
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //space
        for(int j=0;j<2*n-2*i;j++){
            cout<<" ";
        }
        //num
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}
void print13(int n){
    int num=1;
    for(int i=num;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}
void print14(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print15(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<'A'+n-i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print16(int n){
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print17(int n){
    for(int i=1;i<=n;i++){
        char ch='A';
        //space
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }

        //character
        for(int j=1;j<=2*i-1;j++){
            cout<<ch;
            if(j<i){
                ch++;
            }
            else{
                ch--;
            }
        }

        //space
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    
}
void print18(int n){
    for(int i=0;i<n;i++){
        
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print19(int n){
    for(int i=0;i<n;i++){
        //stars
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        //space
        for(int j=1;j<=2*i;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }       
        cout<<endl;
    }

    //for other half
    for(int i=0;i<n;i++){
        //stars
        for(int j=1;j<=i+1;j++){
            cout<<"*";
        }
        //space
        for(int j=1;j<=2*n-2*i-2;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print20(int n){
    int spaces=2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        //star
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        //spaces
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        //star
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        if(i<n) spaces-=2;
        else spaces+=2;
        cout<<endl;
    }
 
}
void print21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if( i==0 || j==0 || i==n-1 || j==n-1){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print21(n);
    return 0;
}