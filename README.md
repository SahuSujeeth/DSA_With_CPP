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

## 📘 Topics Learned in Hashing 

Today I focused on **Hashing** and explored different techniques and their complexities.

## 🔑 What I Learned
- **Hashing with Integers & Characters**
  - Started with brute force approach.
  - Moved to efficient solutions using `map` and `unordered_map`.

- **Array Size for Hashing**
  - In `main` function:
    - For **integers** → array size up to **10⁶**.
  - Using **global variables**:
    - For **integers** → array size up to **10⁷**.
    - For **boolean arrays** → size up to **10⁸ – 10⁹**.

- **Time Complexity**
  - **Best & Average Case:** `O(1)`
  - **Worst Case (Collision):** `O(N)`

- **Key Insights**
  - Importance of choosing correct data structures (`map` vs `unordered_map`).
  - Trade-offs between brute force and hashing.
  - Role of collisions in performance drop.

---

📍 With this, I built a strong foundation in **Hashing** for both integers and characters.
These are Basics undrstanding of the HASHING....I have learned..


## 📂 Folders
- *Learn_Basic_Hashing* → Contains Hashing Array-related practice codes (Integer Hashing , Char Hashing, etc.)

This is the day 13 of 100 days consistency for the DSA all the basics are completed but i need to revise once...
So these two days i would like to revise that and then from the 21st Sept i need to go head... 

## What i'he to revise 
- *Things to know in cpp*
- *Building up logical thinking* -> 22 Patterns
- *STL*
- *Know Basic Maths*
- *Recursion*
- *Hashing*

These are target i need to revise in 2 days... *TARGET 20TH SEPT*