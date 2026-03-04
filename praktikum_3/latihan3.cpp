#include <iostream>

class RekeningBank {
private:
    double saldo;

public:
    RekeningBank(double saldo_awal) {
        saldo = saldo_awal;
        sisa_saldo();
    } 

    void sisa_saldo() {
        std::cout << "Jumlah saldo yang ada di rekening : " << saldo << '\n';
    }

    double tarik(double jumlah) {
        if(jumlah > saldo) {
            std::cout << "Penarikan Gagal\n";
        } else {
            saldo -= jumlah;
            sisa_saldo();
        }
    }

    double setor(double jumlah) {
        saldo += jumlah;
        sisa_saldo();
    }

};

int main() {
    RekeningBank rekening1(500.5); // saldo awal 500.5
    rekening1.setor(100.9); // 601.4 = 500.5 + 100.0
    rekening1.tarik(1000); // penarikan gagal karena saldo < yg ingin ditarik
    rekening1.tarik(439.5); // tarik dan tampilkan total saldo
}
