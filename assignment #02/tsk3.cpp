#include <iostream>
using namespace std;
void swap(int,int,int);
int main(){
	int a, b,temp;
	cout<<"Enter the value for A: ";
	cin>>a;
	cout<<"Enter the value for B: ";
	cin>>b;
	swap(a,b,temp);	
	return 0;
}
void swap (int a,int b, int temp){
	cout<<"The value of A before Swap "<< a << endl;
	cout<<"The value of B before Swap " << b << endl;
	cout<<endl;
	temp = a;
	a = b;
	b = temp;
	cout<<"The value of A after Swap " << a << endl;
	cout<<"The value of B after Swap " << b <<endl;

}
