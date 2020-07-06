#include<iostream>
#include<vector>
#include<queue>
using namespace std;
bool bfs(vector <int> v[],int x,int n){
  bool visited[n+1];
  for (int i=0;i<=n;++i){
    visited[i]=false;
  }
  queue <int> q;
  q.push(x);
  int p,k,count=0;
  while (!q.empty()){
    int p=q.front();
    q.pop();
    visited[p]=true;
    for (int i=0;i<v[p].size();i++){
      k=v[p][i];
      if (visited[k]){
        return false;
      }
      else {
        q.push(k);
      }
    }
    ++count;
  }
  if (count!=n) return false;
  else return true;
}
int main(){
  int n,m,x,y;
  cin>>n>>m;
  vector<int> v[n+1];
  for (int i=0;i<m;i++){
    cin>>x>>y;
    v[x].push_back(y);
  }
  if (bfs(v,1,n)) {
    cout<<"YES"<<endl;
  }
  else cout<<"NO"<<endl;
  return 0;
}
