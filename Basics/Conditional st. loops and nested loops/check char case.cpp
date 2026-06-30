#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<< "Enter a character: ";
	cin>> ch;
	
	if (ch>= 65 && ch<=90){       //'A'= 65 and 'Z'= 90 (by ASCII value)
		cout << "UpperCasr"<<endl;
	} else{
		cout << "LowerCase"<<endl;
	}
	return 0;
}
