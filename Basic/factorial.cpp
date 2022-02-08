#include<iostream>
#include <algorithm>
#include<sstream>
#include<iomanip>
#include<math.h>
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

void fact(int n ,int& res)  // tail recur
{
    if(n==1)
      {
        res=res*1;
        return;
      }
      else{
          res=res*n;
          fact(n-1,res);
      }
}
int factPure(int n)
{
    if(n==1)
        return 1;
    return factPure(n-1)*n;
}
int main(int argc,char** argv[])
{

     int n=10;
     int res=1;
     fact(n,res);
     cout<<res<<"\n";
     cout<<factPure(n);
    
    cout<<"\n";
    return 0 ;
}