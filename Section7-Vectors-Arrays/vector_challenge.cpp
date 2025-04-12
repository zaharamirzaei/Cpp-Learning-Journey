// section7
// challenge
#include <iostream>
using namespace std;
#include <vector>

int main(){
	vector <int> vector1;
	vector <int> vector2;
	vector1.push_back(10);
	vector1.push_back(20);
	cout << "vector1 first element: "<< vector1.at(0)<<endl;
	cout << "vector1 second element: "<< vector1.at(1)<<endl;
	cout << "size of vector1 is: "<< vector1.size()<<endl;
	
	vector2.push_back(100);
	vector2.push_back(200);
	cout << "vector2 first element: "<< vector2.at(0)<<endl;
	cout << "vector2 second element: "<< vector2.at(1)<<endl;
	cout << "size of vector2 is: "<< vector2.size()<<endl;
	
	vector <vector<int>> vector_2d;
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	cout << "vector2D 0-0 element: "<< vector_2d.at(0).at(0)<<endl;
	cout << "vector2D 0-1 element: "<< vector_2d.at(0).at(1)<<endl;
	cout << "vector2D 1-0 element: "<< vector_2d.at(1).at(0)<<endl;
	cout << "vector2D 1-1 element: "<< vector_2d.at(1).at(1)<<endl;
	cout << "size of vector2D is: "<< vector_2d.size()<<endl;
	
	
	vector1.at(0)=1000;
	cout << "first element of vector 0 has changed to 1000 "<<endl;
	cout << "vector2D 0-0 element: "<< vector_2d.at(0).at(0)<<endl;
	cout << "vector2D 0-1 element: "<< vector_2d.at(0).at(1)<<endl;
	cout << "vector2D 1-0 element: "<< vector_2d.at(1).at(0)<<endl;
	cout << "vector2D 1-1 element: "<< vector_2d.at(1).at(1)<<endl;
	
	cout << "vector1 first element: "<< vector1.at(0)<<endl;
	cout << "vector1 second element: "<< vector1.at(1)<<endl;
	return 0;
}
