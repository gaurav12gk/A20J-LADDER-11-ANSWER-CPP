#include<bits/stdc++.h>
#define ll long long int
#define lb long double
#define ull unsigned long long int

#define vi vector<int>
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
 ll p;
 cin>>p;
 ll a[13]={0};

 ll count=0;
 for(int i=1;i<13;i++)
 {
     a[i]=pow(10,i)-1;
 }
   for(int i=2;i<13;i++)
    {
        for(int j=1;j<=i-1;j++)
        {
            a[i] = a[i]-a[j];
        }
    }

    for(int i=1;i<13;i++ )
    {
        if(p-a[i]>=0)
        {
            count+=a[i]*i;
            p=p-a[i];
        }
        else
        {
            count+=p*i;
            break;
        }
    }
    cout<<count<<endl;


}




int main()
{fast
int t;
cin>>t;
while(t--)
{
solve();
}

}
