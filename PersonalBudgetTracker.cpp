#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

struct Transaction {
    string type;      // "Gelir" veya "Gider"
    string category;  // Örn: "Maaþ", "Yemek", "Kira"
    double amount;    // Tutar
};

class BudgetTracker {
private:
    vector<Transaction> transactions;
    double balance;
    const string filename = "budget_data.txt";

    void loadData() {
        ifstream file(filename);
        if (!file.is_open()) return;

        Transaction t;
        while (file >> t.type >> t.category >> t.amount) {
            transactions.push_back(t);
            if (t.type == "Gelir") balance += t.amount;
            else balance -= t.amount;
        }
        file.close();
    }

    void saveData() {
        ofstream file(filename);
        for (const auto& t : transactions) {
            file << t.type << " " << t.category << " " << t.amount << "\n";
        }
        file.close();
    }

public:
    BudgetTracker() : balance(0.0) {
        loadData();
    }

    void addTransaction(const string& type, const string& category, double amount) {
        if (amount <= 0) {
            cout << "Gecerli bir tutar giriniz!\n";
            return;
        }
        Transaction t = {type, category, amount};
        transactions.push_back(t);

        if (type == "Gelir") {
            balance += amount;
        } else {
            balance -= amount;
        }

        saveData();
        cout << type << " basariyla eklendi!\n";
    }

    void showSummary() const {
        cout << "\n=== FINANSAL OZET ===\n";
        cout << fixed << setprecision(2);
        cout << "Mevcut Bakiye: " << balance << " TL\n";
        cout << "---------------------\n";
        cout << "Gecmis Islemler:\n";

        if (transactions.empty()) {
            cout << "Henuz bir islem kaydi yok.\n";
            return;
        }

        for (size_t i = 0; i < transactions.size(); ++i) {
            cout << i + 1 << ". [" << transactions[i].type << "] "
                 << transactions[i].category << " - "
                 << transactions[i].amount << " TL\n";
        }
    }
};

int main() {
    BudgetTracker tracker;
    int choice;

    do {
        cout << "\n--- BUTCE TAKIP SISTEMI ---\n";
        cout << "1. Gelir Ekle\n";
        cout << "2. Gider Ekle\n";
        cout << "3. Ozet ve Bakiye Goruntule\n";
        cout << "0. Cikis\n";
        cout << "Seciminiz: ";
        cin >> choice;

        if (choice == 1 || choice == 2) {
            string type = (choice == 1) ? "Gelir" : "Gider";
            string category;
            double amount;

            cout << "Kategori (tek kelime, orn: Maas/Market/Kira): ";
            cin >> category;
            cout << "Tutar: ";
            cin >> amount;

            tracker.addTransaction(type, category, amount);
        } else if (choice == 3) {
            tracker.showSummary();
        } else if (choice != 0) {
            cout << "Gecersiz secim! Tekrar deneyin.\n";
        }

    } while (choice != 0);

    cout << "Programdan cikiliyor...\n";
    return 0;
}
