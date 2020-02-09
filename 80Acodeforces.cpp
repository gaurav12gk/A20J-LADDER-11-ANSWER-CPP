#include<bits/stdc++.h>
#define ll long long
#define  vi vector<int>
#define MAX 1000
using namespace std;
void solve()
{
int r,b;
cin>>r>>b;int n=60;
bool prime[55];
memset(prime,true,sizeof(prime));

for(int a=2;a*a<=n;a++)
{
    if(prime[a]==true)
    {
    for(int j=a*a;j<=n;j+=a)
    {
     prime[j]=false;
    }}
}


            if(prime[r]==true)
            {
                 for(int j=r+1;j<50;j++)

{                if(prime[j]==true)
{

                     if(j==b)
                        {
                            cout<<"YES";
                            break;}

                     else cout<<"NO";
}


                }

            }


}

int main()
{
    //int t;
    //cin>>t;
    solve();
}

