#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int k =1, n=1 , i,j;

    while (k || n)
    {
        cin >> k >> n ;
        
        if ( k == 0 && n == 0 )
           break ;
        
        char a[100][100];
        int st[100], flag = 0 ;
///////////////////////////////////////////////////////////////////////////////        
        for ( i = 0 ; i < k ; i++)
            for ( j= 0 ; j <n ; j++)
                cin >> a[i][j];
        for (i = 0 ; i < k ; i++)
             cin >> st[i];
///////////////////////////////////////////////////////////////////////////////      
        for ( i = 0 ; i < k ; i++)
        for (j =0 ; j < n ; j++ )
        {
            if ( a[i][j] != '-' && flag != 1)
            {
                 int flagc = 0 , flagf = 1;
                 char s = a[i][j];
                 a[i][j] = '-';
                 for ( int p = 0 ; p < k ; p++)
                     for (int q = 0 ; q < n ; q++ )
                         if ( a[q][p] == s )
                         {
                            if ( p == i )
                               flagc = 1 ;
                            flagf++;
                            a[q][p] ='-';
                         }
                 if ( flagf != 2 || flagc != 1 )
                 {
                      cout << "Invalid network" << endl ;
                      flag = 1 ;
                 }
              }
        }
           if (flag)
           continue;
           
         ///////////////////////////////////////////////////////////////////////
       for ( i = 0 ; i < k ; i++)
        for (j =0 ; j < n ; j++ )
        {
            if ( a[i][j] != '-')
            {
                 char s = a[i][j];
                 a[i][j] = '-';
                 for ( int p = 0 ; p < n ; p++)
                      if ( a[i][p] == s )
                      {
                           a[i][p] == '-';
                           if (st [j] > st [p] )
                           {
                                  int temp = st [p];
                                  st [p] = st [j];
                                  st [j] = temp ;
                           }
                      }
              }
          }
      ///////////////////////////////////////////////////////////////////
      
      for (i=0;i< k-1 ;i++)
          if (st[i]>st[i+1])
             cout << "Not sorted" << endl ;
          else
              cout << "Sorted" << endl;
      
      //////////////////////////////////////////////////////////////
    }
    ///////////////////////////////////////////////////
    return 0 ;
}
