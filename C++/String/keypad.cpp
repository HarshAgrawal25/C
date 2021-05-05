#include<iostream>
using namespace std;
 int  keypad(int num, string str[], string output[]){
    //  cout<<str[num - 2]<<endl;
    if(num == 0){
        output[0]= "";
        return 1;
    }
    int subNum = num % 10;
    num =num / 10;
    int smallOutputSize = keypad(num,str,output); 
    for(int j=0;j<3;j++){
        for(int i=0;i<smallOutputSize;i++){
        output[i + smallOutputSize] = output[i]  + str[subNum-2][j];
    }
    }
    return 2*smallOutputSize;
 }
int main(){
    int i;
    cout<<"Enter the number between 2 and 9 \n";
    cin>>i;
    string str[] ={
        "abc",
        "def",
        "ghi",
        "jkl",
        "mno",
        "pqrs",
        "tuv",
        "wxyz"
    };
     string output[1000];
     int count = keypad(i,str,output);
     for(int i=0;i<count;i++){
        cout<<output[i]<<endl;
    }
    // while( i != 0){
    //     int num = i % 10;
    //     i = i/10;
    //     keypad(num,str);
    // }



    return 0;
}