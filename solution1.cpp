#include<iostream>
using namespace std;

class AirtimeAccount{
private:

int balance;
string Code;

public: 

int PhoneNum;
int Amount;
 string codeInput;
 void initialBalance(){
 balance = 0;
 }
void recharge (int amount){
if (amount > 0){
 balance += amount;
 cout << "Recharge successful." << endl;
}else{
cout << "Recharge unsuccessful. Invalid amount" << endl;
}


}


void checkBalance(){
cout << "Dail *867# to check your new balance" << endl;
cin>> codeInput;

if( codeInput == "*867#"){

cout << " Your current balance is " << balance << " frs" << endl;
}

}

};


int main(){

AirtimeAccount User;
cout << "Enter your phone number:" << endl << "+237 ";
cin >> User.PhoneNum;



cout << "Enter the amount you want to recharge:" << endl;
cin >> User.Amount;

User.recharge(User.Amount);
User.checkBalance();

    return 0;
}