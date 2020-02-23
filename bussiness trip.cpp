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
int k;
cin>>k;
int t=0;
int ar[12];
loop(i,0,12)
{
    cin>>ar[i];
t+=ar[i];

}
if(t<k)
{
    cout<<-1;
    return;

}
int month=0;
int sum=0;
sort(ar,ar+12,greater<int>());
loop(i,0,12)
{  if(sum<k)
        {month++;
    sum+=ar[i];
        }
        else break;

}
cout<<month;


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






