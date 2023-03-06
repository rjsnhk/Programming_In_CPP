// q1
// #include<iostream>
// using namespace std;
// int main(){
//     int x,y,pro;
//     cin>>x>>y;
//     pro=x*y;
//     cout<<pro;
//     return 0;
// }


// q2
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"enter a char";
//     char a;

//     cin>>a;
//     cout<< (int) a;
//     return 0;
// }


// // q3
// #include<iostream>
// using namespace std;
// int main(){
//     int l,b,area;
//     cin>>l>>b;
//     area=l*b;
//     cout<<area;

//     return 0;
// }


// // q4
// #include<iostream>
// using namespace std;
// int main(){
//     int a,cube;
//     cin>>a;
//     cube=a*a*a;
//     cout<<"Cube of "<<a<<" is "<<cube;
//     return 0;
// }


// // q5
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     cout<<"data type is "<< sizeof(a);
//     return 0;
// }


// // q6
// #include <iostream>
// using namespace std;

// int main()
// {
// cout << "\nSize of fundamental data types :\n";
// cout << " The sizeof(char) : " << sizeof(char) << " bytes \n" ;
// cout << " The sizeof(short) : " << sizeof(short) << " bytes \n" ;
// cout << " The sizeof(int) : " << sizeof(int) << " bytes \n" ;
// cout << " The sizeof(long): " << sizeof(long) << " bytes \n" ;
// cout << " The sizeof(long long) :" << sizeof(long long) << " bytes \n";
// cout << " The sizeof(float) :" << sizeof(float) << " bytes \n" ;
// cout << " The sizeof(double) :" << sizeof(double) << " bytes \n";
// cout << " The sizeof(long double) :" << sizeof(long double) << " bytes \n";
// cout << " The sizeof(bool) : " << sizeof(bool) << " bytes \n\n";
// return 0;
// }

#include <iostream>
using namespace std;

int main()
{
cout << "\n\n Swap two numbers :\n";
cout << "-----------------------\n";
int n1, n2, temp;
cin>>n1>>n2;
cout << " Before swapping the 1st number is : "<< n1 <<"\n" ;
cout << " Before swapping the 2nd number is : "<< n2 <<"\n" ;
temp=n2;
n2=n1;
n1=temp;
cout << " After swapping the 1st number is : "<< n1 <<"\n" ;
cout << " After swapping the 2nd number is : "<< n2 <<"\n" ;
}
