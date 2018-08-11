#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int b[], int l, int m, int r)
{
  int i,j,k ;
  int n1 = m-l+1 ;
  int n2 = r-m ;
  int L[n1],R[n2],L1[n1],R2[n2] ;
  for(i=0;i<n1;i++)
  { L[i] = a[l+i] ; }
  for(j=0;j<n2;j++)
  { R[j] = a[m+1+j] ; }
  for(i=0;i<n1;i++)
  { L1[i] = b[l+i] ; }
  for(j=0;j<n2;j++)
  { R2[j] = b[m+1+j] ; }
  i = 0 ; 
  j = 0 ; 
  k = l ; 
  while(i<n1 && j<n2)
  {
    if(L[i] <= R[j])
    {
      a[k] = L[i] ;
      b[k] = L1[i] ;
      i++ ;
    }
    else
    {
      a[k] = R[j] ;
      b[k] = R2[j] ;
      j++ ;
    }
    k++ ;
  }
  while(i<n1)
  {
    a[k] = L[i] ;
    b[k] = L1[i] ;
    i++ ;
    k++ ;
  }
  while(j<n2)
  {
    a[k] = R[j] ;
    b[k] = R2[j] ;
    j++ ;
    k++ ;
  }
}
 
void mergeSort(int a[], int b[], int l, int r)
{
  if(l<r)
  {
    int m = l+(r-l)/2 ;
    mergeSort(a, b, l, m) ;
    mergeSort(a, b, m+1, r) ;
    merge(a, b, l, m, r);
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int z,p,s,i,j,n ;
  cin >> p >> s ;
  int num[p]={0},ind[p] ;
  for(i=0;i<p;i++)
  { ind[i] = i+1 ; }
  for(z=0;z<p;z++) 
  {
    int S[s],N[s] ;
    for(j=0;j<s;j++)
    { cin >> S[j] ; }
    for(j=0;j<s;j++)
    { cin >> N[j] ; }
    mergeSort(S,N,0,s-1) ;
    for(i=0;i<s-1;i++)
    { 
      if(N[i]>N[i+1])
      { num[z]++ ; }  
    }  
  }
  mergeSort(num,ind,0,p-1) ;
  for(i=0;i<p;i++)
  { cout << ind[i] << "\n" ; }
  return 0 ;  
} 