# Program 3 – Sorting Contest (Bubble Sort with Vector)

## Overview
In this project you will simulate the Linux `sort` command by writing your own sorting program using the **Bubble Sort** algorithm and `std::vector<int>`.  
You will create two small programs:

1. **`generate.cpp`** – generates random numbers into a file (`numbers.dat`)
2. **`mysort.cpp`** – reads those numbers, sorts them using Bubble Sort, and writes them to an output file (`mysort.out`)

You will test both programs using the provided **`sortrace.sh`** shell script, which compares your output and timing against the system `sort` command.

---

## Program Descriptions

### 🧮 `generate.cpp`
- **Purpose:** Create a file called `numbers.dat` containing random integers.  
- **Usage:**
  ```bash
  ./generate COUNT MIN MAX
