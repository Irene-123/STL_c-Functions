#include<iostream>
#include<queue>
using namespace std;
int main()
{
  priority_queue <int, vector<int>> pq;
  int n ,x;
  cout <<"enter the elements for a priority queue"<<endl;
  cin>>n;
  for (int i=0;i<n;i++){
    cin>>x;
    pq.push(x);
  }
  while (!pq.empty()){
    int current=pq.top();
    pq.pop();
    cout<<current <<endl;
  }
  return 0;
}
