#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
public:
    int accountNumber;
    string name;
    float balance;
    static string bankName;

    inline void deposit(float amount)
    {
        balance += amount;
        cout << "Amount Deposited Successfully" << endl;
    }
    void withdraw(float amount);

    static void updateBankName()
    {
        cout << "Enter updated bank name: ";
        cin.ignore(); // clear leftover newline
        getline(cin, bankName);
        cout << "Bank name updated successfully!" << endl;
    }

    void viewBalance()
    {
        cout << "Current Balance: " << balance << endl;
    }
    void printDetails();
};
void BankAccount::withdraw(float amount)
{
    if (amount > balance)
    {
        cout << "Insufficient Balance" << endl;
        return;
    }
    balance -= amount;
    cout << "Amount Withdrawn Successfully" << endl;
}
void BankAccount::printDetails()
{
    cout << "Account Number: " << accountNumber << endl;
    cout << "Name: " << name << endl;
    cout << "Balance: " << balance << endl;
    cout << "Bank Name: " << bankName << endl;
}
string BankAccount::bankName = "State Bank of India";

int main()
{
    BankAccount acc1;

    // Input account details
    cout << "Enter Account Number: ";
    cin >> acc1.accountNumber;

    cin.ignore(); // clear newline
    cout << "Enter Name: ";
    getline(cin, acc1.name); // allows full name with spaces

    cout << "Enter Initial Balance: ";
    cin >> acc1.balance;

    int option = 0;
    while (option != 5)
    {
        cout << "\n===== Menu =====" << endl;
        cout << "1. Update Bank Name" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. View Balance" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> option;

        switch (option)
        {
        case 1:
            BankAccount::updateBankName();
            break;

        case 2:
        {
            float amount;
            cout << "Enter amount to deposit: ";
            cin >> amount;
            acc1.deposit(amount);
            break;
        }

        case 3:
        {
            float amount;
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            acc1.withdraw(amount);
            break;
        }

        case 4:
            acc1.viewBalance();
            break;

        case 5:
            cout << "Exiting...\n" << endl;
            break;

        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    }

    acc1.printDetails();
    return 0;
}
