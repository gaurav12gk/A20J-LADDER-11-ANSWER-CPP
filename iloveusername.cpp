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
  int max,min,c=0;
  int ar[n];
  for(int i=0;i<n;i++)
  {
      cin>>ar[i];
       if(i==0)
       {
         min=max=ar[i];
       }
       if(ar[i]>max)
       {max=ar[i];
            c++;}
       else if(ar[i]<min){
         min=ar[i];
        c++;
}}
cout<<c;}
int main()
{
solve();
//}

}

