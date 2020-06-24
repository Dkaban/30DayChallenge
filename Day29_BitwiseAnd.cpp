// THE PROBLEM
// ***************************
// Given set S={1,2,3...N}. Find two integers, A and B (where A<B), from set S 
// such that the value of A&B is the maximum possible and also less than a given integer, K. In this case, & represents the bitwise AND operator.
// Solution Created By: Dustin Kaban
// Date: June 5th, 2020
// ***************************

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

void max_possible_value(int n , int k)
{
    std::cout << ((((k - 1) | k) > n && k % 2 == 0) ? k - 2 : k - 1) << std::endl;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string nk_temp;
        getline(cin, nk_temp);

        vector<string> nk = split_string(nk_temp);

        int n = stoi(nk[0]);

        int k = stoi(nk[1]);
        max_possible_value(n,k);
    }

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
