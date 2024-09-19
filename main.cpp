#include <iostream>

struct BankAccount {
    int accNum;
    std::string ownerName;
    double balance;
};

BankAccount changeBalance(BankAccount bankAccount, double newBalance) {
    BankAccount updatedAccount =
        BankAccount{bankAccount.accNum, bankAccount.ownerName, newBalance};

    return updatedAccount;
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

    BankAccount updatedAccount = changeBalance(account, newBalance);

    std::cout << "Ваш счёт: " << updatedAccount.ownerName << ", "
              << updatedAccount.accNum << ", " << updatedAccount.balance
              << std::endl;
}
