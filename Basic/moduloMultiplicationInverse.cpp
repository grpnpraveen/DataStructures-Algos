#include<iostream>
using namespace std;

int modInverse(int a, int m)
   {
       for(int x=1;x<m;x++)
       {
           if(((a%m) * (x%m)) % m == 1)
           {
                
                return x;
                
           }
           
       }
       return -1;
   }
int gcdExtenEuclidean(int a,int b,int& x,int& y)  // if g==1 return x else return -1  .Now it is same as modInverse 
{
    if(b==0)
        {
            x=1;
            y=0;
            return a;
        }
    int x1,y1;
    int g=gcdExtenEuclidean(b,a%b,x1,y1);
    x=y1;
    y=x1-((a/b)*y1);
    return g;
}
   
int ModInverseUsingFermatLittletheorem(int a,int m)
{
    if(a%m == 0)
    {
        return -1;
    }
    else{
        int res = pow(a,m-2);
         return res%m;          
    }
}
int main()
{


     

    cout<<"\n";
    return 0;
}