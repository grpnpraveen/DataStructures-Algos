#define _USE_MATH_DEFINES 
#include<iostream>
#include <algorithm>
#include<sstream>
#include<iomanip>
#include<cmath>
#include<string>   // it has getline(cin,var)
#include<sstream>
//stl containers
#include<array>
#include<vector>
#include<stack>
#include<queue>
#include<deque>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<list>
#include<forward_list>
// #include<thread>
// #include<chrono>
#include<any>
#define to_Str(X) #X
#define glue(a,b) a##b  // 
// #include<bits/stdc++.h>    # not working in msvc


using namespace std;

vector<int> res;
void primefactors(int n)
{
    if(n<=1) return;
    if(n%2 == 0)
    {
        res.push_back(2);
        n=n/2;
    }
    while(n%2 ==0)
    {
        n=n/2;
    }
    if(n%3 == 0)
    {
        res.push_back(3);
        n=n/3;
    }
    while(n%3 ==0)
    {
        n=n/3;
    }
    for(int i=5;i<=n;i=i+6)
    {
        if(n%i ==0)
        {
            res.push_back(i);
            n=n/i;
        }
        while(n%i == 0)
        {
            n=n/i;
        }
        if(n%(i+2) ==0)
        {
            res.push_back(i+2);
            n=n/(i+2);
        }
        while(n%(i+2) == 0)
        {
            n=n/(i+2);
        }
    }
    if(n>3)
        res.push_back(n);
}

int main(int argc,char** argv[])
{

     primefactors(49);
     for(auto x: res)
     {
         cout<<x<<" ";
     }
    
    cout<<"\n";
    return 0 ;
}