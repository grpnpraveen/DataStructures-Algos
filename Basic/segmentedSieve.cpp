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

vector<int> primes;

void sieve(int n){

    vector<int> isPrime(n+1,true);
    for(int i=2;i<=n;i++)
    {
        if(isPrime[i])
        {
            primes.push_back(i);
            for(int j=i*i;j<=n;j=j+i)
            {
                isPrime[j]=false;
            }
        }
    }
}

void segsieve(int l,int h)
{

    sieve(sqrt(h));
    vector<int> isPrime((h-l+1),true);
    for(auto x: primes)
    {
        if(x>=l)
        {
            cout<<x<<" ";
        }
        int sm=(l/x)*x;
        if(sm<l)
        sm=sm+x;
        for(int i=sm;i<=h;i=i+x)
        {
         
            isPrime[i-l]=false;

        }
        
    }

    for(int i=l;i<=h;i++)
    {
        if(isPrime[i-l])
          {
              if(i!=1)
                 cout<<i<<" ";
          }
    }
  

}


int main(int argc,char** argv[])
{

     segsieve(7,20); 
    
    cout<<"\n";
    return 0 ;
}