#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector <int> v[5];
int visited[5];
void dfs (int current);
int main(){
    int n,m ,x,y;
    cout<<"enter the number of nodes and edges :"<<endl;
    cin>>n>>m;
    for (int i=0;i<n;i++){
        cin>>x>>y;
        v[x].push_back(y);
    }
    dfs(0);
}
void dfs (int current){
    cout<<current<<" ";
    visited[current]=1;
    for (int i=0;i<v[current].size();i++){
        int child=v[current][i];
        if (visited[child]==0){
            dfs(child);
        }
    }
    return ;
}