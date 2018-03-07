
#include <cstdlib>
#include <iostream>

using namespace std;

void sort(int number[], int size);

void sort(int number[], int size) {

    int a;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {

            if (number[i] > number[j]) {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
}

int main(int argc, char** argv) {

    int num[10] = {5, 8, 1, 4, 2, 3, 8, 19, 10, 6};
    int length = 10;

    cout << "Array before sort: " << endl;

    for (int i = 0; i < 10; i++) {
        cout << num[i] << " ";
    }

    sort(num, length);

    cout << "" << endl;
    cout << "Array after sort: " << endl;

    for (int i = 0; i < 10; i++) {
        cout << num[i] << " ";
    }
    
    return 0;
}