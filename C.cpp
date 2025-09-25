#include <iostream>
#include <string>
#include <stack>
using namespace std;

string line(string s){
    stack<char> st;

    for(char c : s){
        if(c == '#'){
            if(!st.empty()) st.pop();
        }
        else st.push(c);
    }

    string res = "";
    while(!st.empty()){
        res = res + st.top();
        st.pop();
    }
    return res;
}

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    if(line(s1) == line(s2)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}