#include<iostream>
#include<cmath>
using std::cout;
using std::cin;
int main(){
    int n,r,dn=0,i=0;
    cout<<"Enter any Binary number\n";
    cin>>n;
    while(n>0){
        r=n%10;
        n=n/10;
        dn=dn+r*pow(2,i);  
        i++;    
        }
    cout<<"Converted binary number is "<<dn;
    return 0;
}