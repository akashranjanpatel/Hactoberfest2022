###Shubhankshi Saraf 
-Image-https://imgur.com/gCMm5S4 
-Location-India 
-GitHub Link- https://github.com/shubhi0222


#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int>q;
    int i=1,visited[7]={0,0,0,0,0,0,0};
    int a [7][7] = {
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0}, 
        {0,0,0,0,1,0,0} 
    };
    cout<<i;
    visited[i]=1;
    q.push(i);
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(int j=0;j<7;j++){
            if(a[node][j]==1 && visited[j]==0){
                cout<<j;
                visited[j]=1;
                q.push(j);
            }
        }
    }
    return 0;
}
