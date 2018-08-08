#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int a[10],b[10],ch=1,top1=0,top2=0,x,i;
    while(ch!=0)
    {
        cout<<"ENter choice 1(insert) / 2(delete):";
        cin>>ch;
        if(ch==1)
        {
            cout<<"Enter element:";
            cin>>x;
            a[top1]=x;
            top1++;
        }
        else if(ch==2)
        {
            for(i=(top1-1);i>0;i--)
            {
                b[top2]=a[i];
                top2++;
            }
            top1--;
            for(i=(top2-1);i>=0;i--)
            {
                a[top1]=b[i];
                top1++;
            }
        }
    }
    for(i=0;i<=top1-1;i++)
    {

        cout<<a[i]<<endl;
    }


    return 0;
}
