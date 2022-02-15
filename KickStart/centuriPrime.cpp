// Alice and Bob are playing the game called Centauri Prime. Centauri Prime represents a planet which is split into several independent kingdoms. Before they start playing the game, they have to choose rulers for each kingdom. Alice and Bob mutually decided to distribute kingdoms based on the letter the kingdom's name ended with. Alice loves vowels and decided to rule kingdoms whose names ended in a vowel. Bob loves consonants and decided to rule kingdoms whose names ended in a consonant. Both of them do not like the letter 'y' and thus, all kingdoms whose names ended in the letter 'y' are left without a ruler. Can you write a program that will determine the rulers of several kingdoms, given the kingdoms' names?
// Input
// The first line of the input gives the number of test cases, T. T lines follow, each one containing the name of one kingdom. Kingdom names will consist of only lower case English letters, starting with a capital letter. There will be no other characters on any line, and no empty lines.
// List of vowels for this problem is ['A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'].

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
    string Bob="Bob.";
    string Alice="Alice.";
    string nonbody="nobody.";
    string sentenceBegining=" is ruled by ";
    set<char> S={'A', 'E', 'I', 'O', 'U','a','e','i','o','u'};
    int T;
    freopen("input.txt","r",stdin);
    cin>>T;

    int order=1;
    while(T--)
    {
        string s;
        cin>>s;
        char last=s[s.length()-1];
        if(last=='y' || last=='Y')
            cout<<"Case #"<<order<<": "<<s<<sentenceBegining<<nonbody<<"\n";
        else
        {
                    if(S.find(last)!=S.end())
            cout<<"Case #"<<order<<": "<<s<<sentenceBegining<<Alice<<"\n";
        else
            cout<<"Case #"<<order<<": "<<s<<sentenceBegining<<Bob<<"\n";
        }
        order++;
    };
    cout<<"\n";
    fclose(stdin);
    return 0 ;
}
//inout 
// 3
// Mollaristan
// Auritania
// Zizily