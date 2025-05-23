#ifndef FENWIKTREE_H
#define FENWIKTREE_H

#include <vector>

using namespace std;

class FenwikTree {
public:
    FenwikTree(int length);

    void updateValue(int index, int value);  // Обновление элемента
    int getPrefSum(int index);          // Префиксная сумма
    int getRangeSum(int start, int end);     // Сумма на отрезке

private:
    vector<int> tree;
    int arrayLength;
};

#endif // FENWIKTREE_H