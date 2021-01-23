#include<iostream>
using std::cout;
using std::cin;
class operation{
	int arr[100],range;
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
	int ascending()
	{
		int temp,j,i;
		for(i=0;i<range;i++)
		{
			for(j=i+1;j<range;j++)
			{
				if(arr[i]>arr[j])
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}	
	}
	int harsh()
	{
			cout<<"Ascending order of an array is : \n";
		for(int i=0;i<range;i++){
			cout<<arr[i]<<"\n";
		}
	}
};
int main(){
	operation t;
	t.inputNumber();
	t.ascending();
	t.harsh();
	return 0;
}