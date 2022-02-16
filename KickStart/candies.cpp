// Problem
// You have gathered N bags of candy and you want to distribute the candy amongst M kids. The i-th bag contains Ci pieces of candy. You want to make sure that every kid get the same amount of candy and that the number of pieces of candy they receive is the greatest possible. You can open each bag and mix all pieces of candy before distributing them to the kids.

// How many pieces of candy will remain after you share the candy amongst kids, based on the rules described above?

// Input
// The first line of the input gives the number of test cases, T. T test cases follow.

// Each test case consists of two lines. The first line of each test case contains two integers: integer N, the number of candy bags, and M, the number of kids.

// The next line contains N non-negative integers C1,C2,…,CN representing array C, where the i-th integer represents the number of candies in the i-th bag.

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


int main(int argc,char** argv[])
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    freopen("input.txt","r",stdin);
    int start=1;
    cin>>T;
    while(T--)
    {
         int N,M;
        cin>>N>>M;
        int sum=0;
        for(int i=0;i<N;i++)
        {
            int x;
            cin>>x;
            sum+=x;
        }
        cout<<"Case #"<<start<<": "<<sum%M<<"\n";
        start++;
    };
    cout<<"\n";
    fclose(stdin);
    return 0 ;
}


// input
// 2
// 7 3
// 1 2 3 4 5 6 7
// 5 10
// 7 7 7 7 7
