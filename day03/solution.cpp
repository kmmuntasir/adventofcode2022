#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);

    string rucksack;
    int totalPriority = 0;

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
        totalPriority += (duplicate > 97) ? duplicate - 96 : duplicate - 38;
    }

    cout << "Total Priority: " << totalPriority << endl;

    return 0;
}
