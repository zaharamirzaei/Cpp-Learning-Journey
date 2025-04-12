# Section 9 Challenge: Controlling Program Flow  
**Interactive Number List Manager**  

## 🎯 Objective  
Demonstrate mastery of:  
- **Control structures**: `do-while`, `if-else`  
- **Loop management**: User-controlled program flow  
- **Data processing**: Real-time list operations  

## 🛠️ Core Features  
```cpp
do {
    // Menu system
    if (choice == 'A') { /* Add number */ }
    else if (choice == 'P') { /* Print list */ }
    // ... other options ...
} while (choice != 'Q');  // Loop until quit
```

## 📋 Menu Options  
| Command | Action | Key Techniques |  
|---------|--------|----------------|  
| **P** | Print numbers | Range-based `for` loop |  
| **A** | Add number | `vector.push_back()` |  
| **M** | Calculate mean | Accumulator pattern |  
| **S** | Find smallest | Comparison in loop |  
| **L** | Find largest | Comparison in loop |  
| **Q** | Quit | Loop termination |  

## 🚀 How to Run  
```bash
g++ interactive_number_manager.cpp -o number_manager
./number_manager
```

## 📸 Sample Session  
```
P:Print numbers  
A:Add a number  
M:Display mean  
S:Display smallest  
L:Display largest  
Q:Quit  

Please enter your choice: A
Enter a number to add: 42
42 added

Choice: P
[ 42 ]

Choice: A
Enter a number to add: 15
15 added

Choice: M
The mean is: 28.5

Choice: Q
Goodbye
```

## 💡 Key Learning Points  
1. **Defensive Programming**: Checks for empty list (`list.size()!=0`)  
2. **Loop Control**: `do-while` guarantees at least one execution  
3. **Modular Design**: Each operation isolated in `if-else` blocks  

## 🔍 Found a Bug?  
In the largest number check:  
```cpp
if (max < max)  // Should be if (val > max)
```
*(Great opportunity to practice debugging!)*  

## 📝 Suggested Improvements  
1. Add input validation (numbers only)  
2. Implement case-insensitive comparisons  
3. Add "Clear list" functionality  
