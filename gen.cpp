// generating a random sequence of distinct elements
#include <bits/stdc++.h>
using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int rand(int a, int b) {
    return a + rng() % (b - a + 1);
}

int main() {

    int n = rand(2, 10);
    printf("%d\n", n);
    set<int> used;
    for(int i = 0; i < n; ++i) {
        int x;
        do {
            x = rand(1, 10);
        } while(used.count(x));
        printf("%d ", x);
        used.insert(x);
    }
    puts("");
}
