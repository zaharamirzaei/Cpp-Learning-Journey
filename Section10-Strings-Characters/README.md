# Section 10 Challenge: Characters and Strings  
**Simple Substitution Cipher**  

## 🎯 Objective  
Implement a character-level substitution cipher to demonstrate:  
- String manipulation with `<string>`  
- Character encoding/decoding  
- Use of `getline()` for input  

## 🔑 Cipher Algorithm  
```cpp
string asli  = "abcdef...XYZ";  // Original alphabet
string ramz  = "XZNLWEB...asr"; // Cipher alphabet (mapped 1:1)
// Encryption: Replace each character with its mapped counterpart
```

## 🛠️ Key Features  
- **Case Preservation**: Maintains upper/lower case  
- **Non-alphabetic Handling**: Leaves spaces/symbols unchanged  
- **Efficient Lookup**: Uses `string::find()` for O(n) complexity  

## 🚀 How to Run  
```bash
g++ simple_substitution_cipher.cpp -o cipher
./cipher
```

## 📸 Sample Execution  
```
Enter your message to encrypt : Hello World!
encrypted message : Bgjjr Vrkjw!
decrypting message ...
Hello World!
```

## 💡 Code Breakdown  
1. **Input Handling**:  
   ```cpp
   getline(cin, org_message);  // Captures spaces
   ```
2. **Encryption Core**:  
   ```cpp
   position = asli.find(c);  // Find character position
   ramz_message += ramz[position];  // Substitute
   ```
3. **Edge Case Handling**:  
   ```cpp
   if (position != string::npos) // Only modify found chars
   ```

## 📝 Potential Enhancements  
1. Add proper decryption logic (reverse mapping)  
2. Implement file I/O for message storage  
3. Create a cipher key generator  
