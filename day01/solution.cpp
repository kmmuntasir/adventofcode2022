#include <bits/stdc++.h>

using namespace std;

int main() {

    freopen("input.txt", "r", stdin);

    string number;
    int maxx=0, sum=0;
    vector<int> totals ;

    while(getline(cin, number)) {
        if(number[0] == '\0') {
            maxx = max(sum, maxx);
            totals.push_back(sum);
            sum = 0;
        } else {
            sum += stoi(number);
        }
    }

    sort(totals.begin(), totals.end());

    int topThreeTotal = totals[totals.size() - 1] + totals[totals.size() - 2] + totals[totals.size() - 3];

    cout << "Max: " << maxx << endl;
    cout << "Top Three Total: " << topThreeTotal << endl;

    return 0;
}
