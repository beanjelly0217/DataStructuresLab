#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<iostream>
using namespace std;
char stack[20];
int top = -1;
void push(char x)
{
    stack[++top] = x;
}

char pop(){
 char a;
 a=stack[top];
 top--;
  return a;
}

int prcd(char x)
{
    if(x == '^')
        return 3;
    if(x == '(' || x == ')')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
}
void infix_post(char *data, char x){
    while(*data != '\0')
    {
        if(isalnum(*data))
            cout<< *data;
        else if(*data == '(')
            push(*data);
        else if(*data == ')')
        {
            while((x = pop()) != '(')
                cout<<  x;
        }
        else
        {
            while(prcd(stack[top]) >= prcd(*data))
                cout<< pop();
            push(*data);
        }
        data++;
    }
    while(top != -1)
    {
        cout<< pop();
    }
} // End of infix to prefix function


void infix_pre(char infix[],char prefix[])
{
    int i,symbol,j=0;
    infix=strrev(infix); //Used 'strrev' to reverse string
    stack[++top]=-1;

    for(i=0;i<strlen(infix);i++)
    {
        symbol=infix[i];
        if(isalnum(symbol)) //Is symbol a alphabet or number
        {
            prefix[j]=symbol; //put the symbol in prefix array
            j++;
        }
        else
        {
            if(symbol==')')
            {
                push(symbol); //Enter the ) symbol in stack
            }
            else if(symbol=='(')
            {
                while(stack[top]!=')')
                {
                    prefix[j]=pop();//deleting the first symbol from stack and replacing it on prefix array
                    j++;
                }
                pop();//pop out ( form the stack
            }
            else
            {
                if(prcd(symbol)>prcd(stack[top]))// is the symbol has higher precedence than to stack
                {
                    push(symbol); //push the symbol
                }
                else
                {
                    while(prcd(symbol)<=prcd(stack[top]))
                    {
                        prefix[j]=pop(); //deleting the first symbol from stack and replacing it on prefix array
                        j++;
                    }
                    push(symbol);
                }//end of else.
            }//end of else.
        }//end of else.
    }//end of for.

    while(stack[top]!=-1)
    {
        prefix[j]=pop();
        j++;
    }

    prefix[j]='\0';//null terminate string.
    prefix=strrev(prefix);
}

int main()
{
    char exp[20];
    char *e, *prefix, x;
    cout<<"Enter the expression : ";
    scanf("%s",exp);
    e = exp;
    cout<<"Postfix Expression : ";
    infix_post(e, x);
    cout<<"\nPrefix Expression : ";
    infix_pre(e, prefix);
    cout<<prefix;

}
