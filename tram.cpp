
#include<bits/stdc++.h>
#define line "\n"
#define ll long long int
#define lb long double
#define ull unsigned long long int

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
int n;
cin>>n;
int ar[n],br[n];
for(int i=0;i<n;i++)
{
    cin>>ar[i]>>br[i];

} int p=0;
int sum=0;
for(int i=0;i<n;i++)
{

    p=p+br[i]-ar[i];
     if(p>=sum)
        sum=p;
}
cout<<sum;
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
