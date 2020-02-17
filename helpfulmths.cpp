
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
string a;
cin>>a;
int ar[1000];
int k=0;
for(int i=0;i<a.size();i++)
{
if(a[i]!='+')
{
    int p=a[i];
    p-=48;
    ar[k]=p;
    k++;
}}
sort(ar,ar+k);
for(int i=0;i<k;i++)
{
       if(i<k-1)
    cout<<ar[i]<<"+";
    else cout<<ar[i];
}

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

