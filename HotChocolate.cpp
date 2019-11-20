// Hot Chocolate vending machine
#include <iostream>
#include <string.h>

using namespace std;

int insertCoins(int value, int price, string beverage){
	int coin = 0;
	while(value<price){
		cout << price-value << " coins needed" << endl;
		cout << "Insert coins(press 0 to wrapup) : ";
		cin >> coin;
		if(coin==0){
			cout << "Bye" << endl;
			return value;
		}
		value+=coin;
	}
	if(value>=price){
		value -= price;
		cout << "Enjoy your " << beverage << endl;
	}
	return value;
}

int main(){
	int value=0, choice, coin=0;
	
	while(1){
		cout << "*******Main Menu*******" << endl;
		cout << "1. Milo" << endl;
		cout << "2. Coffee" << endl;
		cout << "3. Tea" << endl;
		cout << "4. Check coin total" << endl;
		cout << "5. Exit" << endl;
		cout << "**********END**********" << endl;
		cout << "Enter your choice : ";
		cin >> choice;
		
		switch(choice){
			case 1 :
				cout << "Price : Rs 10" << endl;
				value = insertCoins(value, 10, "Milo");
				break;
			
			case 2 :
				cout << "Price : Rs 20" << endl;
				value = insertCoins(value, 20, "Coffee");
				break;
				
			case 3 :
				cout << "Price : Rs 15" << endl;
				value = insertCoins(value, 15, "Tea");
				break;
			
			case 4 : 
				cout << value;
				break;
			
			case 5 :
				cout << "Good Bye";
				exit(0);
		}
	}
}
