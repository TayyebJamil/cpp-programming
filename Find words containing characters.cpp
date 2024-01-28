#include<iostream>
#include <string>
using namespace std;

int main(){
	char words[20];
	char a;
	int result;
	cout<<"Enter words = ";
	cin>>words;
	 
	
	cout<<"Enter character : ";
	cin>>a;
	
	char target_string(a);
	cout << "Is " << target_string << " a substring of " << words << " ?\n";
	 
	 
	
}
