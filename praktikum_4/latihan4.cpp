#include <iostream>
#include <vector>
#include <fstream>

int main() {
    std::vector<double>sensor;
    std::ofstream file("hasil_kalibrasi.txt");
    sensor.push_back(100.5);
    sensor.push_back(200.0);
    sensor.push_back(150.5);
    for(auto &i : sensor) {
        i *= 1.1;
    }

    if(file.is_open()) {
        for(int i = 0; i < 3; i++) {
            file << "Hasil kalibrasi data ke-" << i + 1 << " : " << sensor[i] << '\n';
        }
        file.close();
    } else {
        std::cout << "Gagal membuka file" << '\n';
    }
}
