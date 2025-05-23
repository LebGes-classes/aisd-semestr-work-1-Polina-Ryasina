#ifndef FENWIKTREE_H
#define FENWIKTREE_H

#include <vector>

using namespace std;

class FenwikTree {
public:
    FenwikTree(int length);

    void updateValue(int index, int value);  // ���������� ��������
    int getPrefSum(int index);          // ���������� �����
    int getRangeSum(int start, int end);     // ����� �� �������

private:
    vector<int> tree;
    int arrayLength;
};

#endif // FENWIKTREE_H