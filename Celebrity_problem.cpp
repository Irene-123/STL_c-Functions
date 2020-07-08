The naive method :
Time complexity : O(n<sup>2</sup>)
Space complexity : 0(n) since extra space of size n is required .
```
#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int temp;
  vector<vector<int>> arr(n,vector<int>(n,0));
  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }

  int indegree[n]={0},outdegree[n]={0};
  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      if (arr[i][j]==1){
        outdegree[i]++;
        indegree[j]++;
      }
    }
  }

  for (int i=0;i<n;i++){
    if (indegree[i]==n-1 && outdegree[i]==0){
       cout<<"Our celebrity ID"<<" "<<i<<endl;
        }

  }
  return 0;
}
```
