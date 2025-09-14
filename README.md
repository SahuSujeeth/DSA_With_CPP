# DSA With C++

This repository contains my practice codes for *Data Structures and Algorithms (DSA)* using C++.

---

## 📘 Topics Learned in Recursion

### 1. Introduction to Recursion
- Recursion means a function calling itself.
- Every recursion needs a *base condition* to stop infinite calls.
- Example: factorial, fibonacci.

### 2. Recursion Tree
- Helps to visualize how recursive calls expand.
- Each node represents a function call.
- Useful for analyzing *time complexity*.

### 3. Parameterized vs Functional Recursion
- *Parameterized Recursion* → Carry extra parameters in recursive calls (e.g., sum of numbers).
- *Functional Recursion* → Return values back and combine them (e.g., factorial).

### 4. Multiple Recursion Calls
- Functions can call themselves *multiple times*.
- Example: Fibonacci → f(n) = f(n-1) + f(n-2).

### 5. Stack Overflow
- Happens if recursion goes too deep without a proper base condition.
- System stack memory gets exhausted.

### 6. Base Condition
- Crucial for stopping recursion.
- Without it → Infinite recursion + stack overflow.
- Example: if (n == 0) return;

---

## 📂 Folders
- *Basic_Of_Recursion* → Contains recursion-related practice codes (factorial, fibonacci, etc.)

---

## 🚀 How to Run
```
g++ filename.cpp
./a

```