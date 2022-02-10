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
// Note: Every array will have atleast one subarray sum that is divisible by the length of the array
// this can proved by pigeon hole principle. 
// Assume that there is no subarray sum that is divisible by the length of the array. 
// Then remainders of the subarrays sum ranges from 1 to n-1 so (n-1) possibilities or holes  and there
// are n members or pegions. so we cann say there will be atleast one subarray sum using 
// pigeons holes principle.

// we can find the subarray by finding prefix sums and then subarray is between same remainders of 
// those sums with length of the array.  

void printSubarray(int arr[],int n) // this will print the indexs of the subarray
{
vector<int> prefixSum(n),rem(n,-1); 

prefixSum[0]=arr[0];
if(prefixSum[0]%n ==0)
{
    cout<<0<<" "<<0<<" ";
    return;
}
rem[prefixSum[0]%n]=0;
for(int i=1;i<n;i++)
{
    prefixSum[i]=prefixSum[i-1]+arr[i];
    int r=prefixSum[i]%n;
    if(r==0){cout<< 0<<" "<<i<<" "; return;}
    if(rem[r]!=-1)
    {
        cout<<rem[r]+1<<" "<<i<<" ";
        return;
    }
    rem[r]=i;

}
}


int main(int argc,char** argv[])
{
    int arr[]={2,7,5,3};
   printSubarray(arr,4);
    
    cout<<"\n";
    return 0 ;
}