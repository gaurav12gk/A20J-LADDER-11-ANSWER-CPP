
#include<bits/stdc++.h>

#define ll long long
#define lb long double
#define ull unsigned long long int
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define line "\n"
#define pb push_back
#define vi vector < int >
#define vl vector < ll >
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
int n,m,next=0,prev=0;
cin>>n>>m;
ll count=0;
loop(i,0,m)
{
cin>>next;
next--;

int diff=0;
 diff=next-prev;
 if(diff>=0) count+=diff;
 else
        count+=n+diff;
        prev=next;

}cout<<count;

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


