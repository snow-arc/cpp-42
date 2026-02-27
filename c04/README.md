# Module 04 — Subtype Polymorphism, Abstract Classes, Interfaces

> Virtual functions, pure virtual functions, and interface design.

---

## Exercises

### ex00 — Polymorphism 🐾

Base `Animal` class with `virtual makeSound()` and `virtual ~Animal()`:

| Class | Type | Sound |
|---|---|---|
| `Animal` | `""` | `...` |
| `Dog` | `"Dog"` | `Woof! Woof!` |
| `Cat` | `"Cat"` | `Meow! Meow!` |

**The "Wrong" test:** `WrongAnimal` / `WrongCat` have **non-virtual** `makeSound()`:
```cpp
const WrongAnimal* w = new WrongCat();
w->makeSound();  // Prints "Wrong animal sound..." — NOT "Meow!"
```
This demonstrates **why `virtual` matters** — without it, the base class method is called.

**Concepts:** Virtual functions, virtual destructors, polymorphic behavior via base pointers.

---

### ex01 — I Don't Want to Set the World on Fire 🧠

Adds a `Brain` class (`std::string ideas[100]`) as a private member of `Dog` and `Cat`:

```cpp
class Dog : public Animal {
private:
    Brain *_brain;  // Heap-allocated
};
```

**Deep copy is mandatory:**
- Copy constructor: `new Brain(*src._brain)`
- Copy assignment: `delete _brain; _brain = new Brain(*rhs._brain)`
- Destructor: `delete _brain`

**Test:** Create an array of `Animal*` (half Dog, half Cat), delete all, verify no leaks.

**Concepts:** Deep copy vs shallow copy, `new`/`delete` in OCF.

---

### ex02 — Abstract Class 🚫

`Animal` becomes **abstract** — cannot be instantiated:

```cpp
virtual void makeSound() const = 0;  // Pure virtual
```

- `Animal a;` → **compile error** ✅
- `Dog` and `Cat` still work normally since they implement `makeSound()`
- Everything else identical to ex01

**Concepts:** Pure virtual functions, abstract classes.

---

### ex03 — Interface & Recap 🎮

A complete **interface-based** design with Materia system:

**Interfaces** (pure abstract classes):
| Interface | Methods |
|---|---|
| `ICharacter` | `getName`, `equip`, `unequip`, `use` |
| `IMateriaSource` | `learnMateria`, `createMateria` |

**Abstract class:**
| Class | Purpose |
|---|---|
| `AMateria` | Base for all materia, has `type`, `clone()`, `use()` |

**Concrete classes:**
| Class | Type | Effect |
|---|---|---|
| `Ice` | `"ice"` | `* shoots an ice bolt at <name> *` |
| `Cure` | `"cure"` | `* heals <name>'s wounds *` |
| `Character` | — | 4 inventory slots, stores unequipped materia on floor |
| `MateriaSource` | — | Learns up to 4 templates, creates clones by type |

**Memory management:**
- `unequip()` does NOT delete — materia goes to a floor array (cleaned in destructor)
- `MateriaSource::learnMateria()` takes ownership — deletes overflow materia
- `Character` copy = deep copy (clone all equipped materia)

**Concepts:** Interfaces, abstract classes, factory pattern, ownership semantics.

---

## Compilation

```bash
cd ex00 && make      # ./animal
cd ex01 && make      # ./animal
cd ex02 && make      # ./animal
cd ex03 && make      # ./materia
```

All exercises compile with:
```
c++ -Wall -Wextra -Werror -std=c++98
```
