#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
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

}