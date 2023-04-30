#include "LAB9.h"
#include <iostream>
#include <list>
#include <algorithm>


namespace SpaceExample2 {
    using namespace std;

    int mainExample2() {
        list<int> L = { 0, 1, 2, 3, 0, 4, 5, 6, 7, 0 };

        // Удаляем первый нулевой элемент
        auto it_first_zero = find(L.begin(), L.end(), 0);
        if (it_first_zero != L.end()) {
            L.erase(it_first_zero);
        }

        // Удаляем последний нулевой элемент
        auto it_last_zero = find(L.rbegin(), L.rend(), 0);
        if (it_last_zero != L.rend()) {
            L.erase((++it_last_zero).base());
        }

        // Удаляем единственный нулевой элемент
        auto it_zero = find(L.begin(), L.end(), 0);
        if (it_zero != L.end() && next(it_zero) == L.end()) {
            L.erase(it_zero);
        }

        for (int x : L) {
            cout << x << " ";
        }
        cout << endl;

        return 0;
    }
}