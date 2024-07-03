#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
 

int precedence(char op){
    if(op == '+'||op == '-')
    return 1;
    if(op == '*'||op == '/')
    return 2;
    return 0;
}
 

double applyOp(long a, long b, char op){
    switch(op){
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
    }
    return 0;
}
 
// Function that returns value of
// expression after evaluation.
double evaluate(string tokens){
    int i=0;
     
    // stack to store integer values.
    stack <double> values;
     
    // stack to store operators.
    stack <char> ops;
    if(tokens[i]=='-'&&tokens[i+1]>='0'&&tokens[i+1]<='9'){
        values.push((tokens[i+1]-'0')*-1);
        i+=2;
    }
    else if(tokens[i]=='+') i++;
    for(0; i < tokens.length(); i++){
         
       
        if(tokens[i] == ' ')
            continue;
         
        else if(tokens[i] == '('){
            ops.push(tokens[i]);
        }
         
       
        else if(isdigit(tokens[i])){
            double val = 0;
             
          
            while(i < tokens.length() && 
                        isdigit(tokens[i]))
            {
                val = (val*10) + (tokens[i]-'0');
                i++;
            }
             
            values.push(val);
             
           
              i--;
        }
         
        
        else if(tokens[i] == ')')
        {
            while(!ops.empty() && ops.top() != '(')
            {
                double val2 = values.top();
                values.pop();
                 
                double val1 = values.top();
                values.pop();
                 
                char op = ops.top();
                ops.pop();
                 
                values.push(applyOp(val1, val2, op));
            }
             
           
            if(!ops.empty())
               ops.pop();
        }
         
       
        else
        {
           
            while(!ops.empty() && precedence(ops.top())
                                >= precedence(tokens[i])){
                double val2 = values.top();
                values.pop();
                 
                double val1 = values.top();
                values.pop();
                 
                char op = ops.top();
                ops.pop();
                 
                values.push(applyOp(val1, val2, op));
            }
             
            ops.push(tokens[i]);
        }
    }
     
    
    while(!ops.empty()){
        double val2 = values.top();
        values.pop();
                 
        double val1 = values.top();
        values.pop();
                 
        char op = ops.top();
        ops.pop();
                 
        values.push(applyOp(val1, val2, op));
    }
     
   
    return values.top();
}
 
int main() {
    string a;
    cin>>a;
    cout<<setprecision(40)<<evaluate(a);
    
 return 0;   
}