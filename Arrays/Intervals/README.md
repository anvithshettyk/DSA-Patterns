# Interval Merging

## 📌 What is the Interval Merging Pattern?

The Interval Merging pattern is used to process ranges or intervals that may overlap.

The general approach is:

1. Sort the intervals by their starting point.
2. Compare each interval with the last merged interval.
3. If they overlap, merge them.
4. Otherwise, add the interval as a new range.

---

## 🧠 When Should You Think of This Pattern?

Use this pattern when the problem involves:

- Overlapping intervals
- Meeting schedules
- Calendar events
- Time ranges
- Range coverage
- Free time between intervals

---

## 🚀 General Algorithm

1. Sort intervals by start time.
2. Create an empty answer list.
3. Traverse all intervals.
4. Merge overlapping intervals.
5. Perform the required calculation on the merged intervals.

---

## 📊 Complexity

| Operation | Complexity |
|-----------|------------|
| Time | O(n log n) |
| Space | O(n) |

---

## ⚠️ Common Mistakes

- Forgetting to sort before merging.
- Incorrect overlap condition.
- Updating the wrong interval after merging.

---

## 📝 Problems Solved

| Problem | Difficulty | Status |
|----------|------------|--------|
| 56. Merge Intervals | Medium | ✅ |
| 2848. Number of Points That Intersect With Cars | Easy | ✅ |
| 3169. Count Days Without Meetings | Medium | ✅ |

---

## 📚 Recommended Problems

- 57. Insert Interval
- 252. Meeting Rooms
- 253. Meeting Rooms II
- 435. Non-overlapping Intervals
- 452. Minimum Number of Arrows to Burst Balloons
- 986. Interval List Intersections

---

## 💡 Key Takeaway

Whenever you see intervals or ranges, think:

**Sort → Merge → Process**