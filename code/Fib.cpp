#include <bits/stdc++.h> 
using namespace std;


int main() 
{ 
    int n;
    cin>>n;
    
    int a=0,b=1;
    
    if(n<1)
     return 0;
     
    cout<<a<<" ";
    for(int i=1;i<n;i++){
        
        cout<<b<<" ";
        int t = a + b;
        a=b;
        b=t;
    }
    
} 