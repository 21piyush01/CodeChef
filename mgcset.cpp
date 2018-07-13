#include <bits/stdc++.h>
using namespace std;

bool modularSum(int arr[], int n, int m)
{
    int nav=0 ;
    bool DP[m];
    memset(DP, false, m);
    for (int i=0; i<n; i++)
    {
        DP[arr[i]%m] = true;
        bool temp[m] ;
        memset(temp,false,m) ;
        for(int j=0; j<m; j++)
        {
            if(DP[j] == true)
            {
                if(DP[(j+arr[i]) % m] == false)
                { temp[(j+arr[i]) % m] = true ; }
            }
        }
        for(int j=0; j<m; j++)
        {
            if (temp[j])
            { DP[j] = true ; }
        }
        if(DP[0])
        { nav++ ; }
    } 
    return nav;
}
 
int main()
{
    int arr[] = {1,3,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = 3;
    int ans = modularSum(arr, n, m) ;
    cout << ans< < endl ;
    return 0;
}
