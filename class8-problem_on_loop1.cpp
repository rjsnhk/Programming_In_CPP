// // q1 
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=4;i++){
//         for(int i=1;i<7;i++){
//         cout<<"*";
//     }
//     cout<<endl;
//     }
//     return 0;
// }

//q2
// #include<iostream>
// using namespace std;
// int main(){
//     int r,c;
//     for(c=1;c<=6;c++){
//         for(r=1;r<=6;r++){
//             if(r==1 || r==6 || c==1 || c==6){
//                 cout<<'*';
//             }
//             else{
//                 cout<<' ';
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// q3
// #include<iostream>
// using namespace std;
// int main(){
//     for(int r=1;r<=4;r++){
//         for(int c=1;c<=r;c++){
//             cout<<'*';
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// q4
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a num"<<endl;
//     cin>>n;
//     for(int r=1;r<=n;r++){
//         for(int c=1;c<=(n-r+1);c++){
//             cout<<'*';
//         }
//     cout<<endl;
//     }
// }

// q5
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"enter a num";
//     cin>>a;
//     for(int r=1;r<=a;r++){
//         for(int sp=1;sp<=(a-r);sp++){
//             cout<<' ';
//         }
//         for(int st=1;st<=2*r-1;st++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// q6
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a num";
//     cin>>n;
//     for(int r=1;r<=n;r++){
//         for(int c=r;c<=n;c++){
//             cout<<c;
//         }
//         for (int c=1;c<=(r-1);c++){
//             cout<<c;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//q7
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a num";
//     cin>>n;
//     for(int r=1;r<=n;r++){
//         for(int c=1;c<=n;c++){
//             cout<<c;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// // q8
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a num"<<endl;
//     cin>>n;
//     for(int r=1;r<=n;r++){
//         for(int c=1;c<=n;c++){
//             if(r==1||r==n||c==1||c==n){
//                 cout<<c;
//             }
//             else{
//                 cout<<' ';
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// // q9
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"enter two num"<<endl;
//     cin>>n>>m;
//     for(int r=1;r<=n;r++){
//         for(int c=1;c<=m;c++){
//             if(r%2!=0){
//                 if(c%2!=0){
//                 cout<<"1";
//                 }
//                 else{
//                 cout<<"2";
//                 }
//             }
//             if(r%2==0){
//                 if(c%2!=0){
//                 cout<<"2";
//                 }
//                 else{
//                 cout<<"1";
//                 }
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// q10
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a num";
//     cin>>n;
//     for(int r=1;r<=n;r++){
//         for(int c=1;c<=r;c++){
//             cout<<c;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// // q11
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a num";
//     cin>>n;
//     for(int r=1;r<=n;r++){
//         for(int sp=1;sp<=n-r;sp++){
//             cout<<' ';
//         }
//         for(int st=1;st<=r;st++){
//             cout<<st;
//         }
//         for(int st2=r-1;st2>=1;st2--){
//             cout<<st2;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// q12
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a num";
    cin>>n;
    for(int r=1;r<=n;r++){
        for(int sp=1;sp<=n-r;sp++){
            cout<<' ';
        }
        for(int st=1;st<=2*r-1;st++){
            if(r==1 || r==n ||st==1 || st==2*r-1)
                cout<<r;
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
