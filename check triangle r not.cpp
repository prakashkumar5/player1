#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[3],x,y;
	cout<<"Enter the input:"<<endl;
	for(int i=0;i<3;i++)
	{
		cin>>a[i];
	}
	sort(a,a+3);
	x=a[2];
	y=a[0]+a[1];
	if(x<y)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}