// Hot Chocolate vending machine
#include <iostream>

using namespace std;

int main(){
	int value, choice, coin;
	
	while(1){
		cout << "*******Main Menu*******" << endl;
		cout << "1. Milo" << endl;
		cout << "2. Coffee" << endl;
		cout << "3. Tea" << endl;
		cout << "**********END**********" << endl;
		cout << "Enter your choice : ";
		cin >> choice;
		
		switch(choice){
			case 1 :
				value=0;
				coin=0;
				cout << "Price : Rs 10" << endl;
				while(value<10){
					cout << 10-value << " coins needed" << endl;
					cin >> coin;
					value+=coin;
				}
				cout << "Enjoy your Milo" << endl;
				break;
			
			case 2 :
				value=0;
				coin=0;
				cout << "Price : Rs 20" << endl;
				while(value<20){
					cout << 20-value << " coins needed" << endl;
					cin >> coin;
					value+=coin;
				}
				cout << "Enjoy your Coffee" << endl;
				break;
				
			case 3 :
				value=0;
				coin=0;
				cout << "Price : Rs 15" << endl;
				while(value<15){
					cout << 15-value << " coins needed" << endl;
					cin >> coin;
					value+=coin;
				}
				cout << "Enjoy your Tea" << endl;
				break;
		}
	}
}
