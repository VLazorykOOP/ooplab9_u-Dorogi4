#include <iostream>
#include <fstream>
#include <vector>
#include <map>

using namespace std;

int main() {
    string filename = "data.txt"; // имя файла с исходными данными
    ifstream input(filename); // открытие файла для чтения

    int year, month, duration, client_code;
    map<int, int> yearly_duration;

    // чтение данных из файла и вычисление суммарной продолжительности занятий по годам
    while (input >> year >> month >> duration >> client_code) {
        yearly_duration[year] += duration;
    }

    // поиск года с максимальной суммарной продолжительностью занятий
    int max_year = 0;
    int max_duration = 0;
    for (const auto& [year, duration] : yearly_duration) {
        if (duration > max_duration) {
            max_year = year;
            max_duration = duration;
        }
    }

    // вывод результата
    cout << "Year with the highest total duration: " << max_year << endl;
    cout << "Total duration: " << max_duration << " hours" << endl;

    input.close(); // закрытие файла

    return 0;
}
