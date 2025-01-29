#include<bits/stdc++.h>
using namespace std;

class Mystack{
    public:
    int *arr;
    int top;
    int size;

    Mystack(int s = 100){
        size = s;
        arr = new int[size];
        top = -1;
    }

    ~Mystack(){
        delete[] arr;
    }

    void push(int val){
        if(top == size-1){
            cout<<"Stack Overflow!"<<endl;
            return;
        }
        arr[++top] = val;
    }

    void pop(){
        if(top == -1){
            cout<<"Stack is empty!"<<endl;
            return;
        }
        top--;
    }

    bool empty(){
        return top == -1;
    }

    int peak(){
        if(top == -1){
            cout<<"Stack is empty!"<<endl;
            return -1;
        }
        return arr[top];
    }
};

int main(){
    Mystack s(5);
    s.push(5);
    s.push(10);
    cout<<"Top Element: "<<s.peak()<<endl;
    s.pop();
    cout<<"Top Element: "<<s.peak()<<endl;
}