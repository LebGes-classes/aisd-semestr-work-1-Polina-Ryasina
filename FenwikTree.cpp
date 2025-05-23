#include "fenwiktree.h"

FenwikTree::FenwikTree(int length) :
    arrayLength(length),
    tree(length + 1, 0) {
}

void FenwikTree::updateValue(int index, int value) {
    index++;
    while (index <= arrayLength) {
        tree[index] += value;
        index += index & -index;
    }
}

int FenwikTree::getPrefSum(int index) {
    index++;
    int total = 0;
    while (index > 0) {
        total += tree[index];
        index -= index & -index;
    }
    return total;
}

int FenwikTree::getRangeSum(int start, int end) {
    return getPrefSum(end) - getPrefSum(start - 1);
}