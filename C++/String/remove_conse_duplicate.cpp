#include<iostream>
using namespace std;
void removed(char str[]){
    if(str[0] == '\0'){
        return;
    }
    if(str[0] != str[1]){
        removed(str+1);
    }
    else{
        int i;
        for(i=1;str[i] != '\0';i++){
             str[i-1]=str[i];
        }
        str[i-1]=str[i];
       removed(str);
    }
}
int main(){
    char str[100];
    cout<<"Enter the recursive string\n";
    cin>>str;
    removed(str);
    cout<<str;
    return  0;
}