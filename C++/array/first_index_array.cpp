#include<iostream>
using namespace std;
int first_index(int arr[],int size,int x){
	// int answer,i;
	// for(i=0;i<size;i++){
	// 	if(x == arr[i]){
	// 	return  i;
	// 	}
	// }	if(i == 5){
	// 	return -1;
	// }

}

int first_index2(int arr[],int size,int x){
	int i=0;
	while(i<size){
		if(x  == arr[i] )
			break;
		i++;
	}
	if(i < size){
		cout<<i;
	}
	else{
		cout<<-1;
	}
}
int main(){
	int arr[] = {5,5,6,5,6};
	int x;
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"Enter the value to search index\n";
	cin>>x;
	//int a = first_index(arr,n,x);
	//cout<< a;
	first_index2(arr,n,x);
	
	return 0;
}