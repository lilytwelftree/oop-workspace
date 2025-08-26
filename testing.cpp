#include <iostream>

using namespace std;

void swap(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout << "Inside func! " << "A = " << a << " B = " << b << endl;
}

int main() {
    int a = 1;
    int b = 2;
    swap(&a, &b);
    cout << "A = " << a << " B = " << b << endl;

}