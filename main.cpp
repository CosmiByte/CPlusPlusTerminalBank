#include <iostream> 
#include <iomanip>

double showBalance(double balance);
double deposit(double balance);
double withdraw(double balance);

int main() {

    double balance = 0;
    int selection;

    do{

        std::cout << "********BANK********" << "\n";
        std::cout << "1. Deposit" << "\n";
        std::cout << "2. Withdraw" << "\n";
        std::cout << "3. Show Balance" << "\n";
        std::cout << "4. Exit" << "\n";
        std::cout << "********************" << "\n";
        std::cin >> selection;

        switch(selection){
            case 1:
                balance += deposit(balance);
                break;

            case 2:
                balance -= withdraw(balance);
                break;

            case 3:
                showBalance(balance);
                break;
                
            case 4:
                system("cls");
                std::cout << "Thank for using CPP Bank!" << "\n";
                break;
            }
   
    } while (selection != 4);

    system("pause");

    return 0;

}

double deposit(double balance){

    double amount;
    std::cout << "How much would you like to deposit : ";
    std::cin >> amount;

    if (amount < 0){
        system("cls");
        std::cout << "Amount deposited cannot be less than 0!" << "\n";
        return 0;
    }
    else {
        system("cls");
        std::cout << "Amount deposited successfully." << "\n";
        return amount;
    }

}

double withdraw(double balance){

    double amount;
    std::cout << "How much would you like to withdraw : ";
    std::cin >> amount;

    if (amount > balance){
        system("cls");
        std::cout << "Insufficient funds." << "\n";
        return 0;
    }

    else if (amount < 0){
        system("cls");
        std::cout << "Invalid input, amount cannot be less than 0!" << "\n";
        return 0;
    }

    else{
        system("cls");
        std::cout << "Amount withdrawn successfully." << "\n";
        return amount;
    }

}

double showBalance(double balance){
    system("cls");
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << "\n" << "\n";
    return 0;
}
