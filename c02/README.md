# Module 02 — Ad-hoc Polymorphism, Operator Overloading, Orthodox Canonical Form

> Building a fixed-point number class from scratch, step by step.

---

## Orthodox Canonical Form (OCF)

From this module onward, **every class** must implement:

```cpp
Class();                              // Default constructor
Class(const Class &src);              // Copy constructor
Class &operator=(const Class &rhs);   // Copy assignment operator
~Class();                             // Destructor
```

---

## Exercises

### ex00 — My First Class in Orthodox Canonical Form 📐

A barebones `Fixed` class with:

| Member | Type | Description |
|---|---|---|
| `_value` | `int` | Raw fixed-point value |
| `_bits` | `static const int = 8` | Fractional bits |
| `getRawBits()` | getter | Prints a message + returns `_value` |
| `setRawBits(int)` | setter | Sets `_value` |

All constructors/destructor print messages to verify OCF.

**Concepts:** OCF, `static const`, getter/setter.

---

### ex01 — Towards a More Useful Fixed-Point Class 🔢

Adds **int and float constructors** + conversion methods:

| Method | Formula |
|---|---|
| `Fixed(int n)` | `_value = n << _bits` |
| `Fixed(float n)` | `_value = roundf(n * (1 << _bits))` |
| `toFloat()` | `_value / (float)(1 << _bits)` |
| `toInt()` | `_value >> _bits` |
| `operator<<` | Outputs `toFloat()` |

**Concepts:** Fixed-point arithmetic, `roundf`, `operator<<` overload.

---

### ex02 — Now We're Talking 🧮

Adds a **full set of operators**:

| Category | Operators |
|---|---|
| Comparison | `>` `<` `>=` `<=` `==` `!=` |
| Arithmetic | `+` `-` `*` `/` |
| Increment/Decrement | `++a` `a++` `--a` `a--` |
| Static | `min(a, b)` `max(a, b)` (both const and non-const overloads) |

- Multiplication: `(long long)a * b >> bits` (prevents overflow)
- Division: `((long long)a << bits) / b`
- Pre-increment returns reference, post-increment returns copy

**Concepts:** Operator overloading, `long long` for overflow safety.

---

### ex03 — BSP (Binary Space Partitioning) 📐

Determines if a **point is inside a triangle** using cross products.

```cpp
bool bsp(Point const a, Point const b, Point const c, Point const point);
```

| Case | Returns |
|---|---|
| Point strictly inside | `true` |
| Point on edge | `false` |
| Point on vertex | `false` |
| Point outside | `false` |

**`Point` class:** Has `const Fixed _x, _y` — copy assignment does nothing (can't reassign const members).

**Concepts:** Const members, cross product geometry, Fixed-point math in practice.

---

## Compilation

```bash
cd ex00 && make      # ./fixed
cd ex01 && make      # ./fixed
cd ex02 && make      # ./fixed
cd ex03 && make      # ./bsp
```

All exercises compile with:
```
c++ -Wall -Wextra -Werror -std=c++98
```
