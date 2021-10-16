//infix to postfix
#include<stdio.h>
char stack[20];
int top = -1;
void push(char x)
{
    stack[++top] = x;
}
 
char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}
 
int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
}
 
main()
{
    char exp[20];
    char *e, x;
    printf("Enter the expression :: ");
    scanf("%s",exp);
    e = exp;
    while(*e != '\0')
    {
        if(isalnum(*e))
            printf("%c",*e);
        else if(*e == '(')
            push(*e);
        else if(*e == ')')
        {
            while((x = pop()) != '(')
                printf("%c", x);
        }
        else
        {
            while(priority(stack[top]) >= priority(*e))
                printf("%c",pop());
            push(*e);
        }
        e++;
    }
    while(top != -1)
    {
        printf("%c",pop());
    }
}
/*
Let, X is an arithmetic expression written in infix notation. This algorithm finds the equivalent postfix expression Y.

Step 1.Push “(“onto Stack, and add “)” to the end of X.
Step 2.Scan X from left to right and repeat Step 3 to 6 for each element of X until the Stack is empty.
Step 3.If an operand is encountered, add it to Y.
Step 4.If a left parenthesis is encountered, push it onto Stack.
Step 5.If an operator is encountered ,then:
Repeatedly pop from Stack and add to Y each operator (on the top of Stack) which has the same precedence as or higher precedence than operator.
Step 6.Add operator to Stack.
Step 7.If a right parenthesis is encountered ,then:
Step 8.Repeatedly pop from Stack and add to Y each operator (on the top of Stack) until a left parenthesis is encountered.
Step 9.Remove the left Parenthesis.
Step 10.END.    
*/