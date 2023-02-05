void plusMinus(vector<int> arr) {
  float pluscnt=0;
   float minuscnt=0;
   float  zerocnt=0;
   int n=arr.size();
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
         minuscnt++;
        } 
        else if (arr[i]==0) {
           zerocnt ++;
        }
        else if(arr[i]>0)
        {
            pluscnt++;
        }   
    }
    double result=pluscnt/n;
     cout<<result<<endl;
     double output=minuscnt/n;
       cout<<output<<endl;
      double last=zerocnt/n;
      cout<<last<<endl;   
         
}
