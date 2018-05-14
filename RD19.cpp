#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	if(a==0 || b==0)
	{ return 0 ; }
	else if(a==b)
	{ return a ; }
	else if(a>b)
	{ return gcd(a-b,b) ; }
	else
	{ return gcd(a,b-a) ; }	
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int a,t ;
  cin >> t ;
  for(a=0;a<t;a++)
  {
    int n ;
    cin >> n ;
    int i,a[n],x ;
    for(i=0;i<n;i++)
    { cin >> a[i] ; }
    sort(a,a+n) ;
    for(i=1;i<n;i++)
    { x = gcd(gcd(a[0],a[1]),a[i]) ; }
    if(x==1)
    { cout << "0" << "\n" ; }
    else
    { cout << "-1" << "\n" ; }	
  }
  return 0 ;	
} 