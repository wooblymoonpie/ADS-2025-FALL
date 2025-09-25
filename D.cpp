#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(){
    string s;
    cin >> s;

    stack<char> st;
    for(char c : s){

        if(!st.empty() && st.top() == c){
            st.pop();
        }
        else st.push(c);
    }

    if(st.empty()) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}