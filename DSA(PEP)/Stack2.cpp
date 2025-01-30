#include<bits/stdc++.h>
using namespace std;

// void reverseSentence(string s){
//     stack<string> st;
//     for(int i=0;i<s.length();i++){
//         string word = "";
//         while(s[i] != ' ' && i < s.length()){
//             word += s[i];
//             i++;
//         }
//         st.push(word);
//     }
//     while(!st.empty()){
//         cout << st.top() << " ";
//         st.pop();
//     }
// }

// int main(){
//     string str = "Hello world!!";
//     reverseSentence(str);
// }


// Valid Parentheses
bool isValidParentheses(string s) {
    stack<char> st;

    for(int i=0;i<s.length();i++) {
        if (s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        } 
        else{
            if(st.empty()) return false;
            
            if((s[i]==')' && st.top()=='(') || (s[i]=='}' && st.top()=='{') || (s[i]==']' && st.top()=='[')){
                st.pop();
            } 
            else{
                return false;
            }
        }
    }
    return st.empty();
}

int main(){
    string str = "{([()])}";
    bool ans = isValidParentheses(str);    
    cout<<ans<<endl;
}