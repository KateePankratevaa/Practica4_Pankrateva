#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    ifstream file("Bagazh.txt");

    if (!file.is_open()) {
        cout << "Ошибка открытия файла!" << endl;
        return 1;
    }

    cout << "Пассажиры, имеющие более двух вещей в багаже:\n" << endl;

    string line;
    while (getline(file, line)) {
        istringstream iss(line);
        int numItems;
        double weight;
        iss >> numItems >> weight;

        if (numItems > 2) {
          
            cout << "Количество вещей: " << numItems << " Вес в килограммах " << weight << endl;
        }
    }

    file.close();
    return 0;
}
