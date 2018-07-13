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
    int n,a,b,i,j,temp ;
    cin >> n >> a >> b ;
    float A[n],B[n] ;
    for(i=0;i<n;i++) 
    { A[i]=0 ; B[n]=0 ; }
    
    for(i=0;i<n;i++) 
    { 
      cin >> temp ;
      A[temp-1]++ ; 
    }
    for(i=0;i<n;i++)
    { B[i]= A[i]/n ; }
    float p = B[a-1]*B[b-1] ;
    printf("%.10f\n",p); 
  }
  return 0 ;	
} 