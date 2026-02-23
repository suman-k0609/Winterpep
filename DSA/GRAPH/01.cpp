#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;//no of vertices
    int m;//no of edges
    cout<<"enter number of vertices";
    cin>>n;
    cout<<"enter the number of edged";
    cin>>m;
    unordered_map<int, list<int>> adjList;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    cout<<"adjacency list: "<<endl;
    for(auto &i:adjList){
        cout<<i.first<<"->";
        for(auto &j: i.second){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}