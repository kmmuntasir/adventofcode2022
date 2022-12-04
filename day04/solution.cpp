#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);

    int aStart, aEnd, bStart, bEnd, overlapCount = 0;

    while(scanf("%d-%d,%d-%d", &aStart, &aEnd, &bStart, &bEnd) > 0) {
        if(
            (aStart <= bStart && aEnd >= bEnd) ||
            (bStart <= aStart && bEnd >= aEnd)
        ) {
            ++overlapCount;
        }
    }

    cout << overlapCount << endl;

    return 0;
}
