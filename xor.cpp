#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  long long int n ;
  cin >> n ;
  long long int temp,i,z=0 ;
  for(i=0;i<n;i++)
  {
  	cin >> temp ;
  	z = z^temp ;
  }
  cout << z ;


  return 0 ;	
} 