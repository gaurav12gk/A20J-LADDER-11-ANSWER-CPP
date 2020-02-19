
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
int n,sum=0;
cin>>n;
for(int i=0;i<n;i++)
{ int x;
cin>>x;
sum+=x;
}
int flag=0;
for(int i=1;i<6;i++)
{
    int p;
    p=sum+i;
    if(p%(n+1)!=1)
        flag++;
}
cout<<flag;
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

