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
int m=1000001;
void seive(vector<long long>&isprime,vector<long long>&primes){
     
        isprime[0] = 0;
        isprime[1] = 0;
        
        for(int i = 2; i <= sqrt(m); i++){
            
            if(isprime[i]){
                for(int j = 2; j*i <= m; j++){
                    isprime[j*i] = 0;
                }
            }
        }
        int count = 0;
        for(int i = 2; i <= m; i++){
            
            if(isprime[i])
            count++;
            
            primes[i] = count;
        }
    }
    
    vector<int> threeDivisors(vector<long long> query, int q)
    {
        vector<long long>isprime(1000001,1);
        vector<long long>primes(1000001,0);

        seive(isprime,primes);

        vector<int>v;
        for(int i = 0; i < q; i++)
        {
            int p = primes[int(sqrt(query[i]))];
            v.push_back(p);
        }
        
        return v;
    }
int main()
{
     int q=1;
      vector<long long> query;
      query.push_back(7);
        vector<int> R= threeDivisors(query,1);
        for(auto x: R)
        {
            cout<<x<<" ";
        }
    cout<<"\n";
    return 0 ;
}