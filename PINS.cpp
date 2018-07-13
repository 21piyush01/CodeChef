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
    long long int n,p=1,q=1,i ;
    cin >> n ;
    cout << p << " " << 1 ; 
    for(i=0;i<n/2;++i)
    { cout << 0 ; }
    cout << endl ;
  }
  return 0 ;	
} 