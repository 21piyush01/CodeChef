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
    string s1,s2 ;
    cin >> s1 >> s2 ;
    int i,k=-1,z=-1,x=-1,y=0 ;
    for(i=0;i<3;i++)
    {
      if((s1[i]=='o' && s2[i]!='b') || (s1[i]!='b' && s2[i]=='o'))
      { x=i ; break ; }
      else if((s1[i]=='o' && s2[i]=='b') || (s1[i]=='b' && s2[i]=='o')) 
      { z=i ; } 
    }
    k = x!=-1 ? x : z ;
    for(i=0;i<3;i++)
    {
      if(i!=k)
      {
        if(s1[i]=='b' || s2[i]=='b')
        { y++ ; } 
      }  
    }
    if(k!=-1 && y==2)
    { cout << "yes\n" ; }
    else
    { cout << "no\n" ; }  
  }	
  return 0 ;	
} 