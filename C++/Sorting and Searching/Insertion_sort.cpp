#include<iostream>
using namespace std;
void insertion_sort(int arr[], int n){
	int key,i,j;
	for(i=1;i<n;i++){
		key=arr[i];
		j=i-1;
		while(key<arr[j] && j>=0){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1] = key;

	}
	cout<<"Sorted elements are\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\n";
	}
}
int main(){
	int n,arr[1000];
	cout<<"Enter the size of array\n";
	cin>>n;
	cout<<"Enter "<< n << " in array\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	insertion_sort(arr, n);
	return 0;
}