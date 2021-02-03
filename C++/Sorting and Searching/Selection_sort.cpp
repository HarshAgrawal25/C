#include<iostream>
using namespace std;

void swap(int* min,int* i){
	int temp;
	temp=*min;
	*min=*i;
	*i=temp;
}
void selectionsort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(arr[min]>arr[j]){
				min=j;
			}
		}
		swap(&arr[min],&arr[i]);
	}
	cout<<"Numbers in Sorted order are : \n";
		for(int l=0;l<n;l++){
			cout<<arr[l]<<"\n";
		}
}
int main(){
	int n,arr[100];
	cout<<"Enter the size of array\n";
	cin>>n;
	cout<<"Enter "<<n<<" elements for array\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	selectionsort(arr,n);

	return 0;
}