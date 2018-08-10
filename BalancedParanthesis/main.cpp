#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[20],st[20];
    cout<<"ENTER THE EQUATION : ";
    cin>>a;
    int l,i,top=0;
    l = strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]=='{' || a[i]=='(' || a[i]=='[' )
        {
            st[top]=a[i];
            top++;
        }
        else if(a[i]=='}' && st[top-1]=='{')
        {
            top--;
        }
        else if(a[i]==']' && st[top-1]=='[')
        {
            top--;
        }
        else if(a[i]==')' && st[top-1]=='(')
        {
            top--;
        }
        else if(a[i]=='}' || a[i]==')' || a[i]==']')
        {
            st[top]=a[i];
            top++;
        }
        cout<<top<<endl;
    }
    if(top==0)
        cout<<"\n-----OK-----\n";
    else
        cout<<"\n-----NOT OK-----\n";
    return 0;
}
