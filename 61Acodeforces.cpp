#include<bits/stdc++.h>
#define ll long long
#define  vi vector<int>
using namespace std;
void solve()
{
string a,s;
    int num1,num2;
    cin>>num1>>num2;
    a=to_string(num1);
    s=to_string(num2);
    int y=a.length();
char m[100];
int j=0;
 for(int i=0;i<y;i++)

    {
        if(a[i]!=s[i])
        {
            m[j]='1';
                  j++;
        }
         else
         {m[j]='0';
    j++;
    }}
 for(int i=0;i<j;i++)
 {


   cout<<m[i];
 }
}
int main()
{
    //int t;
    //cin>>t;
    solve();
}

