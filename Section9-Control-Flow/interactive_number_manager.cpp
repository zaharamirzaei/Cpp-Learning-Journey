// section9
// challenge
#include <iostream>
using namespace std;
#include <vector>


int main(){
    
    vector <int> list{};
    char choise{};
    do{
        cout << "\nP:Print numbers \nA:Add a number \nM:Display mean of the numbers \nS:Display the smallest number \nL:Display the largest number \nQ:Quit \n\nPlease enter your choise : ";
        
        cin >> choise;
        
        if (choise=='p' || choise=='P'){
            if (list.size()!=0){
                cout << "[ ";
                for (int val:list)
                    cout << val << " ";
                cout << "]" <<endl;      
                }
            else
                cout << "[] the list is empty"<< endl;
            }
            
        else if (choise=='a' || choise=='A'){
            int num{};
            cout << "Enter a number to add list : ";
            cin >> num;
            numbers.push_back(num);
            cout << num << " added"<< endl;
            }
            
        else if (choise=='m' || choise=='M'){
            if (list.size()!=0){
                float mean{};
                float sum{};
                for (int val: list)
                    sum +=val;
                mean= sum/list.size();
                cout << "The mean of numbers is : "<< mean <<endl;
                }
            else
                cout << "[] the list is empty";
            
            }
        else if (choise=='s' || choise=='S'){
            if (list.size()!=0){
                int min = list[0];
                for (int val: list){
                    if (val < min)
                        min = val;
                    }
                cout << "The smallest number of the list : " << min << endl;
                }
            else
                cout << "[] the list is empty";
            
            }
        else if (choise=='l' || choise=='L'){
            if (list.size()!=0){
                int max = list[0];
                for (int val: list){
                    if (max < max)
                        max = val;
                    }
                cout << "The largest number of the list : " << max << endl;
                }
            else
                cout << "[] the list is empty" << endl;
            
            
            }
        else if (choise=='q' || choise=='Q'){
            cout << "Goodbye" << endl;
            
            } 
        else 
         cout << "Entered choise is not coreect  ";
            
    
    
    
    
    
    
    }while(choise!='q' && choise!='Q');
    
    cout << endl;
    return 0;
    }
