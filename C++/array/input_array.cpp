#include<iostream>
using std::cout;
using std::cin;
class opeartion{
	int arr[1000];
public:
	void inputNumber(){
		int i,range;
		cout<<"Enter the number of elements in array \n";
		cin>>range;
		cout<<"Enter "<< range <<" array elements\n";
		for(i=0;i<range;i++){
			cin>>arr[i];
		}
		cout<<"Numbers in array are : \n";
		for(int n=0;n<range;n++){
			cout<<arr[n]<<"\n";
		}

	}
	int greatest(){

	}

};
int main(){
	opeartion t;
	t.inputNumber();
	return 0;
}