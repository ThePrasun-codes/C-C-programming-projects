#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Can Vote" << endl;
    } else {
        cout << "Can't Vote" << endl;
    }

    return 0;
}
