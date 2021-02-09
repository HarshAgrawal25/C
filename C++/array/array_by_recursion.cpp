#include<iostream>
using namespace std;
void print_array(int arr[], int size,int i){
	if( i == size)
	{
		cout<<endl;
		return ;
	}
	cout<<arr[i]<<" ";
	i++;
	print_array(arr,size,i);
}
int main(){
	int arr[]={25,8,1,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	print_array(arr,n,0);
	return 0;
}