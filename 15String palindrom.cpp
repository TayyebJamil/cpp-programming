#include <iostream>
#include <cstring>
using namespace std;

int main(){
     char string[10];
     int length, f=0;
     cout<<"Enter a string of characters to check wether it is in palindrom or not = ";
     cin>>string;
     
     length = strlen(string);
     
     
     for(int i=0; i<length; i++){
     	if(string[i] != string[length-i-1]){
     		f=1;
     		break;
		 }
	 }
	 
	 if(f){
	 	cout<<"Your given string "<<string<<" is not a palindrom"<<endl;
	 }
	 else{
	 	cout<<"Your given string "<<string<<" is a palindrom"<<endl;
	 }
	 cout<<"Length of a given string is = "<<length;
	 return 0;
	 
}
