class MinStack {
public:
    stack <int> minStack;
    stack <int> st;


    MinStack() {}
    
    void push(int val) {
        minStack.push(val);
        if(st.empty()){
            st.push(val);
        }
        else if(minStack.top()<=st.top()){
            st.push(val);
        }

    }
    
    void pop() {
        if(st.top()==minStack.top()){
            
            st.pop();
        }
        minStack.pop();
        
    }
    
    int top() {
        return minStack.top();
    }
    
    int getMin() {
        return st.top();
    }
};
