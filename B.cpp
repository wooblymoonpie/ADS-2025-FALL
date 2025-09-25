#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main(){
    int n;
    cin >> n;

    vector<int> in(n); //ages
    for(int i = 0; i < n; i++){
        cin >> in[i];
    }

    vector<int> out(n); //output
    stack<int> st;

    for(int i = 0; i < n; i++){
        while(!st.empty() && in[i] < in[st.top()]){
            st.pop();
        }

        if(st.empty()) out[i] = -1;
        else out[i] = in[st.top()];
        st.push(i);
    }

    for(int i = 0; i < n; i++){
        cout << out[i] << " ";
    }
    return 0;
}