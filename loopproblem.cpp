
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int a,b,m,n,i;
    string c[]={"","one","two","three","four","five","six","seven","eight","nine"};
    cin>>m>>n;
    a= min(m,n);
    b= max(m,n);
    c[i]={m,n};
    for(int i=a;i<=b;i++)
       {if(i<=9)
       cout<<c[i]<<endl;
       }
    if(m % 2==0)
        cout<<"even"<<endl;
    else
            cout<<"odd"<<endl;

    if(n% 2==0)
        cout<<"even"<<endl;
    else
            cout<<"odd"<<endl;


        return 0;
}
