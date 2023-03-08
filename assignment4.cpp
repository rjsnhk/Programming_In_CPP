// q1
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"enter 2 num";
//     int a,b;
//     cin>>a>>b;
//     if(a==b){
//         cout<<"same";
//     }
//     else{
//         cout<<"different";
//     }
//     return 0;
// }



//q2
// #include <iostream>
// using namespace std;
// int main()
// {
// int x,y;
// cout<<"Enter the first number ";
// cin >> x;
// cout<<"Enter the second number ";
// cin >> y;
// cout << (x == y) ? 1:0 ;
// return 0;
// }



//q3
// #include<iostream>
// using namespace std;
// int main(){
//     int total,boy=25,A,bA=17;
//     A=80*45/100;
//     int girl=A-17;
//     cout<<"enter total student"<< endl;
//     cin>>total;
//     cout<<"girl get a grade="<<girl;

//     return 0;
// }



//q4
// #include <iostream>
// using namespace std;
// int main()
// {
// int n, first, second, third, fourth, fifth, sum;
// n = 12345;
// /*Take out each digit of this number and then finally add the first and the second last digits*/
// first = n/10000; //first digit
// n = n%10000;
// second = n/1000; //second digit
// n = n%1000;
// third = n/100; //third digit
// n = n%100;
// fourth = n/10; //fourth digit
// fifth = n%10; //fifth digit
// sum = first + fourth;
// cout << "sum of first and fourth digit is: " << sum << endl;
// return 0;
// }



// q5
// #include<iostream>
// using namespace std;
// int main(){
//     int n,fir,sec,thr;
//     cout<<"enter 3 digit no"<<endl;
//     cin>>n;
//     fir=n/100;
//     n=n%100;
//     sec=n/10;
//     thr=n%10;
//     cout<< fir+sec+thr;
//     return 0;
// }



//q6
# include <iostream>
using namespace std;
int main() {
float num1, num2;
cout << "Enter the first number ";
cin >> num1;
cout << "Enter the second number ";
cin >> num2;
cout << "Sum = " << num1 + num2<<endl;
cout <<"Difference = " << num1 - num2<<endl;
cout <<"Product = " << num1 * num2<<endl;
cout << "Division = " << num1 / num2<<endl;
return 0;
}