#include<iostream>
using namespace std;
void printPattern1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
           cout<<"*"<<endl;
        }
    }
}
void printPattern2(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n-i+1;j++)
        {
           cout<<"*"<<endl;
        }
    }
}
void printPattern3(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
           cout<<j<<endl;
        }
    }
}
void printPattern4(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
           cout<<i<<endl;
        }
        cout<<endl;
    }
}
void printPattern5(int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
           cout<<i<<endl;
        }
        cout<<endl;
    }
}
void printPattern6(int n)

{
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
           cout<<j<<endl;
        }
    }
}
void printPattern7(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++)
        {
           cout<<"*";
        }
        for(int j=0;j<n-1-i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
        
    }
}
void printPattern8(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++)
        {
           cout<<"*";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
        
    }
}
void printPattern9(int n)
{
    for(int i=1;i<=n;i++)
    {
        int stars=i;
        if(i>n) stars=2*n-1;
        for(int j=1;j<stars;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void printPattern10(int n)
{
    int start=1;
    for(int i=0;i<n;i++)
    {
        if(i%2==0) start=1;
        else start=0;
        for(int j=0;j<=i;j++)
        {
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}
void printPattern11(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int j=1;j<=2*n-2*i;j++)
        {
           cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
        
    }
}
void printPattern12(int n)
{
    int num=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<num;
            num=num+1;
        }
         
    }
}
void printPattern13(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char j='A';j<='A'+i;j++)
        {
            cout<<j<<endl;
        }
         
    }
}
void printPattern13(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char j='E'-i;j<='E';j++)
        {
            cout<<j<<endl;
        }
         
    }
}
int main()
{
    int n;
    cin>>n;
    printPattern1(n);
    printPattern2(n);
    printPattern3(n);
    printPattern4(n);
    printPattern5(n);
    printPattern6(n);
    printPattern7(n);
    printPattern8(n);
    printPattern9(n);
    printPattern10(n);
    printPattern11(n);
    printPattern12(n);
    printPattern13(n);
    printPattern14(n);
    return 0;
}