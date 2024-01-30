#include<iostream>
using namespace std;

int main(){
	string s;
	cout<<"Enter a string of L and R charaters to check their occurance is balanced :";
	getline(cin,s);
	
	int countl=0;
	int countr=0;
	int count =0;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='L'){
			countl++;
		}
		else if(s[i]=='R'){
			countr++;
		}
		if(countl==countr){
		count++;
	}
	}
	
	cout<<count;
}
