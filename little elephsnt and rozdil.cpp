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
    ll n;
    cin>>n;
    ll ar[n];
    loop(i,0,n)
    cin>>ar[i];
  int t=*min_element(ar,ar+n);
  int flag=0;
  int x=0;
  loop(i,0,n)
  {
      if(ar[i]==t)
        { x=i+1;
            flag++;
  }}
  if(flag==1)
  cout<<x;
  else cout<<"Still Rozdil";


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


