# 42 C++ Modules (00–04)

> Object-Oriented Programming fundamentals in **C++98**.

---

## 📋 Rules

| Rule | Detail |
|---|---|
| Standard | **C++98** strict (`-std=c++98`) |
| Compiler | `c++ -Wall -Wextra -Werror` |
| Forbidden | `using namespace`, `friend`, `printf`, `alloc`, `free` |
| STL | **Not allowed** until Module 08 (except provided test files) |
| Headers | Include guards required, no function implementations (except templates) |
| OCF | Required from **Module 02** onward |

---

## 📚 Modules

| Module | Topic | Exercises | Details |
|---|---|---|---|
| **[c00](c00/)** | Namespaces, Classes, I/O Streams, Static, Const | 3 | [→ README](c00/README.md) |
| **[c01](c01/)** | Memory Allocation, References, Pointers to Members, Filestreams | 7 | [→ README](c01/README.md) |
| **[c02](c02/)** | Operator Overloading, Orthodox Canonical Form, Fixed-Point | 4 | [→ README](c02/README.md) |
| **[c03](c03/)** | Inheritance, Diamond Problem, Virtual Inheritance | 4 | [→ README](c03/README.md) |
| **[c04](c04/)** | Polymorphism, Abstract Classes, Interfaces | 4 | [→ README](c04/README.md) |

**Total: 22 exercises**

---

## 🗺️ Concept Progression

```
c00: Classes & I/O
 │
c01: Memory & References
 │
c02: Operators & OCF ─────── Fixed-point arithmetic
 │
c03: Inheritance ─────────── Diamond problem (virtual inheritance)
 │
c04: Polymorphism ────────── Abstract classes → Interfaces → Factory pattern
```

---

## 🔧 Quick Start

```bash
# Build any exercise
cd c00/ex00 && make

# Rebuild from scratch
make re

# Clean
make fclean
```

---

## 📁 Structure

```
├── c00/
│   ├── ex00/   Megaphone          (uppercase CLI args)
│   ├── ex01/   PhoneBook           (8-contact phonebook)
│   └── ex02/   Account             (static members, timestamps)
├── c01/
│   ├── ex00/   Zombie              (stack vs heap)
│   ├── ex01/   ZombieHorde         (array allocation)
│   ├── ex02/   HI THIS IS BRAIN    (pointer vs reference)
│   ├── ex03/   Unnecessary Violence (ref vs ptr in classes)
│   ├── ex04/   Sed is for Losers   (file string replace)
│   ├── ex05/   Harl 2.0            (ptr to member functions)
│   └── ex06/   Harl Filter         (switch fallthrough)
├── c02/
│   ├── ex00/   Fixed (basic)       (OCF + raw bits)
│   ├── ex01/   Fixed (useful)      (int/float constructors)
│   ├── ex02/   Fixed (operators)   (full operator set)
│   └── ex03/   BSP                 (point-in-triangle)
├── c03/
│   ├── ex00/   ClapTrap            (base class)
│   ├── ex01/   + ScavTrap          (single inheritance)
│   ├── ex02/   + FragTrap          (multiple derived)
│   └── ex03/   DiamondTrap         (diamond inheritance)
└── c04/
    ├── ex00/   Animal/Dog/Cat      (virtual functions)
    ├── ex01/   + Brain             (deep copy)
    ├── ex02/   Abstract Animal     (pure virtual)
    └── ex03/   Materia System      (interfaces + factory)
```
