
#include<bits/stdc++.h>

#define ll long long int
#define lb long double
#define ull unsigned long long int
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define line "\n"
#define pb push_back
#define vi vector < int >
# define vs vector < string >
# define vb vector < bool >

# define pii pair < int , int >
# define pll pair < ll , ll >
# define pld pair < ld , ld >
# define pDD pair < D , D >


# define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0);
using namespace std;
void solve()
{
    ll n,flag=1;
    ll a=0,b=1;
    ll c=a+b;
    cin>>n;
    if(n==0) cout<<0<<" "<<0<<" "<<0;
    else
        while(flag==1)
    {
          if(c==n)
          {
            cout<<0<<" "<<a<<" "<<b;
               flag=0;
               }
        else
        {
         a=b;
        b=c;
        c=a+b;
        if(c==n)
        {
         cout<<0<<" "<<a<<" "<<b;
               flag=0;

        }

        }}
    }


int main()
{fast
//int t;
//cin>>t;
//while(t--)
//{
solve();
//}

}


