#include <iostream>
#include <random>

using namespace std;


void getELementsFromArrayByI(int* startArrayPtr, int* endArrayPtr, int step, const int start = 0)
{

    for (; startArrayPtr <= endArrayPtr; startArrayPtr += step)
    {
        cout << startArrayPtr << "\t" << *startArrayPtr << "\t" << endl;
    }
}

int main()
{
    int step;
    int startElement;
    const int lenArray = 10;
    int array[lenArray] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    step = 1;
    cout << "Input start element -> ";
    cin >> startElement;

    int* ptr{ &array[startElement - 1] };
    int* end{ &array[lenArray - 1] };
    cout << "Addr" << "\t\t\t" << "Value" << endl;
    getELementsFromArrayByI(ptr, end, step);

    return 0;
}



