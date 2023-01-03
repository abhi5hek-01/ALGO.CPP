#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    for(int i=0;i<=T;i++){
        int a,b;
        cin>>a>>b;
        if(a>b){
            cout<<">"<<endl;
        }
        else if(a<b&&b>a)
        {

            cout<<"<"<<endl;
           
        }
        else if(a=b)
        {
            cout<<"="<<endl;
        }
       
    }
     return 0;
     
}
