#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout<<"Enter a number = ";
    cin>>number;
    
    while (number > 0) {
        cout << number % 10 << endl;
        number /= 10;
    }
    
    return 0;
}

