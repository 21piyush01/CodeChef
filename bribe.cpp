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
    long long int n,i,moves=0,z=1 ;
    cin >> n ;
    int A[n],B[n] ;
    for(i=0;i<n;i++)
    { 
      B[i] = i+1 ;
      cin >> A[i] ;
      if(A[i]-(i+1) > 2)
      { z=0 ; }
    }
    if(z==0)
    { cout << "Too chaotic\n" ; }    
    else    
    {
      for(i=0;i<=n-3;i++)
      {
        if(B[i]!=A[i])
        {
          if(A[i]-(i+1)==1)
          { 
              swap(B[i],B[i+1]) ;
              moves++ ; 
          }
          else if(A[i]-(i+1)==2)
          { 
              swap(B[i+1],B[i+2]) ;
              swap(B[i],B[i+1]) ;
              moves += 2 ; 
          }
          else
          { 
              swap(B[i],B[i+1]) ;
              moves++ ; 
          }  
        }    
      }
      if(A[n-2]!=B[n-2])
      { swap(B[n-2],B[n-1]) ; moves++ ; }    
      cout << moves << endl ;        
    }    
  }
  return 0 ;    
} 