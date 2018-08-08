#include <iostream>
#include <string.h>
using namespace std;

int pri(char a)
{
    if(a=='+'||a=='-')
        return 3;
    else if(a=='*'||a=='/')
        return 4;
    else if(a=='^')
        return 5;
    else if(a=='(')
        return 1;
    else if(a==')')
        return 2;
}

int main()
{
    char in[20], out[20], st[20],top = 0,i,k=0;
    cin>>in;
    int l = strlen(in);
    for(i=0;i<l;i++)
    {
        if( in[i]=='+'||in[i]=='-'||in[i]=='*'||in[i]=='/'||in[i]=='^'||in[i]=='('||in[i]==')' )
        {
            if(top==0)
            {
                st[top]=in[i];
                top++;
            }
            else
            {
                if(pri(in[i])==1)
                {
                    st[top] = in[i];
                    top++;
                }
                else if(in[i]==')')
                {
                    while(st[top]!='(')
                    {
                        out[k]=st[top];
                        top--;
                        k++;
                    }
                    top--;
                }
                else if(pri(st[top])>pri(in[i]))
                {
                    while(pri(st[top])>pri(in[i]))
                    {
                        out[k]= st[top];
                        top--;
                        k++;
                    }
                    st[top] = in[i];
                    top++;
                }
                else
                {
                    st[top] = in[i];
                    top++;
                }
            }
        }
        else
        {
            out[k]=in[i];
            k++;
        }
    }
    while(top>-1)
    {
        out[k]= st[top];
        top--;
        k++;
    }
    for(i=0;i<k;i++)
    {
        cout<<out[i];
    }
    return 0;
}
