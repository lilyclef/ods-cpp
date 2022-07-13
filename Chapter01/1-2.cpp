#include<iostream>
#include<string>
#include<stack>

bool is_dyck(std::string s) {
    std::stack<int> st;
    for (char c : s) {
        if (c == '1') continue;
        if (c == '+') {
            st.push(1);
        } else if (st.empty()){
            return false;
        } else {
            st.pop();
        }
    }
    return st.size() == 0;
}

int main() {
    std::string target = "+1-1-1+1-1";
    if (is_dyck(target)) {
        std::cout << target << " is dyck" << std::endl;
    } else {
        std::cout << target << " is not dyck" << std::endl;
    }
}