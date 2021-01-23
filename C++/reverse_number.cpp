#include<iostream>
using std::cout;
using std::cin;
class operation{
	int num;

public:
	void inputNumber(){
		cout<<"Enter number to be reversed\n";
		cin>>num;
	}
	int reverseNumber(){
		int rem,invert = 0;
		while(num != 0){
			invert = 10 * invert;
			invert =invert + num % 10;
			
			num = num /10;
		}
		return  invert;

	}

};
int main(){
	int result;
	operation t;
	t.inputNumber();
	result=t.reverseNumber();
	cout<<"Reverse number is = "<<result;
	return 0;
}