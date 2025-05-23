#include <iostream>
#include <cstdlib>
#include <ctime>
#include "fenwiktree.h"

using namespace std;

int main() {
    srand(time(0));

    int sizes[] = { 10, 100, 1000, 10000 };

    for (int i = 0; i < 4; i++) {
        int currentSize = sizes[i];

        FenwikTree ft(currentSize);

        for (int j = 0; j < currentSize; j++) {
            ft.updateValue(j, rand() % 1000 + 1);
        }

        int testIndex = currentSize / 2;
        int prefResult = ft.getPrefSum(testIndex);

        int startRange = currentSize / 4;
        int endRange = 3 * currentSize / 4;
        int rangeResult = ft.getRangeSum(startRange, endRange);

        cout << "Array size: " << currentSize
            << ", Sum" << testIndex << ": " << prefResult
            << ", Range [" << startRange << ".." << endRange << "]: " << rangeResult
            << endl;
    }

    return 0;
}