# include <iostream>

void displayBalance(double balance) {
    std::cout << "\nCurrent Balance: " << balance << "\n\n";
}

double deposit(double balance) {
    double amount;

    std::cout << "Enter amount: ";
    std::cin >> amount;

    balance = balance + amount;

    return balance;
}

int main() {

    double balance = 1000;
    int choice;
    int menu = 1;

    std::cout << "***************** BANK APP *****************\n";  

    do
    {
        std::cout << "1. Check Balance\n";
        std::cout << "2. Deposit\n";
        std::cout << "3. Withdraw\n";
        std::cout << "4. Quit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            displayBalance(balance);
            break;
        case 2:
            balance = deposit(balance);
            std::cout << "\nNew balance: " << balance << "\n\n";
            break;
        case 3:
            
            break;
        case 4:
            menu = 0;
            break;
        default: std::cout << "Not an option! Try again!\n";
            break;
        }
    }while (menu != 0);

    std::cout << "*******************************************\n";

    return 0;
}
