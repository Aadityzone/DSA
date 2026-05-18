#include <iostream>
#include <climits>
using namespace std;

int sum(int freq[], int i, int j) {
    int s = 0;
    for (int k = i; k <= j; k++)
        s += freq[k];
    return s;
}

int optimalBST(int freq[], int n) {
    int cost[100][100];
    
    for (int i = 0; i < n; i++)
        cost[i][i] = freq[i];

    for (int L = 2; L <= n; L++) {
        for (int i = 0; i <= n - L; i++) {
            int j = i + L - 1;
            cost[i][j] = INT_MAX;

            int total = sum(freq, i, j);

            for (int r = i; r <= j; r++) {
                int c = total;

                if (r > i)
                    c += cost[i][r - 1];
                if (r < j)
                    c += cost[r + 1][j];

                cost[i][j] = min(cost[i][j], c);
            }
        }
    }

    return cost[0][n - 1];
}

int main() {
    int n;
    cout << "Enter number of keys: ";
    cin >> n;

    int freq[100];
    cout << "Enter frequencies: ";
    for (int i = 0; i < n; i++)
        cin >> freq[i];

    cout << "Minimum cost of OBST: " << optimalBST(freq, n);

    return 0;
}