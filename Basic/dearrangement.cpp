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


int dearrangementCount(int n)
{
    if(n==1 || n==2)\
        return n-1;
    else
        return n-1 *(dearrangementCount(n-1) + dearrangementCount(n-2));
}


int dearrangementCountIterative(int n)
{
    if(n==1 || n==2)
        return n-1;
    int a=0;
    int b=1;
    int c;
    for(int i=3;i<=n;i++)
    {
        c=(i-1) *(a+b);
        a=b;
        b=c;
    }
    return c;
}

int main(int argc,char** argv[])
{

   cout<<dearrangementCount(3);
    cout<<"\n";
   cout<<dearrangementCountIterative(3);
    
    cout<<"\n";
    return 0 ;
}