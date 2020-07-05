#include<iostream>
#include<vector>
using namespace std;
vector <int> v[5];
int main()
{

  int n ,student_id,ticket_id;
  cout<<"enter the no. of kids within roll no. 6:"<<endl;
  cin>>n;
  for (int i=0;i<n;i++){
    cin>>student_id>>ticket_id;
    v[student_id].push_back(ticket_id);

  }
  for (int i=0;i<5;i++){
    cout<<i<<"->";
    for (int j=0;j<v[i].size();j++){
         cout<<v[i][j]<<" ";
    }
    cout<<endl;

  }
  return 0;
}
