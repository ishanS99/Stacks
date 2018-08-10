#include <iostream>

using namespace std;

void rev2(int p, int st[],int top)
{
    int y;
    if(top==0)
    {
        st[top]=p;
        top++;
    }
    else
    {
        y=st[top-1];
        //cout<<"\nx:"<<x<<endl;
        top--;
        rev2(p , st, top);
        st[top]=y;
        top++;
    }
}

void rev1(int st[],int top)
{
    int z;
    if(top!=0)
    {
        z=st[top-1];
        //cout<<"\nx:"<<x<<endl;
        top--;
        rev1(st,top);
        rev2(z , st,top);
    }
}

int main()
{
    cout << "SIZE: ";
    int n,i,x;
    cin>>n;
    int a[n],top=0;
    cout<<"\nEnter elements in stack"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(top==n){
            cout<<"\n----STACK OVERFLOW----\n";
            break;
            }
        else
        {
            a[top]=x;
            top++;
        }
    }
    cout<<"\n----BEFORE REVERSE----\n";
    for(i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    //cout<<"\nTOPTOP:"<<top<<endl;
    rev1(a,top);
    cout<<"\n----AFTER REVERSE----\n";
    for(i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
