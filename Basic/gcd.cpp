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

int gcd(int a,int b)
{
    if(b==0)
        return a;
  return gcd(b,a%b);
}

int GCD(int a ,int b)
{
    while(b!=0)
    {
        a=a%b;
        swap(a,b);
    }
    return a;
}
int main(int argc,char** argv[])
{

   cout<<gcd(3,7);
    cout<<"\n";
   cout<<GCD(3,7);
    
    cout<<"\n";
    return 0 ;
}