#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Transaction {
public:
    std::string date;
    string type;
    string category;
    double amount;

    Transaction(const string& date, const string& type, const string& category, double amount);
};
class User {
    vector <Transaction> Transac;
    string name;

    User(const string& name);
    void addTransac(Transaction& Transac);
};
class DataBase {

};

int main()
{
    std::cout << "Hello World!\n";
}

