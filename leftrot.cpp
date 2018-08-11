#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int i,n,d ;
  cin >> n >> d ;
  int A[n], B[n] ;
  for(i=0;i<n;i++)
  { 
  	cin >> A[i] ;
  	if(i<d)
  	{ B[n-d+i] = A[i] ; }
  	else
  	{ B[i-d] = A[i] ; }	
  }
  for(i=0;i<n;i++)  	
  { cout << B[i] << " " ; }
  cout << endl ;
  return 0 ;	
} 