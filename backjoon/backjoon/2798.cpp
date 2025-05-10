#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

string ltrim(const string&);
string rtrim(const string&);
vector<string> split(const string&);


/*
 * Complete the 'finalState' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts 2D_INTEGER_ARRAY operations as parameter.
 */

long finalState(vector<vector<int>> operations) {
    vector<bool> result(8, 0);
    int sum = 0;
    for (int i = 1; i < operations.size(); ++i)
    {
        for (int j = operations[i][0]; j < operations[i][1]; j++)
        {
            if (result[j] == 0)
            {
                result[j] = 1;
            }
            else
            {
                result[j] = 0;
            }
        }
    }

    for (int i = 1; i < result.size() + 1; ++i)
    {
        if (result[i] == 1)
            sum += i;
    }
    return sum;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string operations_rows_temp;
    getline(cin, operations_rows_temp);

    int operations_rows = stoi(ltrim(rtrim(operations_rows_temp)));

    string operations_columns_temp;
    getline(cin, operations_columns_temp);

    int operations_columns = stoi(ltrim(rtrim(operations_columns_temp)));

    vector<vector<int>> operations(operations_rows);

    for (int i = 0; i < operations_rows; i++) {
        operations[i].resize(operations_columns);

        string operations_row_temp_temp;
        getline(cin, operations_row_temp_temp);

        vector<string> operations_row_temp = split(rtrim(operations_row_temp_temp));

        for (int j = 0; j < operations_columns; j++) {
            int operations_row_item = stoi(operations_row_temp[j]);

            operations[i][j] = operations_row_item;
        }
    }

    long result = finalState(operations);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string& str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string& str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string& str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
