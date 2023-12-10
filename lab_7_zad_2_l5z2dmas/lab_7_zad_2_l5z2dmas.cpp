#include <iostream>
#include <clocale>

using namespace std;

void vvod_mas(int* a, int n) {//vvodim massive

    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "]";
        cin >> a[i];
    }
}

int* chetnosti(int* a, int n) {
    int* b = new int[n];
    int i, j = 0;
    for (i = 0; i < n; i += 2, j++) {//chet
        b[j] = a[i];

    }
    for (i = 1; i < n; i += 2, j++) {//no-chet
        b[j] = a[i];

    }
    return b;
}
int main(void)
{
    setlocale(LC_ALL, "ru");

    int* a, n;
    int i, j = 0;
    cout << "Введите размер массива";
    cin >> n;
    a = new int[n];
    vvod_mas(a, n);
    int* b = chetnosti(a, n);

    for (i = 0; i < n; i++) {
        cout << b[i] << endl;
    }
    delete[] a;
    delete[] b;
}