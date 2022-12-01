#include <bits/stdc++.h>
using namespace std;

int main ()
{
int n; 
cin>>n;
int arr[13]= {4,7,47,74,77,44,444,447,474,477,777,774,744};
bool isTrue= false;
for(int i=0; i<13; i++)
{
    if(n%arr[i]==0)
    
    {
        isTrue= true;
    break;
    }
}
if(isTrue)
{
    cout<<"YES\n";
}
else
{
    cout<<"NO\n";
}




}