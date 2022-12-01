#include <bits/stdc++.h>
using namespace std;
int solve( int arr[], int n)
{
int l=0,r;
for(auto i :arr)
{
    if(i > i+1)
    return true;
    else if( i< i+1)
    return true;
    elsereturn false;
}



}
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int arr[n];
for(int i=0; i<n;i++)
{

    cin>> arr[i];
}
solve(arr,n);

}


}