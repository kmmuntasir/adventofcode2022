#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);

    int aStart, aEnd, bStart, bEnd, fullOverlap = 0, partialOverlap = 0;

    while(scanf("%d-%d,%d-%d", &aStart, &aEnd, &bStart, &bEnd) > 0) {
        if(
            (bStart <= aStart && bEnd >= aStart) ||
            (bStart <= aEnd && bEnd >= aEnd) ||
            (aStart <= bStart && aEnd >= bStart) ||
            (aStart <= bEnd && aEnd >= bEnd)
        ) {
            ++partialOverlap;

            if(
                (aStart <= bStart && aEnd >= bEnd) ||
                (bStart <= aStart && bEnd >= aEnd)
            ) {
                ++fullOverlap;
            }
        }
    }

    cout << fullOverlap << endl;

    cout << partialOverlap << endl;

    return 0;
}
