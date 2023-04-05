#include<iostream>
using namespace std;
int main()
{	
	int x;
	float t1,t2;
	float x1,x2,x3,v1,v2;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		cin>>x1>>x2>>x3>>v1>>v2;
		t1=(x3-x1)/v1;
		t2=(x2-x3)/v2;
		if(t1>t2)
			cout<<"Kefa\n";
		else if(t1<t2)
			cout<<"Chef\n";
		else
			cout<<"Draw\n";
	}
}