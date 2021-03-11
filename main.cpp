#include <iostream>
using namespace std;

int items[] = { -7, -3, -2,1, 5, 8 }; //Исходное множество
int n = sizeof(items) / sizeof(int); //Размер
int *set; //Искомое подмножество

void subsum(int i, int weight) { //Поиск и вывод элементов
    int j;
    if (i && !weight) {
        for (j = 0; j < i; j++) {
            cout << " " << items[set[j]];
        }
        cout << endl;
    }
    for (j = i ? set[i - 1] + 1 : 0; j < n; j++) {
        set[i] = j;
        subsum(i + 1, weight + items[j]);
    }
}

int main() {
    set = new int[n];
    subsum(0, 0);
    delete set;
    cin.get();
    return 0;
}