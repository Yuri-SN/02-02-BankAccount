#include <iostream>

struct BankAccount {
    int accNum;
    std::string ownerName;
    double balance;
};

void changeBalance(BankAccount &account, double newBalance) {
    account.balance = newBalance;
}

int main() {
    BankAccount account{};

    std::cout << "Введите номер счёта: ";
    std::cin >> account.accNum;

    std::cout << "Введите имя владельца: ";
    std::cin >> account.ownerName;

    std::cout << "Введите баланс: ";
    std::cin >> account.balance;

    double newBalance{};

    std::cout << "Введите новый баланс: ";
    std::cin >> newBalance;

    changeBalance(account, newBalance);

    std::cout << "Ваш счёт: " << account.ownerName << ", " << account.accNum
              << ", " << account.balance << std::endl;
}
