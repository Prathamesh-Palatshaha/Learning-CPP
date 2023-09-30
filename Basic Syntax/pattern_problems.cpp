#include<bits/stdc++.h>
using namespace std;


int main()
{
    /* Pattern 1
    ****
    ****
    ****
    ****
    */

//    int i,j;
//    for (i=0;i<4;i++)
//    {
//     for (j= 0; j < 4; j++)
//     {
//         cout<<" * ";
//     }
//     cout<< endl;
//    }
    /*

    Pattern 2:
    *
    **
    ***

    */
//    int rows;
//    cout<<"Enter number of rows: ";
//    cin>> rows;
//    int i,j;
//    for ( i = 0; i < rows; i++)
//    {
//      for ( j = 0; j <=i; j++)
//      {
//         cout<< " * ";
//      }
//      cout<< endl;   
//     }
   /*
   Pattern 3:
   1
   1 2
   1 2 3
   1 2 3 4
   
   */
//   int rows;
//    cout<<"Enter number of rows: ";
//    cin>> rows;
//    int i,j;
//    for ( i = 1; i <= rows; i++)
//    {
//      for ( j = 1; j <=i; j++)
//      {
//         cout<< j <<" ";
//      }
//      cout<< endl;   
//     }
  
  /*
   Pattern 4:
   1
   2 2
   3 3 3
   
   */
// int rows;
// cout<<"Enter number of rows: ";
// cin>> rows;
// int i,j;
// for ( i = 1; i <= rows; i++)
// {
//   for ( j = 1; j <=i; j++)
//   {
//      cout<< i <<" ";
//   }
//   cout<< endl;   
// }

/*

Pattern 5:
***
**
*

*/

// int rows;
// cout<<"Enter number of rows: ";
// cin>> rows;
// int i,j;
// for ( i = rows; i >=0; i--)
// {
//  for ( j = 1; j <=i; j++)
//  {
//     cout<< " * ";
//  }
//  cout<< endl;   
// }

/*

Pattern 6:
123
12
1

*/
// int rows;
// cout<<"Enter number of rows: ";
// cin>> rows;
// int i,j;
// for ( i = rows; i >=0; i--)
// {
//  for ( j = 1; j <=i; j++)
//  {
//     cout<< j<<" ";
//  }
//  cout<< endl;   
// }

// Pattern 7 :Star Triangle

// int rows,i,j;
// int star = 2*rows -1;
// int space = (star+1)/2 -1;2

// cout<<"Enter number of rows: ";
// cin>> rows;
// for ( i = 0; i < rows; i++)
// {
//     for (int j =0; j<=rows-i-1; j++)
//         {
//             cout <<" ";
//         }
//     for ( j = 0; j < 2*i +1; j++)
//     {
//         cout<<"*";
//     }
//     for (int j =0; j<rows-i-1; j++)
//         {
//             cout <<" ";
//         }
//     cout<<endl;
// }

// Pattern 8: Lower star triangle

// int rows,i,j;
// cout<<"Enter number of rows: ";
// cin>> rows;
// for ( i = 0; i < rows; i++)
// {
//     for (int j =0; j<=i; j++)
//         {
//             cout <<" ";
//         }
//     for ( j = 0; j < rows -2*i; j++)
//     {
//         cout<<"*";
//     }
//     for (int j =0; j<=i; j++)
//         {
//             cout <<" ";
//         }
//     cout<<endl;
// }

/*
Pattern 9
*
**
***
**
*

*/
// int i,j,rows;
// cout<<"Enter number of rows: ";
// cin>> rows;

// for ( i = 1; i <=2*rows-1; i++)
// {
//    int stars=i;
//    if (i>rows) 
//    {stars=2*rows -i;}
//    for (j=1 ; j<=stars;j++)
//    {
//       cout<<" * ";
//    }
//    cout<< endl;
// }

/*
Pattern 10:

1
0 1
1 0 1

*/

// int i,j,rows;
// int parity=1;
// cout<<"Enter number of rows: ";
// cin>> rows;
// for ( i = 1; i <=rows; i++)
// {
//    if (i%2 == 0) parity =0;
//    else  parity =1;
//    for (j=1 ; j<=i;j++)
//    {
//       cout<<parity;
//       parity = 1-parity;  
//    }
//    cout<< endl;
// }

/*
Pattern 11: 

1    1
12  21
123321

*/

// int i,j,rows;
// cout<<"Enter number of rows: ";
// cin>> rows;
// for ( i = 1; i <= rows; i++)
// {
//     //number
//     for ( j = 1; j <= i; j++)
//     {
//         cout<<j;
//     }
//     //space
//     for ( int k = 0; k < rows-i; k++)
//         {
//              cout<<" "<<" ";   
//         }
//     for ( j = i; j >= 1; j--)
//         {
//             cout<<j;
//         }
// cout<<endl;
// }

/*
Pattern 12:
1
23
345

*/
// int i,j,rows;
//  cout<<"Enter number of rows: ";
//  cin>> rows;
//  int n=1;
//  for ( i = 1; i <= rows; i++)
//  {
//      for ( j = 1; j <= i; j++)
//      {
         
//          cout<<n<<" ";
//          n=n+1;
//      }
//  cout<<endl;
//  }

/*
Pattern 13:
A
A B
A B C

*/
//  int i,rows;
//  cout<<"Enter number of rows: ";
//  cin>> rows;
//  for ( i = 0; i < rows; i++)
//  {
//      for ( char j = 'A'; j <='A'+ i; j++)
//      {
//          cout<<j<<" ";
//      }
//  cout<<endl;
//  }
   return 0;
}