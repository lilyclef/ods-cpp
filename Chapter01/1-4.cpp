#include<iostream>
#include<stack>
#include<queue>

void reverse_stack(std::stack<int>& st) {
    std::queue<int> que;
    while (!st.empty()) {
        int top = st.top();
        que.push(top);
        st.pop();
    }
    while (!que.empty()) {
        int front = que.front();
        st.push(front);
        que.pop();
    }
}

int main() {
    std::stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    reverse_stack(st);

    while (!st.empty()) {
        int top = st.top();
        std::cout << top << std::endl;
        st.pop();
    }
}