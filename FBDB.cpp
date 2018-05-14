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
    long long int i,j,k,m,n,z ;
    cin >> m >>  n ;
    z = n>2 ? n : 2 ;	
    long long int temp,A=0,B=0,fib[z],result ;
    const unsigned int M = 1000000007;
    for(i=0;i<m;i++)
    { 
       cin >> temp ;
       A = (A+temp)%M ; 
    }
    for(i=0;i<m;i++)
    { 
       cin >> temp ;
       B = (B+temp)%M ;
    }	
    fib[0] = 1 ;
    fib[1] = 1 ;
    for(k=2;k<n;k++)
    { fib[k] = (fib[k-1] + fib[k-2])%M ; }
    if(n>=3)
    { result = (m*(((fib[n-3]*A)%M + (fib[n-2]*B)%M)%M))%M ; }
    else if(n==1)
    { result = (m*A)%M ; } 
    else if(n==2)
    { result = (m*B)%M ; } 
    cout << result << "\n" ;  
  }
  return 0 ;	
} 