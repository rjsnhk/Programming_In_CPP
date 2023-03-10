// q1
// #include<iostream>
// using namespace std;
// int main(){
//     int l,b;
//     cout<<"enter length"<<endl;
//     cin>>l;
//     cout<<"enter breadth"<<endl;
//     cin>>b;
//     if(l==b){
//         cout<<("this is square");
//     }
//     else{
//         cout<<"not square";
//     }
//     return 0;
// }

//q2
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"enter a num"<<endl;
//     int a;
//     cin>>a;
//     if(a>0){
//         cout<<a;
//     }
//     else{
//         cout<<a*(-1);
//     }
//     return 0;
// }

//q3
// #include<iostream>
// using namespace std;
// int main(){
//     int c,s;
//     cout<<"enter cost"<<endl;
//     cin>>c;
//     cout<<"enter selling price"<<endl;
//     cin>>s;
//     if(s>=c){
//         cout<<"profit is "<<s-c;
//     }
//     else{
//         cout<<"loss is "<<c-s;
//     }
    
    
//     return 0;
// }

// q4
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"enter a num"<<endl;
//     int a;
//     cin>>a;
//     if(a>0){
//         cout<<"it is positive number";
//     }
//     else{
//         cout<<"the num is negative so skiped";
//     }
//     return 0;
// }

// q5
// #include<iostream>
// using namespace std;
// int main(){
//     char op;
//     cout<<"enter an operator"<<endl;
//     cin >> op;
//     float a,b;
//     cout<<"enter 2 num"<<endl;
//     cin>>a>>b;
//     switch (op)
//     {
//     case '+':
//         cout<<a+b;
//         break;
//     case '-':
//         cout<<a-b;
//         break;
//     case '*':
//         cout<<a*b;
//         break;
//     case '/':
//         cout<<a/b;
//         break;
    
//     default:
//     cout<<"invalid";
//         break;
//     }

//     return 0;
// }



//q6
#include <iostream>
using namespace std;
int main(){
    cout<<"enter your marks"<<endl;
    int m;
    cin>>m;
    if(m<=100&&m>=90){
        cout<<"A+";
    }
    else if(m<90&&m>=80){
        cout<<"A";
    }
    else if(m<80&&m>=70){
        cout<<"B+";
    }
    else if(m<70&&m>=60){
        cout<<"B";
    }
    else if(m<60&&m>=50){
        cout<<"C";
    }
    else if(m<50&&m>=40){
        cout<<"D";
    }
    else if(m<40&&m>=30){
        cout<<"E";
    }
    else if(m<30&&m>=0){
        cout<<"F";
    }
    return 0;
}
