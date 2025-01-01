//#include <stdio.h>
//#include <stdlib.h>
//#include <iostream>
//#include <queue>
//#include <algorithm>
//using namespace std;
//vector<vector<int>> graph;
//vector<bool> visited;
//
//void dfs(int v) {
//    visited[v] = true;
//    cout << v << " ";
//
//    for (int i = 0; i < graph[v].size(); ++i) {
//        int next = graph[v][i];
//        if (!visited[next]) {
//            dfs(next);
//        }
//    }
//}
//
//void bfs(int v) {
//    queue<int> q;
//    visited[v] = true;
//    q.push(v);
//
//    while (!q.empty()) {
//        int cur = q.front();
//        q.pop();
//        cout << cur << " ";
//
//        for (int i = 0; i < graph[cur].size(); ++i) {
//            int next = graph[cur][i];
//            if (!visited[next]) {
//                visited[next] = true;
//                q.push(next);
//            }
//        }
//    }
//}
//
//int main(void) {
//    int n, m, v;
//    cin >> n >> m >> v;
//
//    graph.resize(n + 1);
//    visited.resize(n + 1, false);
//
//    for (int i = 0; i < m; ++i) {
//        int a, b;
//        cin >> a >> b;
//        graph[a].push_back(b);
//        graph[b].push_back(a);
//
//    }
//    for (int i = 1; i <= n; ++i) {
//        sort(graph[i].begin(), graph[i].end());
//    }
//    dfs(v);
//    cout << endl;
//    fill(visited.begin(), visited.end(), false); // visited ÃÊ±âÈ­
//
//    bfs(v);
//    cout << endl;
//    return 0;
//}