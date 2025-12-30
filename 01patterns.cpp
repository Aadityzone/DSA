#include <iostream>
using namespace std;

/* Pattern 1 */
void print(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) cout << " ";
        for (int j = 0; j < 2 * (n - i - 1) + 1; j++) cout << "*";
        for (int j = 0; j < i; j++) cout << " ";
        cout << '\n';
    }
}

/* Pattern 2 */
void print1(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) cout << " ";
        for (int j = 0; j < 2 * i + 1; j++) cout << "*";
        for (int j = 0; j < n - i - 1; j++) cout << " ";
        cout << '\n';
    }
}

/* Pattern 3 */
void print2(int n) {
    for (int i = 0; i <= 2 * n - 1; i++) {
        int star = i;
        if (i > n) star = 2 * n - i;
        for (int j = 0; j < star; j++) cout << "*";
        cout << '\n';
    }
}

/* Pattern 4 */
void print3(int n) {
    for (int i = 0; i < n; i++) {
        int start = (i % 2 == 0) ? 1 : 0;
        for (int j = 0; j <= i; j++) {
            cout << start;
            start = 1 - start;
        }
        cout << '\n';
    }
}

/* Pattern 5 */
void print4(int n) {
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << j;
        for (int j = 1; j <= space; j++) cout << " ";
        for (int j = i; j >= 1; j--) cout << j;
        cout << '\n';
        space -= 2;
    }
}

/* Pattern 6 */
void print5(int n) {
    for (int i = 0; i < n; i++) {
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch << " ";
        }
        cout << '\n';
    }
}

/* Pattern 7 */
void print6(int n) {
    for (int i = 0; i < n; i++) {
        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++) {
            cout << ch << " ";
        }
        cout << '\n';
    }
}

/* Pattern 8 */
void print7(int n) {
    for (int i = 0; i < n; i++) {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++) {
            cout << ch << " ";
        }
        cout << '\n';
    }
}

/* Pattern 9 */
void print8(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) cout << " ";
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++) {
            cout << ch;
            if (j <= breakpoint) ch++;
            else ch--;
        }
        for (int j = 0; j < n - i - 1; j++) cout << " ";
        cout << '\n';
    }
}

/* Pattern 10 */
void print9(int n) {
    for (int i = 0; i < n; i++) {
        char ch = 'E';
        for (int j = 0; j <= i; j++) {
            cout << ch;
            ch--;
        }
        cout << '\n';
    }
}

/* Pattern 11 */
void print10(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << '\n';
    }
}

int main() {
    

    int t;
    cout<<"enter t :";
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        print7(n);   
    }

    return 0;
}
