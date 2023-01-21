#include<bits/stdc++.h>
using namespace std;

int s[100][100];

/*void  print(int i,int j)
{
    if(i==j)
        cout<< 'A' << i;
    else{
        cout <<"(";
        print(i,s[i][j]);
        print(s[i][j]+1,j);
        cout<< ")";
    }
}*/
int main()
{
  int n=6;
  int p[]={30,35,15,5,10,20,25};

  int m[n][n];

  for(int i=0; i<n; i++)
  {
      for(int j=0; j<n; j++)
      {
          m[i][j]=0;
      }
  }
    for(int i=0; i<n;i++)
  {
      for(int j=0; j<n; j++)
      {
          cout << m[i][j] << " ";
      }
      cout<<endl;
  }

  for(int l=1; l<n; l++)
  {
      for(int i=0; i<n-l; i++)
      {
          int j=i+l;
          m[i][j]=99999;
          for(int k=i; k<j; k++)
          {
              int q = m[i][k]+m[k+1][j]+p[i]*p[k+1]*p[j+1];
              if( q<m[i][j])
              {
                  m[i][j]=q;
                  s[i][j]=k;
              }
          }
      }
  }
  for(int i=0; i<n;i++)
  {
      for(int j=0; j<n; j++)
      {
          cout << m[i][j] << " ";
      }
      cout<<endl;
  }
 // print(0,5);
}
