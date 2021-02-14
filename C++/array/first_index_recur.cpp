#include<iostream>
using namespace std;
 int first_index2(int arr [],int n,int x,int i){
	if(i>n){
		return -1;
	}
	if(x == arr[i]){
		return i;
	}
	i++;
	first_index2(arr,n,x,i);
 }
int main(){
	int arr[] = {5,5,6,5,6};
	int x;
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"Enter the value to search index\n";
	cin>>x;
	// value_search(arr,n,x);
	int an = first_index2(arr,n,x,0);
	cout<<an;
	return 0;
}