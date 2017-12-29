#include <bits/stdc++.h>
#include <stack>

using namespace std;

string isBalanced(string s) {
    int len = s.length();
    char b;
    stack<char> check;
    for(int i = 0; i < len; i++){
        b = s.at(i);
        if(b == '{' || b == '(' || b == '['){
            check.push(b);}
        else if(b == '}' && !check.empty() && check.top() == '{'){
            check.pop();}
        else if(b == ']' && !check.empty() && check.top() == '['){
            check.pop();}
        else if(b == ')' && !check.empty() && check.top() == '('){
            check.pop();}                        
        else{
            return "NO";
        }
    }
    return (check.empty())?"YES":"NO";
    

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        string result = isBalanced(s);
        cout << result << endl;
    }
    return 0;
}
