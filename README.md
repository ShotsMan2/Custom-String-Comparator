# Custom String Comparator

This project implements a lexicographical comparison algorithm in C, replicating the behavior of `strcmp` without using the standard library function.

## ⚙️ Logic

1.  **Input:** Reads two strings (`str1` and `str2`).
2.  **Traversal:**
    * Loops through both strings simultaneously as long as characters are identical: `str1[i] == str2[i]`.
    * Stops at the first mismatch or when the end of the string (`\0`) is reached.
3.  **Comparison:**
    * Checks the ASCII value of the characters at the stopping index.
    * **If `str1[i] > str2[i]`:** str1 is Greater (comes after in dictionary).
    * **If `str2[i] > str1[i]`:** str1 is Smaller (comes before in dictionary).
    * **Else:** Strings are Equal.

## 🚀 Example Output

Based on Question 4:

**Example 1:**
```text
1. Metni (str1) giriniz: ali
2. Metni (str2) giriniz: alc

--- Karsilastirma Sonucu ---
Sonuc: str1 (ali), str2'den BUYUKTUR.
