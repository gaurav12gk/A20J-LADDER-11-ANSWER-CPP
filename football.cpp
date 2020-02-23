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
cin>>n;int c=0,y=0;
string a[n];
string b="0",cc="0";
loop(i,0,n)
{    cin>>a[i];
       if(b=="0")
      {   b=a[i];
         y++;
        continue;}
       if(cc=="0"&&a[i]!=b)
    {     c++;
        cc=a[i];
        continue;}

        if(a[i]==b)
        {
            y++;

        }
        else if(a[i]==cc)
        {

            c++;
        }
}
if(c>y) cout<<cc;
else
    cout<<b;}

int main()
{fast
//int t;
//cin>>t;
//while(t--)
{
solve();
}

}

