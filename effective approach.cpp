#include<bits/stdc++.h>
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
int n,m;
cin>>n;
ll ar[100005],num;
for(int i=1;i<=n;i++)
{
        cin>>num;
       ar[num]=i;
}
cin>>m;
ll vasya=0,petya=0;
int x=0;
while(m--)
{

   cin>>x;
    vasya+=ar[x];
    petya+=n-ar[x]+1;
}
cout<<vasya<<" "<<petya;}
int main(){
//{fast
//int t;
//cin>>t;
//while(t--)
//{
solve();
//}

}


