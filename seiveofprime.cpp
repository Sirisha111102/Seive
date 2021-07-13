#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int N=1000001;
int seive[1000001];
void gen_seive()
{
    seive[0]=seive[1]=0;
    for(int i=2;i<=N;i++)
    {
        seive[i]=1;
    }
    for(int i=2;i*i<=N;i++)
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
	int q;
	cin>>q;
	while(q--)//10^6
	{
	    int num;
	    cin>>num;
	    //logic which runs for square root of the 10^6 
	    //using seive
	    if(seive[num]==1)
	    {
	        cout<<"Prime number"<<endl;
	    }
	    else
	    {
	        cout<<"Not Prime"<<endl;
	    }
	}
	return 0;
}
