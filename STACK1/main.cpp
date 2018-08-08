#include <iostream>
using namespace std;



void push(int x, int top, int* st)
{
    if(top==10-1)
        cout<<"STACKOVERFLOW";
    else
    {
        st[top]=x;
        top++;
    }
}
void pop(int top)
{
    if(top==0)
        cout<<"EMPTY";
    else
        top--;
}



int main()
{
    int k=0,top=0;
    int x,st[10];
    while(k!=4)
    {
        cout<<"1. Push\n2. Pop\n3. Display\n4. Exit\nEnter your choice:";
        cin>>k;

        cout<<"\n\n\n-------------------\n\n\n";
        if(k==1)
        {
            cout<<"Enter element:";
            cin>>x;
            if(top==10-1)
                cout<<"\nSTACKOVERFLOW\n";
            else
            {
                st[top]=x;
                top++;
            }
            k=0;
        }
        else if(k==2)
        {
            if(top==0)
                cout<<"\nEMPTY\n";
            else
                top--;

            k=0;
        }
        else if (k==3)
        {
            cout<<"ELEMENTS ARE: ";
            for(int i=0;i<top;i++)
            {
                cout<<st[i]<<" ";
            }
            cout<<endl;

            k=0;
        }
        else if(k==4)
        {
            cout<<"\nTHANK YOU\n";
        }
    }
    return 0;
}
