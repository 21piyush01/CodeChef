#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  long long int a,t ;
  cin >> t ;
  for(a=0;a<t;a++)
  {
    long long int ans,A,B,p,q,r,p1=0,r1=0,i=1 ;
    cin >> p >> q ;
    A=p, B=q ;
    while(p)
    {
      p &= (p-1) ;
      p1++;	
    }
    while(r1<p1)
    {  
        r = B-i ;
        r1=0 ; i++ ;
        while(r)
        { 
           r &= (r-1) ;
           r1++ ; 	
        }
    }
    ans = r1-p1+i-1 ;   	
    cout << ans << endl ; 
  }
  return 0 ;	
} 