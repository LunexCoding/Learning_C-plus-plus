#include <iostream>

using namespace std;


void getElementsFromArrayByI(int* start, int* end, int matrixSize)
{
    int* ptr = start;
    int i, j;
    while (ptr != end) {
        i = (ptr - start) / matrixSize;
        j = (ptr - start) % matrixSize;
        printf("array[%d][%d] = %d %d\n", i, j, *ptr, ptr);
        ptr++;
    }
}

int main() {
    const int lenArray = 3;
    int array[lenArray][lenArray] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };

    getElementsFromArrayByI(&array[0][0], &array[0][0] + lenArray * lenArray, lenArray);
    return 0;
}