#include<iostream>
#include<string>
#include<stack>

bool is_match(std::string s) {
    std::stack<char> st;
    for (char c : s) {
        if (c == '{' || c == '(' || c == '[') {
            st.push(c);
            continue;
        }
        if (st.empty()){
            return false;
        }
        if (c == '}') {
            if (st.top() != '{') return false;
            st.pop();
        } else if (c == ')') {
            if (st.top() != '(') return false;
            st.pop();
        } else if (c == ']') {
            if (st.top() != '[') return false;
            st.pop();
        }
    }
    return st.size() == 0;
}

int main() {
    std::string target = "()[[]]{}{}";
    if (is_match(target)) {
        std::cout << target << " is match" << std::endl;
    } else {
        std::cout << target << " is not match" << std::endl;
    }
}