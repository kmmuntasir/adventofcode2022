#include <bits/stdc++.h>

using namespace std;

int main()
{
    string input = "<inputfile>";
    
    char c = 'A';
    char current[20] = "";
    int curlen = 0;
    int i = 0;
    int maxx=0, sum=0;
    vector<int> totals ;
    
    while(c != '\0') {
        c = input[i];
        if(c == '\n') {
            if(0 < strlen(current)) {
                current[curlen] = '\0';
                cout << current << " ";
                sum += atoi(current);
                cout << sum << endl;
                current[0] = '\0';
                curlen = 0;
            } else {
                maxx = sum > maxx ? sum : maxx;
                totals.push_back(sum);
                sum = 0;
            }
        } else {
            current[curlen++] = c;
        }
        i++;
    }
    
    cout << endl << endl << maxx << endl;
    
    sort(totals.begin(), totals.end());
    reverse(totals.begin(), totals.end());
    
    
    cout << endl << totals[0];
    cout << endl << totals[1];
    cout << endl << totals[2];
    cout << endl;
    
    int threesum = totals[0] + totals[1] + totals[2];
    
    cout << threesum << endl;

    return 0;
}

