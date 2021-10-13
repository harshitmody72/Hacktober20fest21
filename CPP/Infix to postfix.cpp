#include <iostream>
using namespace std;
#define MAX_SIZE 10

struct stack
{
    char st[MAX_SIZE];
    int top;
};
struct stack2
{
    int st[MAX_SIZE];
    int top;
};
bool IsOperator(char);
bool IsOperand(char);
bool eqlOrhigher(char, char);
string convert(string);



void pop(struct stack* s)
{
    if (s->top==-1)
    {
        return;
    }
    else
    {
        
        s->top--;
        
    }
}

char pop2(struct stack* s)
{
    if (s->top==-1)
    {
        return '$';
    }
    else
    {
        char temp=s->st[s->top];  
        s->top--;
        return temp;
    }
}
int pop3(struct stack2* s)
{
    if (s->top==-1)
    {
        return '$';
    }
    else
    {
        int temp=s->st[s->top];  
        s->top--;
        return temp;
    }
}
void push(struct stack* s,char item)
{
    if(s->top==MAX_SIZE-1)
    {
        return;
    }
    else
    {
        s->top++;
        s->st[s->top]=item;
        
    }
}
void push2(struct stack2* s,int item)
{
    if(s->top==MAX_SIZE-1)
    {
        return ;
    }
    else
    {
        s->top++;
        s->st[s->top]=item;
        
    }
}
char top(struct stack* s)
{
    return char(s->st[s->top]);
}

int top2(struct stack2* s)
{
    return s->st[s->top];
}


bool IsOperator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
        return true;
    return false;
}


bool IsOperand(char c)
{
    if (c >= 'A' && c <= 'Z') 
        return true;
    if (c >= 'a' && c <= 'z')
        return true;
    return false;
}

int precedence(char op)
{
    if (op == '+' || op == '-') 
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;
    return 0;
}

bool eqlOrhigher(char op1, char op2)
{
    int p1 = precedence(op1);
    int p2 = precedence(op2);
    if (p1 == p2)
    {
        if (op1 == '^')
            return false;
        return true;
    }
    return (p1 > p2 ? true : false);
}

int Prec(char ch)
{
     if (ch=='+' || ch=='-')
 {
     return 1;
 }
 else if (ch=='*' || ch=='/')
 {
     return 3;
 }
 else if (ch == '^')
 {
     return 6;
 }
}

int stackPrec(char ch)
{
     if (ch=='+' || ch=='-')
 {
     return 2;
 }
 else if (ch=='*' || ch=='/')
 {
     return 4;
 }
 else if (ch == '^')
 {
     return 5;
 }
    return -1;
}


void convert(string infix,string* postfix)
{
    struct stack s;
    s.top=-1;
    char ch;
    push(&s,'(');
    infix += ')';

    for (int i = 0; i < infix.length(); i++)
    {
        
        ch = infix[i];
        
        
        if (ch == '(')
            push(&s,ch);
        else if (IsOperand(ch))
            *postfix += ch;
        else if (IsOperator(ch))
        {
            while (s.top!=-1 && Prec(ch) < stackPrec(top(&s)))
            {
                *postfix += top(&s);
                pop(&s);
            }
            push(&s,ch);
        }
        else if (ch == ')')
        {
            while (s.top!=-1 && top(&s) != '(')
            {
                *postfix += top(&s);
                pop(&s);
            }
            pop(&s);
        }
    }
    
}
int calculate(int op1,char oper,int op2)
{
    if(oper=='+')
        return op2+op1;
    else if(oper=='-')
        return op2-op1;
    else if(oper=='*')
        return op2*op1;
    else if(oper=='/')
        return op2/op1;
    else if(oper=='^')
    {
        int result=1;
        int i=op1;
        while(i!=0)
        {
            result = result*op2;
            i--;
        }
        return result;
    }
}
int evaluatePostfix(string postfix)
{
    
    struct stack2 s1;
    s1.top=-1;
    int i=0;
    while(i<postfix.length())
    {
        if(IsOperand(postfix[i]))
        {
            int temp;
            cout<<"Enter value of "<<postfix[i]<<": ";
            cin>>temp;
            push2(&s1,temp);

        }
        else
        {
            int op1=pop3(&s1);
            int op2=pop3(&s1);
            char op =postfix[i];
            int value= calculate(op1,op,op2);
            push2(&s1,value);

        }
        i++;
    }
    int final = top2(&s1);
    return final;

    
 
    
}
int main()
{
    string infix_expression, postfix_expression;
    int result;
    
        cout << " Enter an infix expression: ";
        cin >> infix_expression;
        convert(infix_expression,&postfix_expression);
        cout << "\n Your Infix expression is: " << infix_expression;
        cout << "\n Postfix expression is: " << postfix_expression;
        cout<<"\n Lets caluculate result"<<endl;
        result=evaluatePostfix(postfix_expression);
        cout<<"\n Result of postfix expression is: "<<result;
    return 0;
}
