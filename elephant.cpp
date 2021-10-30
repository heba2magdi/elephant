#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int x;
	cin>>x;
	int count=0;
	
	while(x>0){
		if(x>=5)
		{
			x=x-5;
			count++;
			continue;	
		}
		if(x>=4)
		{
			x=x-4;
			count++;
			continue;	
		}
		if(x>=3)
		{
			x=x-3;
			count++;
			continue;	
		}
		if(x>=2)
		{
			x=x-2;
			count++;
			continue;	
		}
		if(x>=1)
		{
			x=x-1;
			count++;
			continue;	
		}
		
	}
	
	cout<<count;
	
	return 0;
	
}
