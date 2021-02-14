#include<iostream>
using namespace std;
void merge(int arr[],int si,int mid,int ei){
	int n1 = mid - (si-1);
	int n2 = ei  - (mid);
	int p;
	int L[n1],R[n2];
	for(p=0;p<n1;p++){
		L[p] = arr[si + p];
	}
	for(p=0;p<n1;p++){
		R[p] = arr[mid + p +1];
	}

	int i=0,j=0,k=si;
	
	while(i<n1 && j <n2){
        if (L[i] < R[j]) {
         arr[k] = L[i];
         k++;
         i++;
      } else {
         arr[k] = R[j];
         ++k;
         ++j;
      }
    }
    while (i < n1) {
      arr[k] = L[i];
      ++k;
      ++i;
   }
   while (j < n2) {
      arr[k] = R[j];
      ++k;
      ++j;
   }

}
void mergeSort(int arr[],int si,int ei){
	
	if(si >= ei){
		return;
	}  
	int mid=(si+ei)/2;
	mergeSort(arr,si,mid);
	mergeSort(arr,mid+1,ei);
	merge(arr,si,mid,ei);

}
void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}
int main(){
	int arr[] = {7,1,0,4};
	int size =sizeof(arr)/sizeof(arr[0]);	
	
	mergeSort(arr,0,size-1);
	
	cout << "\nSorted array is \n";
    printArray(arr, size);
	return 0;
}