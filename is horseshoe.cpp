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
{ int flag=0;
int ar[4];
for(int i=0;i<4;i++) cin>>ar[i];
sort(ar,ar+4); int p=0;
 for(int i=0;i<4;i++)
{
     for(int j=i+1;j<4;j++)
     {
        if(ar[i]==ar[j])
        {
            p++;

        }
        flag+=p;
        i=i+p;
        p=0;
       }

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


