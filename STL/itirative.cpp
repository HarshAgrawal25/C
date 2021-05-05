#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void RotateArray(vector<int>& vec){
        int low = 0;
        int high = vec.size()-1;
        int temp;
        while(low<high){
            temp=vec[low];
            vec[low]=vec[high];
            vec[high]=temp;
            low++;
            high--;
        }
        cout<<"\n";
        for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<" ";
	}

}
void LinearSearch(vector<int>&vec,int ele){
    bool flag=false;
    for(int i=0;i<vec.size();i++){
        if(vec[i] == ele){
            flag=true;
            break;
        }
    }
    cout<<"\n";
    if(flag){
        cout<<"Found"<<"\n";
    }
    else{
        cout<<"Not found"<<"\n";
    }
}
void BinarySearch(vector<int>&vec,int ele){
    int low=0;
    int high=vec.size()-1;
    bool flag=false;
    while(low<=high){
         int mid=(low+high)/2;
        if(vec[mid] == ele){
            flag =true;
            break;
        }
        else if(vec[mid]>ele){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
     cout<<"\n";
    if(flag){
        cout<<"Found"<<"\n";
    }
    else{
        cout<<"Not found"<<"\n";
    }
  
}

int main(){
	vector<int>vec;
	vec.push_back(100);
    vec.push_back(7);
    vec.push_back(10);
    vec.push_back(99);
    vec.push_back(1);
    vec.push_back(50);
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<" ";
	}
    cout<<"\n";
	cout<<"Harsh Agrawal";
     cout<<"\n";
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<" ";
	}

    RotateArray(vec);
    LinearSearch(vec,100);
    BinarySearch(vec,90);

    return 0;
}