#include <iostream>
#include<stack>
#include<string>

using namespace std;

bool isoperator(char c){
    return (c=='+' || c=='-' || c=='*' || c=='/');
}

int getPrecedence(char op){
    if(op=='+' || op=='-'){
        return 1;
    }
    else if(op=='*' || op=='/'){
        return 2;
    }
    return 0;
}


string infixToPostfix(const string& infix){
    string postfix;
    stack<char> opstack;

    for(char c: infix){
        if(isalnum(c)){
            postfix+=c;
        }
        else if(c=='('){
            opstack.push(c);
        }

        else if(c==')'){
            while(!opstack.empty() && opstack.top() !='('){
                postfix +=opstack.top();
                opstack.pop();
            }
            opstack.pop();
        }

        else if (isoperator(c)){
            while(!opstack.empty() && getPrecedence(c)<=getPrecedence(opstack.top())){
                postfix+=opstack.top();
                opstack.pop();
            }
            opstack.push(c);
        }

       
    
}


 while(!opstack.empty()){
            postfix+=opstack.top();
            opstack.pop();
        }

        return postfix;

}

int main(){
    string infixEXP;
    cout<<"enetr"<<endl;
    cin>> infixEXP;

    string output=infixToPostfix(infixEXP);
    cout<<"output:"<<output<<endl;

    return 0;
}