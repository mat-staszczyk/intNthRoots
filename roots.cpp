#include <iostream>

using namespace std;

char *results(float rs, int u=0) {
    if (u==1) {
        cout << endl << "Undefined result." << endl;
        cin.get();
    } else {
        cout << endl << "Your result is " << rs << "." << endl;
        cin.get();
    }
}

float nthRoot (float n, float r) {
    float result = r;
    while (n>1) {
        result *= r;
        n--;
    }
    return result;
}

int main()
{
    float r, n;
    cout << "Set root:" << endl;
    cin >> r;
    cout << endl << "Set root's degree:" << endl;
    cin >> n;

    float result;
    if (r==0 && n<=0) {
        results(1, 1);
    } else if (r==0) {
        results(0);
    } else if (r==1 && n>=0) {
        results(1);
    } else if (n<0) {
        r = 1/r;
        n = -n;
        results(nthRoot(n, r));
    } else {
        results(nthRoot(n, r));
    }

    return 0;
}
