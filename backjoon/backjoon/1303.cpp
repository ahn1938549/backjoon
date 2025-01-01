//#include <stdio.h>
//#include <stdlib.h>
//#include <iostream>
//#include <queue>
//#include <algorithm>
//using namespace std;
//vector<int> dx = { 0,0,1,-1 };
//vector<int> dy = { 1,-1,0,0 };
//vector<vector<char>> graph;
//vector<vector<bool>> visited;
//
//int dfs(int x, int y, int n, int m, char color) {
//    if (visited[x][y]) return 0;
//
//    visited[x][y] = true;
//    int count = 1;
//    for (int i = 0; i < 4; ++i)
//    {
//        int cx = x + dx[i];
//        int cy = y + dy[i];
//        if (cx >= 0 && cx < n && cy >= 0 && cy < m && graph[cx][cy] == color) {
//            count += dfs(cx, cy, n, m, color);
//        }
//    }
//
//    return count;
//}
//
//
//
//pair<int, int> calculatePower() {
//    int w_power = 0, b_power = 0;
//    for (int x = 0; x < graph.size(); ++x) {
//        for (int y = 0; y < graph[x].size(); ++y) {
//            char color = graph[x][y];
//            if (visited[x][y] != true) {
//                int count = dfs(x, y, graph.size(), graph[x].size(), color);
//                if (color == 'W') {
//                    w_power += count * count;
//                }
//                else {
//                    b_power += count * count;
//                }
//            }
//        }
//    }
//    return make_pair(w_power, b_power);
//}
//
//int main(void) {
//    int n, m;
//    cin >> n >> m;
//
//    graph.resize(m);
//    visited.assign(m, vector<bool>(n, false));
//    for (int i = 0; i < m; ++i)
//    {
//        for (int j = 0; j < n; ++j)
//        {
//            char a;
//            cin >> a;
//            graph[i].push_back(a);
//        }
//    }
//    pair<int, int> power = calculatePower();
//    cout << power.first << " " << power.second << endl;
//
//    return 0;
//}