//#include <stdio.h>
//#include <stdlib.h>
//#include <iostream>
//#include <queue>
//#include <stack>
//#include <algorithm>
//using namespace std;
//int n=0, m=0, k=0;
//vector<int>dx = {0,0,-1,1};
//vector<int>dy = {-1,1,0,0};
//vector<vector<bool>> mono;
//vector<vector<int>> square;
//vector<int> result;
//queue<int> mono_q;
//
//void insert(void)
//{
//
//    int x_min, x_max, y_min, y_max;
//    for (int i = 0; i < square.size(); i++)
//    {
//        for (int j = 0; j < square[i].size(); j++)
//        {
//            if (j == 0) x_min = square[i][j];
//            else if (j == 1) y_min = square[i][j];
//            else if (j == 2) x_max = square[i][j];
//            else if (j == 3) y_max = square[i][j];
//            
//        }
//
//        for (int x = x_min; x <= x_max - 1; ++x)
//        {
//            for (int y = y_min; y <= y_max - 1; ++y)
//            {
//                mono[x][y] = true;
//            }
//        }
//    }
//
//
//}
//
//
//int dfs(int x, int y)
//{
//    if (mono[x][y]) return 0;
//    mono[x][y] = true;
//    int next_x, next_y;
//    int count = 1;
//    for (int i = 0; i < dx.size(); ++i)
//    {
//        next_x = x + dx[i];
//        next_y = y + dy[i];
//        if (next_x >= n || next_y >= m || next_x < 0 || next_y < 0 || mono[next_x][next_y]) continue;
//        count +=dfs(next_x, next_y);
//        
//    }
//    return count;
//
//}
//void mono_empty(void)
//{
//    int count_box = 0;
//    int count_cell = 0;
//    for (int i = 0; i < mono.size(); ++i)
//    {
//        for (int j = 0; j < mono[i].size(); ++j)
//        {
//            if (!mono[i][j])
//            {
//                count_cell = dfs(i, j);
//                result.push_back(count_cell);
//                
//                count_box++;
//            }
//           
//        }
//    }
//    cout << count_box << endl;
//    sort(result.begin(), result.end());
//    for (int i = 0; i < result.size(); ++i)
//    {
//        cout << result[i] << " ";
//    }
//
//}
//void solve(void)
//{
//    insert();
//    mono_empty();
//    
//}
//
//
//
//int main(void) {
//    cin >> m >> n >> k;
//    mono.resize(n, vector<bool>(m, false));
//    square.resize(k, vector<int>(4, 0));
//    for (int i = 0; i < k; ++i)
//    {
//        for (int j = 0; j < 4; ++j)
//        {
//            int temp;
//            cin >> temp;
//            square[i][j]= temp;
//        }
//    }
//    solve();
//    return 0;
//}