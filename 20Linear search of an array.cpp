#include <iostream>
using namespace std;

int linearsearch(int n, int arr[], int key){
	for(int i=0; i<n; i++){
		if(arr[i]==key){
			return i;
		}
	}
	return  -1;
}

int main(){
	int n;
	cout<<"Enter number of elements :";
	cin>>n;
	cout<<"Enter elements of an array :";
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	int key;
	cout<<"Enter search key :";
	cin>>key;
	
	cout<<linearsearch(n, arr, key);
}
