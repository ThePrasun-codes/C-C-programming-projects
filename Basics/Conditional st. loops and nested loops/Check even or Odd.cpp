#include<iostream>
using namespace std;
int main(){
	int num;
	cout<< "Enter a Number: ";
	cin>> num;
	if( num% 2 == 0){
		cout<< "Even Number." << endl;
	} else{
		cout<< "Odd Munber." << endl;
	}
	return 0;
}
