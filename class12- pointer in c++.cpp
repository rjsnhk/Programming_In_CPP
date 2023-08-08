#include<bits/stdc++.h>
using namespace std;
int main(){
	//pointer is a data type which hold adrees of same data type *p
	int a=3;
	int *p=&a;
	cout<<&a<<" "<<p<<endl;
	cout<<a<<" "<<*p<<endl;
	
	
	int **z=&p;
	cout<< z<< *z << **z<<endl;
	
	int ***x=&z;
	cout<< ***x;
	return 0;
}
