#include "LAB9.h"
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>


namespace SpaceExample3 {



    int mainExample3() {
        std::vector<int> V0 = { 1, 2, 3 };
        int N = 3;
        std::vector<std::vector<int>> V = { {1, 2, 4, 4}, {1, 2, 3}, {1, 2, 3, 3} };

        std::multiset<int> V0_set(V0.begin(), V0.end());

        int count = 0;
        for (int i = 0; i < N; i++) {
          
            std::multiset<int> VI_set(V[i].begin(), V[i].end());

           
            if (std::includes(VI_set.begin(), VI_set.end(), V0_set.begin(), V0_set.end())) {
                count++;
            }
        }

        std::cout << count << std::endl;
        return 0;
    }
}