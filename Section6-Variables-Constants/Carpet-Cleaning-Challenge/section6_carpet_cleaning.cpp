// section6
// challenge
#include <iostream>
using namespace std;
#include <vector>
int main(){
	
	cout << "\nHello, Welcome to Frank's Carpet Cleaning Service"<< endl;
	int small_rooms{0};
	int large_rooms{0};
	const double price_small_room{25.0};
	const double price_large_room{35.0};
	const double sales_tax{0.06};
	const int expiry_days{30};
	
	cout << "\nHow many small rooms would you like cleaned? " ;
	cin >> small_rooms;
	cout << "How many large rooms would you like cleaned? " ;
	cin >> large_rooms;
	
	cout << "\nEstimate for carpet cleaning service" << endl;
	cout << "Number of small rooms: "<<small_rooms << endl;
	cout << "Number of large rooms: "<<large_rooms << endl;
	cout << "Price per small rooms: "<<price_small_room << endl;
	cout << "Price per large rooms: "<<price_large_room << endl;
	
	float cost = ((small_rooms*price_small_room)+(large_rooms*price_large_room));
	float tax = (cost*sales_tax);
	
	cout << "\nCost: $" << cost;
	cout << "\nTax: $" << tax;
	
	cout << "\n================================================================"<< endl;
	cout << "\nTotal estimate: $" << (cost+tax);
	cout << "\nThis estimate is valid for "<< expiry_days<< " days";
	return 0;

}