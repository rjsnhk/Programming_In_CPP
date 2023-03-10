//only if
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"enter num";
//     cin>>x;
//     if(x>5){
//         cout<<"greater 5"<<endl;
//     }
//     if(x>6){
//         cout<<"greater than 6";
//     }
//     return 0;
// }



// if-else
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"enter num";
//     cin>>x;
//     if(x>6){
//         cout<<"greater than 6";
//     }
//     else{
//         cout<<"lesser";
//     }
//     return 0;
// }



//if-elseif-else
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"enter num";
//     cin>>x;
//     if(x>6){
//         cout<<"greater than 6";
//     }
//     else if(x>5){
//         cout<<"greter than 5";
//     }
//     else if(x>4){
//         cout<<"greter than 4";
//     }
//     else{
//         cout<<"lesser";
//     }
//     return 0;
// }



// //nested if
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"enter num";
//     cin>>x;
//     if(x>6){
//         if(x%2==0){
//             cout<<"even";
//         }
//         else{
//             cout<<"odd";
//         }
//     }
//     else{
//         cout<<"lesser";
//     }
//     return 0;
// }

//two condition check -- &&,||

#include<iostream>
using namespace std;
int main(){
    // cout<<"enter 2 num";
    // int a,b;
    // cin>>a>>b;
    // if (a>=b){
    //     cout<<"a>=b"<<endl;
    // }
    // else{
    //     cout<<"a<b"<<endl;
    // }

    // //by ternary
    // (a<=b)?cout<<"a<=b":cout<<"a>b";

    cout<<true&&false; //1

    cout<<(45&34)<<endl; //32



    // switch case

    // int day;
    // cin>>day;
    // switch(day){
    //     case 1:
    //     printf("sunday");
    //     break;
    //     case 2:
    //     printf("monday");
    //     break;
    //     case 3:
    //     printf("tuesday");
    //     break;
    //     default:
    //     printf(" rest in piece");
    // }

    char chr;
    cout<<"enter a char"<<endl;
    cin>>chr;
    switch (chr)
    {
    case 'a':
        printf("vowel");
        break;
    case 'A':
        printf("vowel");
        break;
    case 'e':
        printf("vowel");
        break;
    case 'E':
        printf("vowel");
        break;
    case 'i':
        printf("vowel");
        break;
    case 'I':
        printf("vowel");
        break;
    case 'o':
        printf("vowel");
        break;
    case 'O':
        printf("vowel");
        break;
    case 'u':
        printf("vowel");
        break;
    case 'U':
        printf("vowel");
        break;
    
    default:
    printf("consonant");
        break;
    }
    return 0;
    
}