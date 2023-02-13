#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int>A)
{

	for(int i=0;i<A.size();i++)
	{
		cout<<A[i]<<" ";	
	}
	cout<<"\n";
}
 
int getIndexOfMinElementFromiToEnd(vector<int>A, int i)
{
	int min_index = i; //default answer
	for(; i<A.size(); i++)
	{
		if(A[i]<A[min_index])
		{
			min_index = i;
		}
	}
	return min_index;
}

void sort(vector<int>&A)
{
	for(int i=0;i<A.size();i++)
	{
		int j=getIndexOfMinElementFromiToEnd(A,i);
		swap(A[i],A[j]);
		cout<<"i: "<<i<<" vector: ";
		printVector(A);
	}
}
 
int main() {
	vector<int>A= {6,1,2,3,4,6,1};
	sort(A);
	cout<<"sorted vector: ";
	printVector(A);
 
	return 0;
}
