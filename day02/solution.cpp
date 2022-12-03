#include <bits/stdc++.h>

using namespace std;

int main() {

    freopen("input.txt", "r", stdin);

    string game;
    int p, q;
    int score = 0;
    int point[3][3] = {
        {4, 8, 3},
        {1, 5, 9},
        {7, 2, 6},
    };

    while(getline(cin, game)) {
        p = game[0] - 65;
        q = game[2] - 88;
        score += point[p][q];
    }

    cout << "Total Score: " << score << endl;

    return 0;
 }






