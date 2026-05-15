#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    vector<vector<int>> graph(n + 1, vector<int>(n + 1));

    cout << "Enter adjacency matrix (use " << INT_MAX << " for no edge):\n";
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> graph[i][j];
        }
    }

    vector<int> cost(n + 1, 0);
    vector<int> path(n + 1, 0);

    cost[n] = 0; 


    for (int i = n - 1; i >= 1; i--) {
        int minCost = INT_MAX;

        for (int j = i + 1; j <= n; j++) {
            if (graph[i][j] != INT_MAX && cost[j] != INT_MAX) {
                if (graph[i][j] + cost[j] < minCost) {
                    minCost = graph[i][j] + cost[j];
                    path[i] = j;
                }
            }
        }
        cost[i] = minCost;
    }


    cout << "\nMinimum Cost: " << cost[1] << endl;

    cout << "Path: ";
    int k = 1;
    cout << k;
    while (k != n) {
        k = path[k];
        cout << " -> " << k;
    }

    return 0;
}