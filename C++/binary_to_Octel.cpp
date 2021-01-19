#include<iostream>
using std::cout;
using std::cin;
int main(){
    int n,r,o=0,j=1;
    cout<<"Enter any binary number\n";
    cin>>n;
     while(n != 0){
         r=n%10;
         o=o+(r*j);
         j=j*2;
         n=n/10;
     }
     cout<<"Equivalent Octeal number is"<<o;
    return 0;
}