#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int grade;
        cin>>grade;
    if(grade<38){
        cout<<grade<<endl;
        continue;
    }
    int rem=grade % 5;
    if(5-rem<3)
    grade+=5-rem;
    cout<<grade<<endl;
}
return 0;
}
