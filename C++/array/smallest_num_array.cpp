#include<iostream>
using std::cout;
using std::cin;
class operation{
int arr[1000],range;
public:
	void inputNumber(){
		int i;
		cout<<"Enter the number of elements in array \n";
		cin>>range;
		cout<<"Enter "<< range <<" array elements\n";
		for(i=0;i<range;i++){
			cin>>arr[i];
		}
	}
	int smallest(){
		int min=arr[0];
		for(int i=1;i<range;i++){
			if(arr[i] < min){
				min = arr[i];
			}
		}
		return min;
	}


};
int main(){
	int result;
	operation o;
	o.inputNumber();
	result = o.smallest();
	cout<<"Minmun value in an array is : "<<result;
	return 0;
}