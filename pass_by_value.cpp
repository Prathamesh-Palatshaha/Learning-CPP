#include<bits/stdc++.h>
using namespace std;


// this type of function calling is know as "Pass By Value" because when we call any function we send copy of our original data. NOT the original data itself.
//Ex. when we declared num =10, and called print function print(num) and print function performed all the operations like it will print first '10' then it will modify it to '15'. Now after execution that function call returns to line 18 and continues its exection and on line 20 we expect it to output 15 but instead it output 10... Why because original value is never changed. When 'print function' was called we assigned copy of our original data. Which implies our original data wont be hampered.

void print(int a)
{
    cout<< a << endl;
    cout << a+5 <<endl;
    
}

int main()
{
    int num =10;
    print(num);

    cout<< num;
    return 0;
} 