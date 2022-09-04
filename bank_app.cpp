# include <iostream>

void displayBalance(double balance) {
    std::cout << "\nCurrent Balance: " << balance << "\n\n";
}

double deposit(double balance) {
    double amount;   

    do
    {
        std::cout << "Enter amount: ";
        std::cin >> amount;

        if(amount <= 0) {
            std::cout << "\n\nInvalid amount!!\n\n";
        }
        
    }while (amount <= 0);
    

    balance = balance + amount;

    return balance;
}

double withdraw(double balance) {
    double amount;

    do
    {
        std::cout << "Enter amount: ";
        std::cin >> amount;

        if(amount <= 0) {
            std::cout << "\n\nInvalid amount!!\n\n";
        }
        
    }while (amount <= 0);

    balance = balance - amount;

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
            displayBalance(balance);
            break;
        case 3:
            balance = withdraw(balance);
            displayBalance(balance);
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
