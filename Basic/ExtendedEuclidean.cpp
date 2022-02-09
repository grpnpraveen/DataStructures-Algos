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

int gcdExten(int a,int b,int& x,int& y)
{
    if(b==0)
        {
            x=1;
            y=0;
            return a;
        }
    int x1,y1;
    int g=gcdExten(b,a%b,x1,y1);
    x=y1;
    y=x1-((a/b)*y1);
    return g;
}

int main(int argc,char** argv[])
{

    int x,y;
   int g=gcdExten(6,3,x,y);
    cout<< g<<" "<<x<<" "<<y;
    cout<<"\n";
    return 0 ;
}