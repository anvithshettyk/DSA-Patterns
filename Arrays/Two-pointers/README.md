# Two Pointers

## 📌 What is the Two Pointers Pattern?

The Two Pointers technique uses two indices (or pointers) to traverse an array or string efficiently. Instead of using nested loops, two pointers often reduce the time complexity from **O(n²)** to **O(n)**.

---

# 🧠 When Should You Think of Two Pointers?

Use this pattern when:

- The array is **sorted**
- You need to find a **pair** or **triplet**
- The problem asks for **duplicates removal**
- You need to compare elements from **both ends**
- The problem involves **palindromes**
- You need to merge or partition arrays

---

# 🚀 Common Approach

1. Sort the array (if required).
2. Initialize two pointers.
3. Compare values.
4. Move one pointer based on the condition.
5. Continue until the pointers meet.

---

# 📊 Complexity

| Operation | Complexity |
|-----------|------------|
| Time | Usually **O(n)** or **O(n²)** |
| Space | Usually **O(1)** |

---

# ⚠️ Common Mistakes

- Forgetting to sort the array when needed.
- Not skipping duplicate values.
- Moving the wrong pointer.
- Using nested loops instead of two pointers.

---

# 📝 Problems Solved

| Problem | Difficulty  | Status |
|----------|------------|-----   |
| 15. 3Sum | Medium     | ✅    |
| 18. 4Sum | Medium     | ✅     |

---

# 📚 Recommended Problems

- 11. Container With Most Water
- 26. Remove Duplicates from Sorted Array
- 27. Remove Element
- 125. Valid Palindrome
- 167. Two Sum II
- 283. Move Zeroes
- 344. Reverse String
- 392. Is Subsequence
- 977. Squares of a Sorted Array

---

# 💡 Key Takeaway

Whenever you see:

- Sorted arrays
- Pair or triplet problems
- Opposite-end traversal
- Duplicate removal

👉 Think **Two Pointers** before trying brute force.