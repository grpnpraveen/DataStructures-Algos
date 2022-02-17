//Problem
// Jorge is a physicist who has published many research papers and wants to know how much impact they have had in the academic community. To measure impact, he has developed a metric, H-index, to score each of his papers based on the number of times it has been cited by other papers. Specifically, the H-index score of a researcher is the largest integer H such that the researcher has H papers with at least H citations each.
// Jorge has written N papers in his lifetime. The i-th paper has Ci citations. Each paper was written sequentially in the order provided, and the number of citations that each paper has will never change. Please help Jorge determine his H-index score after each paper he wrote.
// Input
// The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing N, the number of papers Jorge wrote. The second line contains N integers. The i-th integer is Ci, the number of citations that the i-th paper has.

#include<bits/stdc++.h>
using namespace std;
#define ll long long


using namespace std;

#pragma region //efficient solution

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, i, j, ans, si;
 
    cin>>t;
    
    for(j=1; j<=t; j++)
    {
        cin>>n;
        ll a[n];
        ans=0;
        si=0;
        priority_queue<ll, vector<ll>, greater<ll>> q;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        
        cout<<"Case #"<<j<<": ";
        
        for(i=0; i<n; i++)
        {
            while(q.empty()==false && q.top()<=ans)
            {
                q.pop();
                si--;
            }
            if(a[i]>ans)
            {
            q.push(a[i]);
            si++;
            }
            if(si==ans+1)
            {
                ans++;
            }
            cout<<ans<<" ";
        }
        cout<<"\n";
    }

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
