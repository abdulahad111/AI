#include <iostream>
using namespace std;
void tri(int);
void sqr(int);
int main(){
	int s1;
	int s2;
	cout<<"Enter the value for Printing the Stars: ";
	cin>>s1;
	tri(s1);
	cout<<"Enter the value for Square Stars: ";
	cin>>s2;
	sqr(s2);
	return 0;
}
	void tri(int s1){
	
	for(int i= 0;i< s1;i++){
		for(int j= 0; j<=i ;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
	void sqr(int s2){
		for(int i= 0;i< s2;i++){
		for(int j= 0;j<= s2;j++){
			cout<<"*";
		}
		cout<<endl;
		}
	}
