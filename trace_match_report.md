
# Trace-Match Report – Hash Table

**Name:** Yash Shendurkar  
**PRN:** 202501100067  
**Project:** Hash Table Implementation

## 1. Personalization Details

- PRN: 202501100067
- Last four digits (S): 0067
- PRN mod 3: 1
- Domain Scenario: Student Marks
- Hash Function: Mid-Square Method
- Collision Handling: Separate Chaining
- Hash Table Size: 37 (reused from Question 1)

## 2. Dataset Used

The following 12 values were reused from Question 1:

14, 81, 51, 21, 88, 58, 28, 95, 65, 35, 5, 72

**Note:** This is a reused Question 1 dataset, not the 20-value dataset specified independently in Question 2.

## 3. Hash Function

The Mid-Square Hash Function is:

1. Calculate the square of the key.
2. Convert the square into a string.
3. Extract the middle two digits after padding to at least four digits.
4. Calculate the remainder using table size 37.

Formula:

h(k) = middle two digits of k² mod 37

## 4. Hand-Predicted Hash Values

| Key | Predicted Index |
|---|---:|
| 14 | 19 |
| 81 | 19 |
| 51 | 23 |
| 21 | 7 |
| 88 | 0 |
| 58 | 36 |
| 28 | 4 |
| 95 | 2 |
| 65 | 22 |
| 35 | 22 |
| 5 | 2 |
| 72 | 18 |

## 5. Hand-Predicted Final Hash Table

| Index | Expected Chain |
|---|---|
| 0 | 88 |
| 2 | 95 -> 5 |
| 4 | 28 |
| 7 | 21 |
| 18 | 72 |
| 19 | 14 -> 81 |
| 22 | 65 -> 35 |
| 23 | 51 |
| 36 | 58 |

All other buckets are expected to be empty.

## 6. Actual Console Output

Paste the actual console output captured after running the final C++ program here.

## 7. Prediction vs Actual Comparison

| Parameter | Predicted | Actual |
|---|---:|---:|
| Total elements | 12 | Fill after running |
| Total buckets | 37 | Fill after running |
| Occupied buckets | 9 | Fill after running |
| Collision buckets | 3 | Fill after running |
| Total collisions | 3 | Fill after running |
| Successful searches | 12 | Fill after running |

## 8. Mismatch and Explanation

Compare the predicted table with the actual console output. If both match, write:

"The predicted hash indices and final bucket chains matched the actual program output. No mismatch was observed."

If any mismatch occurs, mention the affected key or bucket and explain the reason.

## 9. Conclusion

The hash table was implemented using the Mid-Square Hash Function and Separate Chaining. The final verification checks the inserted elements and successful searches. The predicted bucket arrangement was compared with the actual program output.
