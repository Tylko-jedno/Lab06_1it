#include <iostream>
#include <iomanip>

using namespace std;

void iter(int* a, int* s, const int size) {
    int n = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] > 0 || !(a[i] % 3 == 0)) {
            s += a[i];
            a[i] = 0;
            n++;
        }
    }
    cout << "s = " << int(s) << endl;
    cout << "n = " << n << endl;
}

void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}


void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}



int main()
{
    int p = -10;
    int k = 35;

    const int n = 22;
    int a[n];
    
    Create(a, n, p, k);
    Print(a, 22);
    iter(a, 0, 22);
    Print(a, 22);
}