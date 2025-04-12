// section11
// challenge
#include <iostream>
using namespace std;
#include <vector>
#include <cctype>
#include <cstring>
#include <string>

void print_options(vector <int> &numbers);
void print(vector <int> &numbers);
void add_num(vector <int> &numbers);
void mean(vector <int> &numbers);
void smallest_num(vector <int> &numbers);
void largest_num(vector <int> &numbers);
void quit();
void incorrect(vector <int> &numbers);


int main(){
    vector <int> numbers{};
    print_options(numbers);
     
    cout << endl;
    return 0;
    }
//function for print the options
void print_options(vector <int> &numbers){
    char selection{};
    cout << "P- Print numbers" << endl;
    cout << "A- Add a number" << endl;
    cout << "M- Display the mean of numbers" << endl;
    cout << "S- Display the smallest number" << endl;
    cout << "L- Display the largest number" << endl;
    cout << "Q- Quit" << endl;
    cout <<  "\nChoose one : "<< endl;
    cin >> selection;
    
    if (selection=='p' || selection=='P')
        print(numbers);
    else if (selection=='a' || selection=='A')
        add_num(numbers);
    else if (selection=='m' || selection=='M')
        mean(numbers);
    else if (selection=='s' || selection=='S')
        smallest_num(numbers);
    else if (selection=='l'|| selection=='L')
        largest_num(numbers);
    else if (selection=='q' || selection=='Q')
        quit();
    else
        incorrect(numbers);
    }
 
//function for print the numbers 
void print(vector <int> &numbers){
    if (numbers.size()!=0){
        cout << "[ ";
        for (int val:numbers)
            cout << val << " ";
        cout << "]" <<endl;      
                }
    else
        cout << "[] the list is empty"<< endl;
    print_options(numbers);  
    
    }
	
//function for adding number to list   
void add_num(vector <int> &numbers){
    int num{};
    cout << "Enter a number to add list : ";
    cin >> num;
    numbers.push_back(num);
    cout << num << " added"<< endl;
    print_options(numbers);
    }

//function for caculating mean of the numbers of list
void mean(vector <int> &numbers){
    if (numbers.size()!=0){
        float mean{};
        float sum{};
        for (int val: numbers)
            sum +=val;
        mean= sum/numbers.size();
        cout << "The mean of numbers is : "<< mean <<endl;
        }
    else
        cout << "[] the list is empty";
    print_options(numbers);
    }

//function for smallest number    
void smallest_num(vector <int> &numbers){
    if (numbers.size()!=0){
        int min = numbers[0];
        for (int val: numbers){
            if (val < min)
                min = val;
            }
        cout << "The smallest number of the list : " << min << endl;
        }
    else
        cout << "[] the list is empty";
    print_options(numbers);
    }

//function for largest number  
void largest_num(vector <int> &numbers){
    if (numbers.size()!=0){
        int max = numbers[0];
        for (int val: numbers){
            if (val > max)
                max = val;
            }
        cout << "The largest number of the list : " << max << endl;
        }
    else
        cout << "[] the list is empty" << endl;
    print_options(numbers);
    }
//quit function 
void quit(){
    cout << "Goodbye" << endl;
    
    }
	
//incorrect letter
void incorrect(vector <int> &numbers){
    cout << "Enter a correct letter" << endl;
    print_options(numbers);
    }
