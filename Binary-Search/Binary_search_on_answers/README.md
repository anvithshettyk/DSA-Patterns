# Binary Search on the Answer

## 📖 Description

Binary Search on the Answer is an optimization technique where the answer is searched within a range of possible values instead of searching directly in the array.

It is applicable when:
- The answer lies within a known range.
- A feasibility function can determine whether a candidate answer is valid.
- If a value is feasible, then all larger (or smaller) values are also feasible (monotonic property).

---

## 💡 Key Idea

1. Define the search space for the answer.
2. Pick the middle value.
3. Check if the current value is feasible.
4. If feasible, search for a better (smaller/larger) answer.
5. Otherwise, search in the opposite half.

---

## ⏱ Complexity

| Operation | Complexity |
|-----------|-----------:|
| Time | O(n log R) |
| Space | O(1) |

> **R** = Range of possible answers.

---

## 📄 Problems Solved

| Problem | Difficulty | Status |
|---------|-----------|--------|
| 1482. Minimum Number of Days to Make m Bouquets | Medium | ✅ |

---

## 📚 Recommended Problems

- 875. Koko Eating Bananas
- 1011. Capacity To Ship Packages Within D Days
- 1283. Find the Smallest Divisor Given a Threshold
- 1552. Magnetic Force Between Two Balls
- 2187. Minimum Time to Complete Trips