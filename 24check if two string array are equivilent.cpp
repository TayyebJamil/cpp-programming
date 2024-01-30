#include<iostream>
using namespace std;

int main(){
	string w1;
	getline(cin,w1);
	
	string w2;
	getline(cin,w2);
	
	string a;
	string b;
	
	for(int i=0 ; i<w1.size(); i++){
		a = a + w1[i];
	}
	
	for(int i=0 ; i<w2.size(); i++){
		b = b + w2[i];
	}
	if (a==b) {
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	
	
}

