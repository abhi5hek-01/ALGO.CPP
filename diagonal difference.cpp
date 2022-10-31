#include<iostream>
using namespace std;
int main(){
int N, LeftDiagsum = 0, RightDiag = 0;
  cin >> N;
  int a[N][N];
  for (int i = 0; i < N; i++) 
  {
    for (int j = 0; j < N; j++) 
    {
      cin >> a[i][j];
      if (i == j) 
   {
        LeftDiagsum = LeftDiagsum + a[i][j];
      }
    }
  }
  
  for (int i = 0; i < N; i++) 
  {
    for (int j = N - 1 - i; j >= 0;) 
    {
      RightDiag = RightDiag + a[i][j];
      break;
    }
  }
  cout << abs(LeftDiagsum - RightDiag) << endl;
  return 0;
}
