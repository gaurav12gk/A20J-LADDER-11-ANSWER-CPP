#include<bits/stdc++.h>

#define loop(i,a,n) for(ll i=a;i<n;i++)
#define line "\n"
#define ll long long int
#define lb long double
#define ull unsigned long long int
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
string a,b;
cin>>a>>b;
int flag=0;
if(a.length()!=b.length())
{cout<<"NO";
    return;
}
else
    loop(i,0,a.length())
{

    if(a[i]!=b[a.length()-i-1])
        flag=1;

}
if(flag==0)cout<<"YES";
else cout<<"NO";

}

int main()
{fast
//int t;
//cin>>t;
//while(t--)
{
solve();
}

}
