class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> stack;
        int r = 0;
        for(const string& c : operations){
            if(c == "+"){
                int newtop = stack.top(); stack.pop();
                int topp = newtop + stack.top();
                stack.push(newtop);
                stack.push(topp);
                r += topp;
            }
            else if( c == "D"){
                stack.push(2*stack.top());
                r += stack.top();
            }
            else if (c == "C"){
                r -= stack.top();
                stack.pop();

            }
            else {
                stack.push(stoi(c));
                r += stack.top();
            }
        }
        return r;
    }
};