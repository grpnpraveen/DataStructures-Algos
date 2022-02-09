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

      int isPrime(int n){
    if(n==1)
     return 0;
    if(n==2||n==3) 
    return 1;
    if(n%2==0 || n%3==0)
    return 0;
        for(int i=5;i*i<= n;i=i+6)
        {
            if(n%i == 0)
                return 0;
            if(n%(i+2) == 0)
                return 0;
        }
        return 1;
            
    }
int main(int argc,char** argv[])
{

     cout<<isPrime(7);
    
    cout<<"\n";
    return 0 ;
}