#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long long int N=1000001;
long long int seive[1000001];
void gen_seive()
{
    seive[0]=seive[1]=0;
    for(int i=2;i<=N;i++)
    {
        seive[i]=1;
    }
    for(int i=2;i*i<N;i++)
    {
        if(seive[i]==1)
        {
            for(int j=i*i;j<=N;j+=i)
            {
                seive[j]=0;
            }
        }
    }
}
int main() 
{
	gen_seive();
	int n;
	cin>>n;
    int prefix[n];
    prefix[0]=seive[0];
    for(int i=1;i<=n;i++)
    {
        prefix[i]=prefix[i-1]+seive[i];
    }                             
    cout<<prefix[n];
	return 0;
}
