//#include <stdio.h>
//#include <stdlib.h>
//#include <iostream>
//#include <queue>
//#include <stack>
//#include <algorithm>
//using namespace std;
//int n = 0, m = 0, k = 0;
//vector<int> dx = { 0,0,-1,1 };
//vector<int> dy = { 1,-1,0,0 };
//vector<vector<int>> vortex;
//vector<vector<int>> answer;
//int min_count = 2000000000;
//int number;
//
//int dfs(int x, int y)
//{
//    if (x == n - 1 && y == m - 1) return 1;
//    if (vortex[x][y] == 0) return 0;
//    int count = 0;
//    for (int i = 0; i < 4; i++)
//    {
//        int next_x = x + dx[i];
//        int next_y = y + dy[i];
//        if (next_x >= n || next_y >= m || next_x < 0 || next_y < 0) continue;
//        
//        else {
//            vortex[x][y] += dfs(next_x, next_y);
//            
//        }
//        
//    }
//    return vortex[x][y];
//}
//void solve(void)
//{
//    int result = dfs(0, 0);
//    cout << result;
//}
//void solve(void)
//{
//    for (int middle = 0; middle < vortex.size(); ++middle)
//    {
//        for (int x = 0; x < vortex.size(); ++x)
//        {
//            for (int y = 0; y < vortex[x].size(); ++y)
//            {
//                if (x == middle) continue;
//                if (y == middle) continue;
//                if (vortex[x][middle] == 0) continue;
//                if (vortex[middle][y] == 0) continue;
//                answer[x][y] = min(vortex[x][middle] + vortex[middle][y], answer[x][y]);
//            }
//        }
//    }
//   
//
//    cout << vortex[n][m];
//    
//}
//
//
//
//int main(void) {
//    cin >> n >> m ;
//    vortex.resize(n, vector<int>(m, 0));
//    answer.resize(n, vector<int>(m, 999999));
//    for (int i = 0; i < n; ++i)
//    {
//        string input;
//        
//        cin >> input; // 101111 입력
//        for (int j = 0; j < m; ++j) {
//             입력받은 문자열의 한 글자를 정수로 변환하여 배열에 저장
//            vortex[i][j] = input[j] - '0';
//        }
//
//      
//        
//    }
//    solve();
//    return 0;
//}