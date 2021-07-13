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
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(seive[i]==1)
        {
            count+=1;
        }
    }
    cout<<count;
	return 0;
}
