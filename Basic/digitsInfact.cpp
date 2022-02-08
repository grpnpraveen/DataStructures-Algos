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


long long factdigits(int n)
{

    double x = ((n*log10(n/M_E)) + log10((2*M_PI*n))/2);
    return floor(x) + 1;
    
}

int main(int argc,char** argv[])
{

     cout<<factdigits(27);
    
    cout<<"\n";
    return 0 ;
}