#include <iostream>
#include<string>
using namespace std;

int main(){
	string words;
	cout<<"Enter strings of words:";
	getline(cin,words);
	
	char a;
	cout<<"Enter character to be find : ";
	cin>>a;
	int inde;
	for(int i=0; i<=words.size(); i++){
		if(words[i]==a){
			cout<<i<<endl;
		}
	}
	
}
