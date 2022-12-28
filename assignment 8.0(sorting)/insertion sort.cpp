#include <bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int>A)
{
	for(int i=0;i<A.size();i++)
	{
		cout<<A[i]<<" ";	
	}
	cout<<"\n";
}
void sort(vector<int>&A)
{
    int n=A.size();
	for(int i=0;i<n;i++){
	    int temp=A[i];
	    int j=i-1;
	    while(j>=0 && A[j]>temp){
	        A[j+1]=A[j];
	        j--;
	    }
	    A[j+1]=temp;
	}
}
int main() {
	vector<int>A= {6,1,2,3,4,6,1};
	// your code goes here
	sort(A);
	cout<<"sorted vector: ";
	printVector(A);
 
	return 0;
}
