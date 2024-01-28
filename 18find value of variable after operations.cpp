#include<iostream>
#include<string>
using namespace std;

int main(){
	string operations[10];
	int n;
	cout<<"Enter number of operations = ";
	cin>>n;
	cout<<"Enter operations : (x++, ++x, x--, --x)"<<endl;
	for(int i=0; i<n; i++){
		cin>>operations[i];
	}
	
	int x=0;
	for(int i=0; i<n; i++){
		if(operations[i]=="x++"||operations[i]=="++x"){
			x++;
		}
		else if(operations[i]=="x--"||operations[i]=="--x"){
			x--;
		}
		else{
			cout<<"Your given operation is not valid ";
		}
	}
	
	cout<<"Value of x = "<<x;
	
}
