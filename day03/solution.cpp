#include <bits/stdc++.h>

using namespace std;

int getPriority(char item) {
    return item > 97 ? item - 96 : item - 38;
}

int main() {
    freopen("input.txt", "r", stdin);

    string rucksack;
    string group[3];
    int totalPriority = 0;
    int totalBadgePriority = 0;
    int groupCounter = 0;

    while(getline(cin, rucksack)) {
        map<char, bool> traceFirst;
        map<char, bool> traceSecond;
        int middle = rucksack.size() / 2;
        char duplicate;
        for(int i = 0, k = middle; i < middle; ++i, ++k) {
            char p = rucksack[i];
            char q = rucksack[k];

            if(p == q || traceSecond[p]) {
                duplicate = p;
                break;
            } else if(traceFirst[q]) {
                duplicate = q;
                break;
            } else {
                traceFirst[p] = traceSecond[q] = true;
            }
        }
        totalPriority += getPriority(duplicate);

        group[groupCounter++] = rucksack; // Part 2 logic
        if(groupCounter == 3) {
            groupCounter = 0;
            map<char, bool> traceFirstGroup;
            map<char, bool> traceSecondGroup;
            char badge;

            for(int i = 0; i < group[0].size(); ++i) {
                traceFirstGroup[group[0][i]] = true;
            }

            for(int i = 0; i < group[1].size(); ++i) {
                traceSecondGroup[group[1][i]] = true;
            }

            for(int i = 0; i < group[2].size(); ++i) {
                char x = group[2][i];
                if(traceFirstGroup[x] && traceSecondGroup[x]) {
                    badge = x;
                    break;
                }
            }

            totalBadgePriority += getPriority(badge);
        }
    }

    cout << "Total Priority: " << totalPriority << endl;
    cout << "Total Badge Priority: " << totalBadgePriority << endl;

    return 0;
}
