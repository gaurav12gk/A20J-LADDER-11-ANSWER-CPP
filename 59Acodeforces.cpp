#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
string a;
cin>>a;
int low=0;
int high=0;
for(int i=0;i<a.length();i++)
{
    if(a[i]>=65&&a[i]<=90)
        high++;
        else
            low++;


}
if(low>=high)
{
    for(int i=0;i<a.length();i++)
         {
             if(a[i]>=65&&a[i]<=90)
                a[i]+=32;
         }

}
else
{
    for(int i=0;i<a.length();i++)
    {

        if(a[i]>=97&&a[i]<=122)
            a[i]-=32;
    }
}

cout<<a;
}
