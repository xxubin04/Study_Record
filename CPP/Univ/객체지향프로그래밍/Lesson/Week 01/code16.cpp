#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int stake, goal, T;
    int wins = 0;
    
    srand((unsigned int) time(NULL));  // 난수생성기

    cin >> T >> stake >> goal;

    for (int t = 0; t < T; t++) {
        int cash = stake;
        while (cash > 0 && cash < goal) {
            if (rand() % 2 == 0)    cash++;
            else                    cash--;
        }
        if (cash == goal) 
            wins++;
    }
    cout << 100*wins/(double)T << endl;
    
    return 0;
}
