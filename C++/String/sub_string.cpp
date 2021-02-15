#include<iostream>
#include<cmath>
using namespace std;
int subs(string str,string output[]){
    if(str.empty()){
        output[0]="";
        return 1;
    }
    string smallString = str.substr(1);
    int smallOutputSize = subs(smallString,output);
    for(int i = 0 ; i < smallOutputSize;i++){
        output[i + smallOutputSize] = str[0] + output[i];
    }
    return 2* smallOutputSize;
}
int main(){
    string str;
    cout<<"Enter the String\n";
    cin>>str;
    cout<<str[0]<<endl;
    int n=str.length();
    int length=pow(2,n);
    cout<<"Size of string is "<<length<<endl;
    string* output=new string[length];
    int count = subs(str,output);
    for(int i=0;i<count;i++){
        cout<<output[i]<<endl;
    }
    return 0;
}