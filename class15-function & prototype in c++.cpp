#include<bits/stdc++.h>


using namespace std;

// Function prototype
// type function-name (arguments);
// int sum(int a, int b); //--> Acceptable
// int sum(int a, b); //--> Not Acceptable 
//int sum(int, int); //--> Acceptable 
//// void g(void); //--> Acceptable 
//void g(); //--> Acceptable 


int sum(int a,int b){
	// Formal Parameters a and b will be taking values from actual parameters num1 and num2.
	int c=a+b;
	return c;
}
void g(){
	cout<<"hi";
}
int main(){
	int num1,num2;
	cin>>num1>>num2;
	 // a and b are actual parameters
	cout<<sum(num1,num2)<<endl;
	g();
	
	return 0;
}
