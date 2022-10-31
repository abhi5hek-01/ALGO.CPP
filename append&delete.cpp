#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int k;
    cin>>k;
    int count1=0;
    int len1=s.length();
    int len2=t.length();
    if(k>=len1+len2){
        cout<<"Yes";
    }
    else{
        int i=0;
        while(s[i]!='\0' && t[i]!='\0'){
            if(s[i]==t[i]){
                count1++;
            }
            else{
                break;
            }
            i++;
        }
        int a=len2-count1;
        int b=len1-count1;
        int result=a+b;
        
        if((k-result)%2==0 && k>=result){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
    }
    return 0;
}
