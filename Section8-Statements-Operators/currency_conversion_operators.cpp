// section8
// challenge
#include <iostream>
using namespace std;
#include <vector>


int main(){
    
    int cent_num{};
    const int c_dollar{100};
//    const int c_squarters{25};
//    const int c_dimes{10};
//    const int c_penny{1};
    
    cout << "please enter the number of cents : ";
    cin >> cent_num ;
    cout << boolalpha;
    cout << "number of cent is zero : " << (cent_num==0) << endl;
    int dollar = cent_num/c_dollar;
    cout << "dollars : " << dollar << endl;
    int squarters = (cent_num-(dollar*100))/25;
    cout << "squarters : " << squarters << endl;
    int dime = (cent_num-(dollar*100)-(squarters*25)) /10;
    cout << "dimes : " << dime << endl;
    int nickel = (cent_num-(dollar*100)-(squarters*25)-(dime*10)) /5;
    cout << "nickel : " << nickel << endl;
    int penny = (cent_num-(dollar*100)-(squarters*25)-(dime*10)-(nickel*5));
    cout << "penny : " << penny;
    
    cout << endl;
    return 0;
    }
	
