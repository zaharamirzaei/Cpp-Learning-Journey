# Section 7 Challenge: Vectors and 2D Vectors  
**C++ Vector Operations Demonstration**  

## 🎯 Objective  
Practice fundamental vector operations and understand how 2D vectors work in C++.

## 📋 Key Concepts Demonstrated  
- Creating and manipulating `std::vector`  
- Vector indexing with `.at()`  
- Nested vectors (2D vectors)  
- Value vs. reference behavior in vectors  

## 🧠 Important Observations  
1. Changing `vector1` after adding it to `vector_2d` doesn't update `vector_2d`  
2. Vectors store copies of values (not references) when pushed to other vectors  

## 🚀 How to Run  
```bash
g++ section7_vector_challenge.cpp -o vector_demo
./vector_demo
```

## 📸 Expected Output  
```
vector1 first element: 10
vector1 second element: 20
size of vector1 is: 2

vector2 first element: 100
vector2 second element: 200
size of vector2 is: 2

vector2D 0-0 element: 10
vector2D 0-1 element: 20
vector2D 1-0 element: 100
vector2D 1-1 element: 200
size of vector2D is: 2

first element of vector 0 has changed to 1000
vector2D 0-0 element: 10  # Notice this didn't change!
vector2D 0-1 element: 20
vector2D 1-0 element: 100
vector2D 1-1 element: 200

vector1 first element: 1000  # Original vector changed
vector1 second element: 20
```

## 💡 Learning Takeaways  
- Vectors provide bounds-checked access with `.at()`  
- `push_back()` makes copies of vectors when storing in 2D vectors  
- Understanding value semantics vs. reference semantics  

## 📝 Code Structure  
```cpp
vector<int> vector1;          // 1D vector
vector<vector<int>> vector_2d; // 2D vector
vector1.at(0) = 1000;         // Element modification
```
