#include<iostream>
#include<queue>

using namespace std;
int main(){
  queue <int> q;
  int n,x;
  cout<<"input the number of values"<<endl;
  cin>>n;
  for (int i=0;i<n;i++){
    cin>>x;
    q.push(x);
  }
  while (!q.empty()){
    int current=q.front();
    q.pop();
    cout<<current<<endl;
  }


  return 0;

}
