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
    long long int i,j,k,n,x=0,y=0,z=0,l ;
    cin >> n >> k ;
    long long int m = n/2 ;
    long long int temp,A[n-m],B[m],s1=0,s2=0 ;
    for(i=0;i<n;i++)
    {	
       cin >> temp ;
       if(i%2==0) 
       { 
       	 A[x] = temp ; 
       	 s1 += A[x] ;
       	 x++ ; 
       }
       else 
       { 
       	 B[y] = temp ; 
       	 s2 += B[y] ;
       	 y++ ; 
       }	
    }	
    if(s2>s1)
    { cout << "YES" << "\n" ; }
    else
    { 
       if(k==0)
       { cout << "NO" << "\n" ; }	
       else
       {
         sort(A, A+n-m, greater<int>()) ;
         sort(B, B+m) ;
         i=0 ;
         l = k>m ? m : k ; 
         while(s2<=s1 && z<l)
         {
           s2 = s2 - B[i] + A[i] ;
           s1 = s1 - A[i] + B[i] ;   
           i++ ; z++ ; 
           if(s2>s1)
           { cout << "YES" << "\n" ; }
         }
         if(s2<=s1)
         { cout << "NO" << "\n" ; }
        }  	
    }	
  }
  return 0 ;	
} 