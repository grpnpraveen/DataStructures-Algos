//Problem
// Jorge is a physicist who has published many research papers and wants to know how much impact they have had in the academic community. To measure impact, he has developed a metric, H-index, to score each of his papers based on the number of times it has been cited by other papers. Specifically, the H-index score of a researcher is the largest integer H such that the researcher has H papers with at least H citations each.
// Jorge has written N papers in his lifetime. The i-th paper has Ci citations. Each paper was written sequentially in the order provided, and the number of citations that each paper has will never change. Please help Jorge determine his H-index score after each paper he wrote.
// Input
// The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing N, the number of papers Jorge wrote. The second line contains N integers. The i-th integer is Ci, the number of citations that the i-th paper has.

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

#pragma region //efficient solution
vector<int> GetHIndexScore(vector<int> citations_per_paper) 
{
  vector<int> h_index;
 
    for(int i=1;i<=citations_per_paper.size();i++)
    {
        if(i==1 && citations_per_paper[i-1]>=1)
        {
            h_index.push_back(1);
        }
        else
        {
            int b=i;
            while(citations_per_paper[b-1]>=i)
            {
                if((b-1) ==0)
                {
                    h_index.push_back(i);
                }

                if(b!=0)
                    b--;
            }
            if(h_index.size()!=i)
            {
                b=i-1;
                if(citations_per_paper[b]>=b)
                {
                    if((h_index[b-1]+1) != b+1)
                    {
                        h_index.push_back(h_index[b-1]+1);
                    }
                    else
                    {
                        h_index.push_back(h_index[b-1]);
                    }
                }
                else{
                     h_index.push_back(h_index[b-1]);
                }
            }
        }
    }

  return h_index;
}

vector<int> h_index(vector<int> citations_per_paper)
{
    int ans =0;
    vector<int> h;
    priority_queue<int, vector<int>, greater<int>> q;
        for(int i=0; i<citations_per_paper.size(); i++)
        {
            while(q.empty()==false && q.top()<=ans)
            {
                q.pop();
            }
            if(q.size()==ans+1)
                ans++;
            
            h.push_back(ans);
        }
    return h;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt","r",stdin);
    int tests;
    cin >> tests;
    for (int test_case = 1; test_case <= tests; test_case++) 
    {
        // Get number of papers for this test case
        int paper_count;
        cin >> paper_count;
        // Get number of citations for each paper
        vector<int> citations(paper_count);
        for (int i = 0; i < paper_count; i++) 
        {
            cin >> citations[i];
        }
        vector<int> answer = h_index(citations);
        cout << "Case #" << test_case << ": ";
        for (int i = 0; i < answer.size(); i++)
        {
            cout << answer[i] << " ";
        }
        cout << endl;
    }
      fclose(stdin);
  return 0;
}
#pragma endregion


#pragma region    // naive solution
int main2(int argc,char** argv[]) 
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int order =1;
    int T;
    freopen("input.txt","r",stdin);
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        vector<int> citations;
        citations.push_back(-1);
        for(int i=1;i<=n;i++)
        {
            int c;
            cin>>c;
            citations.push_back(c);
            if(i==1 && c>=1)
                cout<<"Case #"<<order<<": 1 ";
            else{   
                bool ok=false;
                int cmp=i;
                while(!ok)
                {
                    int ans=0;
                 
                    for(int j=1;j<citations.size();j++)
                    {
                        if(citations[j]>=cmp)
                        {
                            ans++;
                        }

                    }
                    if(ans>=cmp)
                    {
              
                     ok=true;   
                    }
                    else{
                        cmp--;
                        if(ans==cmp)
                        {
                            ok=true;
                        }
                    }
                }
                cout<<cmp<<" ";
                
            }
         

        }
        cout<<"\n";
        order++;
    };
    cout<<"\n";
    fclose(stdin);
    return 0 ;
}
#pragma endregion
//input
// 2
// 3
// 5 1 2
// 6
// 1 3 3 2 2 15
