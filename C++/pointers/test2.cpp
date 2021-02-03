#include <iostream>

using namespace std;

int main()
{
    
    int i=65;
    char c=i;
    cout<<c<<endl;
    cout<<i<<endl;
    
    int *p=&i;
    char *pc=(char *)p;
    cout<<*pc<<endl;
    cout<<*p<<endl;
    cout<<*(pc+1)<<endl;
    cout<<*(pc+2);
    cout<<*(pc+3);

    cout<<p<<endl;
    cout<<pc<<endl;
    return 0;
}
