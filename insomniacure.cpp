#include<bits/stdc++.h>
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
using namespace std  ;
 void solve()
{int k,l,m,n,d;
int s=0;
cin>>k>>l>>m>>n>>d;
for(int i=1;i<=d;i++)
{

    if(i%l==0||i%m==0||i%n==0||i%k==0)
        s++;
}
cout<<s;
}
int main(){
//{fast
//int t;
//cin>>t;
//while(t--)
//{
solve();
//}

}


