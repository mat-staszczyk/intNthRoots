#include <iostream>

using namespace std;

int main()
{
    int r;
    float n;
    cout << "Set root:" << endl;
    cin >> r;
    cout << endl << "Set root's degree:" << endl;
    cin >> n;

    float result;
    if (r==0 && n<=0) {
        cout << endl << "Undefined result." << endl;
        cin.get();
        return 0;
    } else if (r==0) {
        result = 0;
        cout << endl << "Your result is " << result << "." << endl;
        cin.get();
        return 0;
    } else if (r==1 && n>=0) {
        result = 1;
        cout << endl << "Your result is " << result << "." << endl;
        cin.get();
        return 0;
    } else if (n<0) {
        r = 1/r;
        n = -n;
    }

    result = r;
    while (n>1) {
        result *= r;
        n--;
    }

    cout << endl << "Your result is " << result << "." << endl;
    cin.get();
    return 0;
}
