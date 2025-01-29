#include<bits/stdc++.h>
using namespace std;


// // pointer -> it is a special type of variable which stores of points to the address of the other variables
// int main(){
//     int a1 = 5;
//     int a2 = 10;

//     cout<<"Address of a1: "<<&a1<<endl; //gives the address of the variable
//     cout<<"Address of a2: "<<&a2<<endl;

//     // data type of the pointer is same as the variable datatype to which the pointer pointing at
//     int *ptr1 = &a1;
//     cout<<ptr1<<endl;
//     cout<<*ptr1<<endl; // Called Dereferencing of the pointer
// }


// // Call by reference and call by value ->
// // Pass by value this creates a copy of num in function it do not passes the num
// void test(int a){
//     a *= a;
//     cout<<"Num value in test function: "<<a<<endl;
// }

// int main(){
//     int num;
//     cin>>num;

//     test(num);
//     cout<<"Value of num in main function: "<<num<<endl;

// }


// Pass by reference -> it do not passes the copy it passes the address and the changes are directly done in the variable in main function
void test(int &num){
    num *= num;
    cout<<"Num value in test function: "<<num<<endl;
}

int main(){
    int num;
    cin>>num;

    test(num);
    cout<<"Value of num in main function: "<<num<<endl;

}