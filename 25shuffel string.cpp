#include<iostream>
using namespace std;

int main(){
	string s;
	cin>>s;
	int indices[s.size()];
	 
	for(int i=0; i<s.size(); i++){
		cin>>indices[i];
	}
	
	string t=s;
	for(int i=0; i<s.size(); i++){
		  t[indices[i]]=s[i];
	}
	
	 cout<<t;
}
