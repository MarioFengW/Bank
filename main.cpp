#include <iostream>

#include "Bank.h"


int main() {
    Bank bank;

    bank.addAccount("aa12", 100);
    cout << "El balance de tu cuenta aa12 es: " << bank.getBalance("aa12") << endl;
    
    bank.addBalance("aa12", 100);
    cout << "El balance de tu cuenta aa12 es: " << bank.getBalance("aa12") << endl;
    
    bank.minusBalance("aa12", 10);
    cout << "El balance de tu cuenta aa12 es: " << bank.getBalance("aa12") << endl;
    
}