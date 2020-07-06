#include<iostream>
#include<vector>
#include<queue>

using namespace std;

vector <int > v[5];
int visited[5];
void bfs(int source);


int main() {
    int n,m,x,y;
    cout<<"Enter the number of nodes(n) and edges(m-n-1)"<<endl;
    cin>>n>>m;
    cout<<"enter the nodes which are connected for eg: x-->y"<<endl;
    for (int i=0;i<n;i++){
    
        cin>>x>>y; //inputs the nodes which are connected for eg: x-->y 
        v[x].push_back(y);
        
    }
    bfs(0);
    
    return 0;
    
}

void bfs(int source ){
    queue <int> q;
    q.push(source);
    while (!q.empty()){
        int current=q.front(); //initialize the first value of queue to "current"
        q.pop();
        cout<<current<<" ";
        for (int i=0;i<v[current].size();i++){
            int child=v[current][i];
            if (visited[child]==0){
                q.push(child);
                visited[child]=1;
            }
        }
        
    }
    cout<<endl;
}