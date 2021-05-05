#include<iostream>
using  namespace std;
void merge(int arr[],int si,int mid,int ei){

    //defining the size of toe subarrays array
    int n1=mid - (si -1);
    int n2=ei - mid;

    // putting elements in arrays
    int Larr[n1],Rarr[n2];
    for(int p=0;p<n1;p++){
        Larr[p] = arr[si+p];
    }
    for(int p=0;p<n2;p++){
        Rarr[p] = arr[mid + 1 +p];
    }
    int i=0,j=0;
    int k=si;
    while(i < n1 && j < n2){
        if(Larr[i] < Rarr[j]){
            arr[k] = Larr[i];
            k++;
            i++;
        }
        else{
            arr[k] = Rarr[j];
            k++;
            j++;
        }
    }
   while (i < n1) {
      arr[k] = Larr[i];
      ++k;
      ++i;
   }
   while (j < n2) {
      arr[k] = Rarr[j];
      ++k;
      ++j;
   }
}
void mergesort(int arr[],int si,int ei){
    if(si>=ei){
        return ;
    }
    int mid= (si+ei)/2;
    mergesort(arr,si,mid);
    mergesort(arr,mid+1,ei);
    merge(arr,si,mid,ei);
}
int main(){
    int arr[] ={40,56,33,90,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,size-1);
    cout<<"Sorted array\n";
    for(int i=0;i<size;i++){
            cout<<arr[i]<<"\n";
    }
    return 0;
}