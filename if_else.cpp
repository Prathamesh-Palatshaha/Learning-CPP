/*
Write a program to check job eligibility
*/
// 'and' in C++ : '&&'
#include<bits/stdc++.h>
using namespace std;
int main()
{
  cout <<"Enter Your Age: ";
  int age;
  cin >> age;
  
  if ( age <18)
  {
    cout<<"Not eligible for the job";
  }
  else if (age <55)
  {
    cout <<"Eligible for job";
  }
  
  else if (age <=57)
  {
    cout <<"Eligible for job, but retirement soon";
  }
  else
  {cout << "retirement time";}

return 0;
} 

