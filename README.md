# CGPA-GPA_Calculator
A simple C++ program to calculate GPA and CGPA based on course grades and credit hours. This project demonstrates the use of functions, pass-by-reference, loops, and input validation.
# 🎓 GPA & CGPA Calculator (C++)

This is a simple C++ program that calculates a student's **GPA (Grade Point Average)** and **CGPA (Cumulative Grade Point Average)** based on course grades and credit hours.

---

## 🚀 Features
- Takes multiple course inputs
- Supports standard grading system (A+ to F)
- Calculates GPA for the current semester
- Calculates CGPA using previous CGPA and semester number
- Input validation for:
  - Grades
  - Semester range (1–8)
  - CGPA limits (0.0 – 4.0)
- Uses **functions with pass-by-reference**

---

## 🧠 Concepts Used
- Functions
- Pass by reference
- Loops (for, while)
- Conditional statements
- Input validation
- Basic arithmetic operations

---

## 📥 How It Works
1. Enter the number of courses  
2. For each course:
   - Enter credit hours  
   - Enter grade (A+, A, A-, ..., F)  
3. Program calculates GPA  
4. Enter:
   - Semester number  
   - Previous CGPA  
5. Final CGPA is calculated and displayed  

---

## 🧮 CGPA Formula Used

CGPA = (Previous CGPA × (Semester - 1) + Current GPA) / Semester


---

## ▶️ How to Run
1. Copy the code into a `.cpp` file  
2. Compile using a C++ compiler (e.g., g++)  

g++ main.cpp -o gpa

3. Run the program  

./gpa


---

## 📌 Example

Enter number of courses: 3
Enter credit hours for course 1: 3
Enter grade: A

...

CGPA: 3.45


---

## 📚 Learning Outcome
This project helps in understanding how to:
- Break problems into functions  
- Use references to modify variables  
- Handle user input safely  
- Implement real-world logic in C++  

---

## 🙌 Author
Qanita Adnan
