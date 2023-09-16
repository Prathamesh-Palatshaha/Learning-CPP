// #include<iostream>

// int main()
// {
//     std::cout <<"Hello 1" <<"\n";
//     std::cout <<"Hello 2" << std::endl <<"Hemlo Jii!!" << std::endl;
//     std::cout <<"Hello";
//     return 0;
// }

// #include<bits/stdc++.h> use to import all the libraries available / to avoid declaration of libraries that we are going to use in future and to save that declaration time. 

#include<bits/stdc++.h> 
using namespace std; //by using namespace we can ignore the use of std
int main()
{   
    // cout to display op
    cout <<"Hello 1" <<"\n";
    cout <<"Hello 2" << endl <<"Hemlo Jii!!" << endl;
    cout <<"Hello" <<endl;
    
    // cin to take ip
    int x,y;
    cin >> x>>y;
    cout << "sum of x+y: " <<x+y <<endl;

    //Working with strings

    string s1, s2;
    cin >> s1 >> s2;
    cout << s1 <<" "<<s2;

    // problem in abv datatype is that it will accept the str only before space if i have not declared s2 it wont accept another words after space. For ex. Hello World (this will op: Hello World) but if Hello World !!! (it will op: Hello World  and !!! will be ignored) to solve this issue we use **getline**

    string s;
    getline(cin, s);
    cout<< s;
    return 0;
}