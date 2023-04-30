#include "LAB9.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <map>


namespace SpaceExample1 {
    using namespace std;

    int mainExample1() {
        string filename = "data.txt";
        ifstream input(filename);

        int year, month, duration, client_code;
        map<int, int> yearly_duration;


        while (input >> year >> month >> duration >> client_code) {
            yearly_duration[year] += duration;
        }


        int max_year = 0;
        int max_duration = 0;
        for (const auto& [year, duration] : yearly_duration) {
            if (duration > max_duration) {
                max_year = year;
                max_duration = duration;
            }
        }


        cout << "Year with the highest total duration: " << max_year << endl;
        cout << "Total duration: " << max_duration << " hours" << endl;

        input.close();

        return 0;
    }
}
