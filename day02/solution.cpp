#include <bits/stdc++.h>

using namespace std;

int main() {

    freopen("input.txt", "r", stdin);

    string game;
    int p, q, part1Score = 0, part2Score = 0;
    int pointForPart1[3][3] = {
        {4, 8, 3},
        {1, 5, 9},
        {7, 2, 6},
    };
    int pointForPart2[3][3] = {
        {3, 4, 8},
        {1, 5, 9},
        {2, 6, 7},
    };

    while(getline(cin, game)) {
        p = game[0] - 65;
        q = game[2] - 88;
        part1Score += pointForPart1[p][q];
        part2Score += pointForPart2[p][q];
    }

    cout << "Part 1 Score: " << part1Score << endl;
    cout << "Part 2 Score: " << part2Score << endl;

    return 0;
 }
