#include<iostream>
using std::cout;
using std::cin;
class opeartion{
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
	int greatest()
	{
		int max = arr[0];
		for(int i=1;i<range;i++)
		{
			if(arr[i] > max)
			{
				max = arr[i];
			}
		}
		return max;
	}

};
int main(){
	int result;
	opeartion t;
	t.inputNumber();
	result = t.greatest();
	cout<<"Greatest element is : "<<result;
	return 0;
}