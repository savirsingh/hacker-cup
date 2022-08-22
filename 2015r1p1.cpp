// it exceeds the time limit but does work.

#include <bits/stdc++.h>
using namespace std;

int prime_factors(int &n)
{
    int i=2;
    set<int> factors;
    while (i*i<=n) {
        if (n%i) {
            i+=1;
        }
        else {
            n/=i;
            factors.insert(i);
        }
    }
    if (n>1) {
        factors.insert(n);
    }
    return factors.size();
}

int main() {

    int t;
    cin >> t;
    int case1 = 1;

    for (int s=0; s<t; s++) {
        int a, b, k;
        cin >> a >> b >> k;
        vector<int> list2 (b+1-a);
        iota(list2.begin(), list2.end(), a);
        for (int m=0; m<list2.size(); m++) {
            list2[m] = prime_factors(list2[m]);
        }
        cout << "Case #" << to_string(case1) << ": " << to_string(count(list2.begin(), list2.end(), k)) << endl;
        case1 += 1;

    }

}
