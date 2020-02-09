#include<bits/stdc++.h>
using namespace std;
int main()
{

string a;
cin>>a;

char n[100];

int k=0;
for(int i=0;i<a.length();)
{

    if(a[i]=='.')
    {
        n[k]='0';
    i++;
    k++;
    }
    else if(a[i]=='-')
    {

        if(a[i+1]=='.')
        {
            n[k]='1';
            i+=2;
            k++;
        }
        else if(a[i+1]=='-')
        {
            n[k]='2';
            i+=2;
            k++;

        }
    }
}
for(int j=0;j<k;j++)
cout<<n[j];



}
