#include <bits/stdc++.h>
using namespace std;
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
        vector <int> ans;
       // int max_strength= max_element(arr.begin(), arr.end());
          auto largest = max_element(arr.begin(), arr.end());
    auto secondLargest = max_element(arr.begin(), arr.end(),
                                     [&largest](unsigned long &a, unsigned long &b) {
                                         if (a == *largest) return true;
                                         if (b == *largest) return false;                                         
                                         return a < b;
                                     });
    
        int value=0;
        for( auto i : arr)
        {
            if( i!= largest)
           value= i- largest;
           else
           value= largest- secondLargest;
            ans.push_back( value);
        }

    }
    cout<< 

}