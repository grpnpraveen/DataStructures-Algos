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

void   printdivisorsInorder(int n)
{
    int i;
    for( i=1;i*i<=n;i++)
    {
        if(n%i == 0)
        {
            cout<<i<<" ";
        }
    }
    for(;i>=1;i--)
    {
        if(n%i ==0)
        {
            cout<<n/i<<" ";
        }
    }
}
void   printdivisors(int n)
{
    int i;
    for( i=1;i*i<=n;i++)
    {
        if(n%i == 0)
        {
            cout<<i<<" "<<n/i<<" ";
            
        }
    }
}
int main(int argc,char** argv[])
{

   printdivisorsInorder(60);
    cout<<"\n";
   printdivisors(60);
    cout<<"\n";
    return 0 ;
}