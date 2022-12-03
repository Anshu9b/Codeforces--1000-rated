
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n,m ;
   cin>>m>>n;
   int ini=1;
   int ans=0;
   for(int i=0; i<m;i++)
   {
       int x;
       cin>>x;
       ans+= ((x-ini+n)%n);
       ini=x;
   }
cout<<ans<<"\n";

    
}