#include<iostream>
using namespace std;
int main(){

	//Post Increament
	int a= 10;
	int b= a++;
	cout << "b= "<< b << endl;
	cout << "a= "<< a << endl;
	
	//Pre increament
	int c=10;
	int d= ++c;
	cout << "d= "<< d << endl;
	cout << "c= "<< c << endl;
	
	//Post Decreament
	int e=10;
	int f= e--;
	cout << "f= "<< f << endl;
	cout << "e= "<< e << endl;
	
	//Pre Decreament
	int g= 10;
	int h= --g;
	cout << "h= "<< h << endl;
	cout << "g= "<< g << endl;
		
	return 0;
}
