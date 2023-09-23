#include<bits/stdc++.h>
using namespace std;


//Pairs
void explainPair()
{
    pair<int, int> p = {1,3};
    cout<< p.first;

    cout<< endl;

    pair<int,pair<int,int>> q = {2,{3,1}};
    cout<< q.second.first << endl;

    pair<int,int> a[] = {{1,2},{4,5},{69,88}};
    cout<<a[2].second;

}


//Vector: dynamic in nature

void explainVectors()
{
    vector <int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.emplace_back(2);
    v.emplace_back(4);

    vector <pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,1);

    vector<int> vt(5,100);
    vector<int>s(5);
    vector<int> v2(vt);

    vector<int> :: iterator it = v.begin();
    it++;
    cout<<*(it) <<" "<<endl; //v.begin() will give the location and * will help to extract data from that location
    it+=2;
    cout<<*(it) <<" "<<endl;

    // vector<int> :: iterator it = v.end(); //point at end+1 i.e null of the vector
    // vector<int> :: iterator it = v.rend(); //start -- position
    // vector<int> :: iterator it = v.rbegin(); //starts from last then move towards beg

    cout<<v[0]<<" "<<v.at(0) <<endl;
    cout<< v.back() <<" ";
    cout<<endl;
    for( vector<int>:: iterator it= v.begin(); it!=v.end(); it++)
    {
        cout<< *(it)<< " ";
    }
    cout<<endl;
    for (auto it = v.begin(); it!=v.end(); it++)
    {
        cout<< *(it) <<" ";
    }
    cout<<endl;
    for(auto it: v)
    {
        cout<< it <<" ";
    }
    cout<<endl;

    v.erase(v.begin()+1);
    v.erase(v.begin()+2,v.begin()+4); //[start,end)

    //Insert function
    vector<int> e(2,100); //{100,100}
    e.insert(e.begin(),200); //{200,100,100}
    
    cout<<e.size()<< endl;
    e.pop_back();
    e.clear(); //erase entire vector
    cout<<e.empty(); //returns boolean true if empty else false

}

//List
void explainList()
{
    list<int> l;
    l.push_back(2);
    l.emplace_back(4);
    l.emplace_front(1);
    l.push_front(0);
    //rest same as vectors
}
//DoubleEndedQueue
void explainDeque()
{
    deque<int>dq;
    dq.push_front(1);
    dq.push_back(2);
    dq.emplace_front(10);
    dq.emplace_back(15);
    dq.pop_front();
    dq.pop_back();
    dq.back();
    dq.front();
    //rest same

}

void explainStack()
{
    stack<int> st;
    //push,pop,emplace,top,size,empty,swap
}


void explainQueue()
{
    queue<int> q;
    //push,emplace,back,front
}

void explainPQ()
{
    //works on max n min heap concept
    priority_queue<int> pq;
    //push,emplace,top
}

void explainSet()
{
    set<int> st;
    //insert,emplace,count(# occurance of that stuff)
    // auto it = st.find(write any *);
    // st.erase(wrt any *);

}

void explainMultiSet()
{
    multiset<int>ms;
    //everything same as set only diff is duplicate values are allowef
}

// like python dictionary 
void explainMap()
{
    map<int,int> mpp;
    mpp[1]=2;

    map<pair<int,int>,int>mapp;
    mapp[{2,4}]=10;

    for (auto it : mpp)
    {
        cout << it.first <<" "<<it.second<<endl;
    }

    cout<<mpp[0];

    auto it = mapp.find(2);
    cout<< *(it).second;
}



int main()
{
    // explainPair();
    explainVectors();
    return 0;
}