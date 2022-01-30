#include<bits/stdc++.h>
#include<iostream>
#include<math.h>


using namespace std;


int main()

{
  int T,N;
  cin>>T;
  while(T--)
  {
      cin>>N;
      if(N==2)
      {
          cout<<"yes"<<endl;
      }
      else if(N%2==0)
      {
          cout<<"no"<<endl;
      }
      else
      {
          int s=0;
          for(int i=3;i<=sqrt(N);i=i+2)
          {
              if(N%i==0)
              {
                  cout<<"no"<<endl;
                  s=1;
                  break;
              }
          }
          if(s==0)
          {
              cout<<"yes"<<endl;
          }

      }
  }
  return 0;
}
