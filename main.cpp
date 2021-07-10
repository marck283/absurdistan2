#include <bits/stdc++.h>

using namespace std;

double binomial(double a, double b);
double factorial(double a);

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double N;

    cin >> N;

    cout << setprecision(13);

    if(N == 2) {
        cout << 1.0;
    } else {
        cout << 1.0 - pow(1.0/(N - 1.0), N)*(binomial(N, N - 1.0) - 1.0);
    }
}

double binomial(double a, double b) {
    return factorial(a)/(factorial(b)*factorial(a - b));
}

double factorial(double a) {
    double fact = 1.0;

    while(a > 1) {
        fact *= a;
        a--;
    }

    return fact;
}
