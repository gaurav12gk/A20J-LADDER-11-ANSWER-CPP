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
string a;
cin>>a;
int len=a.length();
while(a[len-3] == 'W' && a[len-2] == 'U' && a[len - 1] == 'B')
   len-=3;

for(int i=0;i<len;)
    {
          if(a[i] == 'W' && a[i+1] == 'U' && a[i+2] == 'B') {i+=3; continue;}
        else if(i + 3 < len)
            if(a[i+1] == 'W' && a[i+2] == 'U' && a[i+3] == 'B'){cout<<a[i]<<" "; i += 4;}
            else {cout<<a[i]; i++;}
        else {cout<<a[i]; i++;}


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






