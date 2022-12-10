#include <iostream>

using namespace std;

int main()
{
    int n, con; s[10000];

    cin>>n;
     for(int i = 0 ; i<= n;i++)
     cin>>s[i];
     cin>>con;
     cout<< mt(s,con,n);


    return 0;
}

int mt(int ar[10000], int c, int n)
{ int s=0;
  int x=0;
  for(int i = 0 ; i<= n;i++)
   for(int j = 0 ; j<= n;j++)
    for(int k = 0 ; k<= n;k++)
       {s= ar[i]+ar[j]+ar[k];
        if(s<=c)
        x++;
       }
       return x;
}