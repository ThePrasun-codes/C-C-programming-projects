#include<iostream>
using namespace std;
int main(){

cout<< !(3>1) << endl; //faise B
cout<< !(3<1) << endl; //True 1

cout<< ((3>1)||(3<1)) << endl; //True 1
cout<< ((3>1)&&(3<1)) << endl; //false
cout<< ((3>1)&&(3>2)) << endl; //True 1

return 0;
}
