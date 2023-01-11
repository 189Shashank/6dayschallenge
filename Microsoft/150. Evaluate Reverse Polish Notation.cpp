class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> s;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]!="+"&&tokens[i]!="-"&&tokens[i]!="*"&&tokens[i]!="/")
            {s.push(tokens[i]);}
            else{
                string s1=s.top();
                int op2=stoi(s1);
                s.pop();
                s1=s.top();
                int op1=stoi(s1);
                s.pop();
                if(tokens[i]=="+")
                {   int x=op1+op2;
                    s.push(to_string(x));
                }
                if(tokens[i]=="-")
                {
                    int x=op1-op2;
                    s.push(to_string(x));
                }
                if(tokens[i]=="*")
                {
                    int x=op1*op2;
                    s.push(to_string(x));
                }
                if(tokens[i]=="/")
                {
                    int x=op1/op2;
                    s.push(to_string(x));
                }
            }
        }
        return stoi(s.top());
    }
};