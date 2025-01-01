#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;
int n = 0, m = 0, k = 0;

vector<vector<int>> vortex;
vector<vector<int>> answer;
int min_count = 2000000000;
int number;
void solve(void)
{
    for (int middle = 0; middle < vortex.size(); ++middle)
    {
        for (int x = 0; x < vortex.size(); ++x)
        {
            for (int y = 0; y < vortex[x].size(); ++y)
            {
                if (vortex[x][middle] == 0) continue;
                if (vortex[middle][y] == 0) continue;
                vortex[x][y] = 1;
            }
        }
    }
   
    for (int i = 0; i < answer.size(); ++i)
    {
        for (int j = 0; j < answer[i].size(); ++j)
        {
            cout << vortex[i][j] << " ";
        }
        cout << endl;
    }
}



int main(void) {
    cin >> n ;
    vortex.resize(n, vector<int>(n, 0));
    answer.resize(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> vortex[i][j];
            answer[i][j] = vortex[i][j];
        }
    }
    solve();
    return 0;
}