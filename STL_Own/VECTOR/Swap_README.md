# C++ STL – Vector Swap

A beginner-friendly example of the C++ STL `swap()` function using vectors.

## 📚 Concepts Covered

- Vector Declaration
- `push_back()`
- Vector Traversal using `for` loop
- `swap()` Function
- Swapping Two Vectors
- Swapping Three Vectors using Two Swap Operations

## 📂 Examples

### 01. Swapping Two Vectors

Two vectors are swapped using:

```cpp
swap(v1, v2);
```

**Before Swapping:**

```text
v1 = 10 20 30
v2 = 1 2 3
```

**After Swapping:**

```text
v1 = 1 2 3
v2 = 10 20 30
```

### 02. Swapping Three Vectors

Three vectors are used with two `swap()` operations:

```cpp
swap(v1, v3);
swap(v2, v1);
```

**Before Swapping:**

```text
v1 = 10 20 30
v2 = 1 2 3
v3 = 22 23 24
```

**After Swapping:**

```text
v1 = 1 2 3
v2 = 22 23 24
v3 = 10 20 30
```

## ⚙️ STL Function

| Function | Description |
|---|---|
| `swap(v1, v2)` | Exchanges the contents of two vectors |
| `push_back(x)` | Adds an element at the end |
| `size()` | Returns the number of elements |

## ⏱️ Time Complexity

For standard vectors with the default allocator:

- `swap(v1, v2)` → O(1)

## 🎯 Learning Goal

Understand how to swap vector contents using the C++ STL `swap()` function and how multiple swap operations affect different vectors.

## 📁 File Structure

```text
Vector/
│
├── vector_swap.cpp
└── README.md
```

---

**Language:** C++

**Topic:** Standard Template Library (STL)

**Purpose:** Competitive Programming & ICPC Preparation 🚀
