#include <iostream>

#include<vector>
#include<stack>

using namespace std;

  void dfs(vector<int> g[100000],int start,bool visit[])  {
        

    //    if (typ=="recusion") { 

           visit[start]=true;

           cout<<start;

            for(int x:g[start])  {
  
                 if(!visit[x]) {

                     dfs(g,x);
                 }

                }
                        

       

         return;

    }
 
  

    

int main() {

int m,n,w,u;
cin>>m>>n;
vector<int> g[100000];
bool visit[10000];
bool Check;
    

for(int i=0;i<n;i++) {

cin>>u>>w;

g[u].push_back(w);
g[w].push_back(u);

}

dfs(g,5,visit);

return 0;

} 
