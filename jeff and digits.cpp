
#include<bits/stdc++.h>

#define ll long long int
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
ll n;
cin>>n;
//vl v(n);
ll  f=0,o=0;
loop(i,0,n)
{
    int x;
    cin>>x;
    if(x==5)f++;
    else
        o++;
//    v.pb(x);

}
if(o==0)
{
    cout<<-1;
return;
}
if(f<9)
{

    cout<<0;
    return;

}
if(f%9!=0)
{
    int p=f%9;
    f=f-p;

}
loop(i,0,f)
cout<<5;
loop(i,0,o)
cout<<0;
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

