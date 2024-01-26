#include <iostream>
#include <string>
using namespace std;

int main(){
    string ip;
    string output;
    cout << "Enter a valid ip address = ";
    cin >> ip;
    for(int i=0; i<ip.size(); i++){
        if(ip[i]=='.'){
            output.append(" [.]") + to_string(i) + "[.]";
        }
        else{
            output += ip[i];
        }
    }
    cout << output;
}

