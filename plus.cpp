#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int N;
int num;
int memo[11];

int plus(int n)
{
	if(n==1)
		return 1;
	if(n==2)
		return 3;
	if(n==3)
		return 4;

	int &ret=memo[n];
	if(ret!=-1)
	{
		return ret;
	}
	
	ret=plus(n-3)+plus(n-2)+plus(n-1);
	
	return ret;
}
int main()
{
	scanf("%d",&N);
	while(N--)
	{
		memset(memo,-1,sizeof(memo));
		scanf("%d",&num);
		printf("%d",plus(num));
	}
}
