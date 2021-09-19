#include <iostream>
using namespace std;
void swap(int ,int );
int main(){
	int a,b;
	cout<<"Enter the value for A: ";
	cin>>a;
	cout<<"Enter the value for B: ";
	cin>>b;
	swap(a,b);
}

void swap(int a, int b){
	a = a+b;
	b = a-b;
	a = a-b;
	cout<<"The Value of A is = "<< a << endl;
	cout<<"The Value of B is = "<< b <<endl;

}
