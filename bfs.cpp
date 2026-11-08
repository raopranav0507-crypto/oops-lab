#include<iostream>
using namespace std;
#define MAX 10
int graph[MAX][MAX]={0};
int visited[MAX]={0};
int queue[MAX];
int front=-1;
int rear=-1;

void readgraph(int n,int e){
    int u,v;
    cout<<"enter"<<e<<"edges(u,v)";
    for(int i=0;i<e;i++){
    cin>>u>>v;
    graph[u][v]=1;
    graph[v][u]=1;
}
}
void enqueue(value){
rear++;
queue[rear]=value;
}
int dequeue(){
    front++;
    return queue[front];
}
void BFS(int start,int n){
    queue(start);
    visited(start)=1;
    while(front<rear){
        int current = dequeue();
        cout<<current<<" ";
        for(int i=0;i<n;i++){
            if(graph[current][i]==1&& visited[i]==0){
                queue(i);
                visited[i]=1;
            }
        }
    }
}
int main(){
    int n,e,start;
    cout<<"enter no of vertices";
    cin>>n;
    cout<<"enter np of edges";
    cin>>e;
    readgraph(n,e);
    cout<<"enter the starting vetex:";
    cin>>start;
    cout<<"BFS Traversal";
    BFS(start,n);
    return 0;
}