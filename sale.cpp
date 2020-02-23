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
#define MAX 100000000

# define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0);
using namespace std;
void solve()
{
ll n,m;
cin>>n>>m;
ll ar[n];
loop(i,0,n)cin>>ar[i];
int price=0;
sort(ar,ar+n);
loop(i,0,m)
{      if(ar[i]>0)
continue;
    price+=ar[i];
}
cout<<abs(price);
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



