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
int n;
cin>>n;
ll ar[n];
loop(i,0,n)cin>>ar[i];
ll m;
cin>>m;
ll mr[m];
loop(j,0,m)cin>>mr[j];
int flag=0,max=0;
loop(i,0,n)
{
loop(j,0,m)
{
    if(mr[j]%ar[i]==0)
    {
        if(max<mr[j]/ar[i])
        { flag=0;
        flag++;
            max=mr[j]/ar[i];
        }
        else if(max==mr[j]/ar[i])
        flag++;


    }

}}
cout<<flag;
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


