#include <iostream>

using namespace std;

int main()
{
    int weight;
    cout << "" << endl;
    cout << "737-800 V-Speeds Calculator" << endl;
    cout << "(c) Baran Önen 2020" << endl;
    printf("\x1b[31m");
    cout << "TO BE USED IN FLIGHT SIMULATIONS ONLY" << endl;
    printf("\x1b[0m");
    cout << "Please enter aircraft's weight:" << endl;
    cin >> weight;
    cout << "" << endl;
    printf("\x1b[36mTakeoff Speeds:\n");
    printf("\x1b[0m");
    cout << "V1: " << weight - 15 + 100 << endl;
    cout << "Vr: " << weight - 15 + 100 + 2 << endl;
    cout << "V2: " << weight - 15 + 100 + 10 << endl;
    cout << "" << endl;
    printf("\x1b[36mReferance Speeds:\n");
    printf("\x1b[0m");
    cout << "Vref 30: " << weight * 3 - 1 << endl;
    cout << "Vref 40: " << weight * 3 - 4 << endl;
    return 0;
}
