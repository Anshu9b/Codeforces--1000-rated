#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t;
    cin>>t;
    string s;
    cin>>s;
    return 0;
    while(t--)
    {
        for(int i=0; i<n;i++)
        {
            if( s[i]= 'B' && s[i+1]=='G')
            swap (s[i], s[i+1]);
            i++;
        }
    }
    cout<<s;
    return 0;
    }
