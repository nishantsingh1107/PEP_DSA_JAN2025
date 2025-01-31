#include<bits/stdc++.h>
using namespace std;

// int main(){
//     queue<int> q;
//     q.push(1);
//     q.push(2);
//     q.push(3);

//     cout<<q.front()<<endl;
//     cout<<q.size()<<endl;

//     q.pop();
//     cout<<q.back()<<endl;
//     cout<<q.front()<<endl;
//     cout<<q.size()<<endl;
//     cout<<q.empty()<<endl;
// }


// class Queue {
//     public:
//     vector<int> q;
//     void enqueue(int val){
//         q.push_back(val);
//     }
//     void dequeue(){
//         if(!q.empty()){
//             q.erase(q.begin());
//         } 
//         else{
//             cout<<"Queue is empty!"<<endl;
//         }
//     }
//     void printQueue(){
//         if(q.empty()){
//             cout<<"Queue is empty!"<<endl;
//             return;
//         }
//         cout<<"Queue elements: ";
//         for(int val : q){
//             cout<<val<< " ";
//         }
//         cout<<endl;
//     }
// };

// int main() {
//     Queue q;

//     q.enqueue(10);
//     q.enqueue(20);
//     q.enqueue(30);
//     q.enqueue(40);
//     q.printQueue();
//     q.dequeue();
//     q.printQueue();
//     return 0;
// }



// void reverse(queue<int>& q){
// 	stack<int> st;
// 	while (!q.empty()) {
// 		st.push(q.front());
// 		q.pop();
// 	}
// 	while (!st.empty()) {
// 		q.push(st.top());
// 		st.pop();
// 	}
// }
// int main(){
// 	queue<int> q;
// 	q.push(1);
// 	q.push(2);
// 	q.push(3);
// 	q.push(4);
// 	q.push(5);

// 	reverse(q);
// 	while (!q.empty()) {
// 		cout<<q.front()<<" ";
// 		q.pop();
// 	}
// }



void reverseKelements(queue<int>& q, int k){
    stack<int> s;
    for(int i=0;i<k;i++){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
	for(int i=0;i<q.size()-k;i++){
        q.push(q.front());
        q.pop();
    }
}

int main(){
    queue<int> q;
    q.push(6);
    q.push(10);
    q.push(8);
    q.push(12);
    q.push(3);
	
    reverseKelements(q,2);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}
