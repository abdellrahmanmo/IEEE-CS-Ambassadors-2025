#include<bits/stdc++.h>
using namespace std;
int printCount(int size){
	int counter = 0;
	for(int i=0;i<size;i++){
		int value;
		cin>>value;
		if(value == 0){ 
			counter++;
		} else {
			cout<<value<<" ";
		}
	} 
	return counter;
}
int main()
{
	int size;
	cin>>size;
	int zeros = printCount(size);
	for(int i=0;i<zeros;i++){ 
		cout<<0<<" ";
	}
}