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
     int n;
     cin>>n;
    int x=0;
    while(n--)
    {
        string a;
        cin>>a;

if(a[1]=='+')
    x++;
else x--;

    }
    cout<<x;

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

