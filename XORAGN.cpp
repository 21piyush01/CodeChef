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
    long long int i,n ;
    cin >> n ;
    long long int z,A,x=0 ;
    for(i=0;i<n;i++) 
    { 
      cin >> A ; 
      z = A+A ;
      x = x^z ;
    }      
    cout << x << "\n" ; 
  }
  return 0 ;  
}  