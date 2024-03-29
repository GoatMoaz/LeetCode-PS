class MinStack {
    stack<int> st;
    stack<int> mn;
public:
    MinStack() {
    }
    
    void push(int val) {
        st.push(val);
        if(mn.empty())
            mn.push(val);
        else if(val<=mn.top())
            mn.push(val);
    }
    
    void pop() {
        if(st.top()==mn.top())
            mn.pop();
        st.pop();  
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mn.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */