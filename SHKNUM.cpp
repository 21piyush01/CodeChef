#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long int Z=1000000000,i,j,total=0,len=0,x=0 ;
  vector<int> A ;
  while(Z)
  {
    total += 1 ;
    Z >>= 1 ;
  } 
  for(i=0;i<=total;i++)  
  {
    for(j=0;j<i;j++)
    {
      if((pow(2,i)+pow(2,j))>2147483647)
      { x=1 ; break ; }  
      A.push_back(pow(2,i) + pow(2,j)) ;
      len ++ ; 
    }
    if(x==1)
    { break ; }  
  } 
  long long int a,t ;
  cin >> t ;
  for(a=0;a<t;a++)
  {
    long long int n,result ;
    cin >> n ;
    if(n==1)
    { cout << 2 << endl ; continue ; }  
    for(i=0;i<len;i++)
    {
      if(A[i]>=n)
      { result = min(A[i]-n,n-A[i-1]) ; break ; }  
    }
    cout << result << endl ;  
  } 
  return 0 ;  
} 