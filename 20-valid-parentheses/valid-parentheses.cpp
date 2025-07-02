class Solution {
public:
    bool isValid(string s) {
        stack<char>x;
        for(auto i:s){
            if(i=='(' || i=='[' || i=='{') x.push(i);
            else if(x.empty() || (i==')' && x.top()!='(') || (i==']' && x.top()!='[') || (i=='}' && x.top()!='{')) return false;
            else x.pop();
        }
        return x.empty();
    }
};