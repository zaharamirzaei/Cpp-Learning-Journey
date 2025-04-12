# Section 8 Challenge: Statements and Operators  
**Currency Conversion Using Arithmetic Operators**  

## 🎯 Objective  
Demonstrate understanding of:  
- Arithmetic operators (`/`, `%`, `-`, `*`)  
- Compound assignment expressions  
- Sequential program execution  

## 🔍 Key Operators Used  
| Operator | Purpose | Example in Code |
|----------|---------|-----------------|
| `/`      | Integer division | `dollar = cent_num/c_dollar` |
| `-`      | Subtraction | `cent_num-(dollar*100)` |
| `*`      | Multiplication | `squarters*25` |
| `=`      | Assignment | `int dollar = ...` |
| `==`     | Comparison | `(cent_num==0)` |

## 🧠 Core Concepts  
1. **Expression Evaluation**:  
   ```cpp 
   int squarters = (cent_num-(dollar*100))/25; // Evaluates inner () first
   ```
2. **Operator Precedence**: Multiplication before subtraction  
3. **Boolean Output**: `boolalpha` formatting for `true`/`false`  

## 🚀 How to Run  
```bash
g++ currency_conversion_operators.cpp -o currency_converter
./currency_converter
```

## 📸 Sample Output  
```
please enter the number of cents : 287
number of cent is zero : false
dollars : 2    // 287 / 100
squarters : 3  // 87 / 25
dimes : 1      // 12 / 10
nickel : 0     // 2 / 5
penny : 2      // remainder
```

## 💡 Optimized Alternative  
Using modulo (`%`) for cleaner remainder handling:  
```cpp
int remainder = cent_num % c_dollar;  // Replaces cent_num-(dollar*100)
```

## 📝 Exercise Ideas  
1. Add validation with `if` statements  
2. Implement loop for continuous input  
3. Format output as "$2.87"  

