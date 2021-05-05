#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    // cout<<vec.size()<<"\n";
    // cout<<vec.capacity()<<"\n";
    
    vec.push_back(10);
    //  cout<<vec.size()<<"\n";
    // cout<<vec.capacity()<<"\n";
    
    vec.push_back(20);
    //  cout<<vec.size()<<"\n";
    // cout<<vec.capacity()<<"\n";
    
    vec.push_back(5);
    //  cout<<vec.size()<<"\n";
    // cout<<vec.capacity()<<"\n";

    vec.push_back(100);
    //  cout<<vec.size()<<"\n";
    // cout<<vec.capacity()<<"\n";

    vec.push_back(50);
    //  cout<<vec.size()<<"\n";
    // cout<<vec.capacity()<<"\n";
    
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
        return 0;
    }