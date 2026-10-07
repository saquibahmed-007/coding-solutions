# Pointers in C

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array, of size $n$, reverse it.

Example: If array, $arr = [1, 2, 3, 4, 5]$, after reversing it, the array should be, $arr = [5, 4, 3, 2, 1]$.

**Input Format**

The first line contains an integer, $n$, denoting the size of the array.
The next line contains $n$ space-separated integers denoting the elements of the array.

**Constraints**

$ 1 \le n \le 1000$  
$ 1 \le arr_i \le 1000$, where $arr_i$ is the $i^{th}$ element of the array.

**Output Format**

The output is handled by the code given in the editor, which would print the array.

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-07T07:55:07.080Z  

```c
#include <stdio.h>

void update(int *a, int *b) {
    int sum = *a + *b;
    int difference = *a - *b;

    if (difference < 0) {
        difference = -difference;
    }

    *a = sum;
    *b = difference;
}

int main() {
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    update(&a, &b);

    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/reverse-array-c/problem)