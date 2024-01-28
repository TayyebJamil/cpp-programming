#include<iostream>
#include<string>
using namespace std;

int main(){
	string cmd;
	string out;
	cout<<"Enter a string of goal parse :";
	cin>>cmd;
	for(int i=0; i<cmd.size(); i++){
		if(cmd[i]=='G'){
			out += ('G');
		}
		else if(cmd[i]=='('){
               if(cmd[i+1]==')'){
                   out += ('o');
               }
               else{
                    out+=('a');
                    out+=('l');
                }
			   
             }
         
    }
        cout<<out;
}

