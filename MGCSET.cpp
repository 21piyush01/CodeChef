#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int a,t ;
  cin >> t ;
  for(a=0;a<t;a++)
  {
    long long int n,m,i,temp,count=0 ;
    cin >> n >> m  ;
    for(i=0;i<n;i++)
    {
    	cin >> temp ;
    	if(temp%m == 0)
      { count++ ; }  
    }	
    long long int z = pow(2,count)-1 ;
    cout << z << endl ;
  }
  return 0 ;	
} 