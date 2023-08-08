#include<bits/stdc++.h>
using namespace std;
struct employee{
	int eid;
	char favchar;
	float salary;
};

//typedef struct employee{
//	int eid;
//	char favchar;
//	float salary;
//}ep;


// union only gives highest  size of data to whole structure
union money{
	int rice;
	char car;
	float pounds;
};


int main(){
	struct employee rajesh;
	rajesh.eid=1;
	rajesh.favchar='r';
	rajesh.salary= 500000;
	
	cout<<rajesh.eid<<endl;
	cout<<rajesh.favchar<<endl;
	cout<<rajesh.salary<<endl;
	
//	ep raja;
//	raja.eid=9;
//	cout<<raja.eid<<endl;

union money m1;

m1.rice=13;
cout<<m1.rice<<endl;
m1.car='m';
cout<<m1.car<<endl;
cout<<sizeof(m1)<<endl; //highest data value int=4

enum meal{breakfast, lunch, dinner
};
cout<<breakfast<<endl; //0
cout<<lunch<<endl; //1
cout<<dinner<<endl; //2

meal m2=lunch;
cout<<m2<<endl;

	
	return 0;
}
