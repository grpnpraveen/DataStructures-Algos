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


void printSubarray(int arr[],int n)
{
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
}
int main(int argc,char** argv[])
{

     int arr[]={1,2,3};
         printSubarray(arr,3);
    cout<<"\n";
    return 0 ;
}