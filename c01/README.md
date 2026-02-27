# Module 01 — Memory Allocation, Pointers to Members, References, switch

> Understanding memory, pointers vs references, and filestream basics.

---

## Exercises

### ex00 — BraiiiiiiinnnzzzZ 🧟

Demonstrates the difference between **stack** and **heap** allocation.

| Function | Allocation | Lifetime |
|---|---|---|
| `newZombie(name)` | Heap (`new`) | Until `delete` |
| `randomChump(name)` | Stack | End of function scope |

**Concepts:** `new` / `delete`, stack vs heap lifetime.

---

### ex01 — Moar brainz! 🧟🧟🧟

Allocates a **horde** of N zombies in a **single allocation** using `new Zombie[N]`.

- Default constructor + `setName()` method required (can't pass args to array `new`)
- Must be freed with `delete[]`

**Concepts:** Array allocation, default constructors, `delete[]`.

---

### ex02 — HI THIS IS BRAIN 🧠

A short program proving that a **pointer** and a **reference** to the same string share the same address and value.

```
Address of str:       0x7fff...
Address of stringPTR: 0x7fff...
Address of stringREF: 0x7fff...
```

**Concepts:** References vs pointers — same address, different syntax.

---

### ex03 — Unnecessary Violence ⚔️

Two humans, two weapon-holding strategies:

| Class | Holds Weapon as | Can be NULL? | Set at |
|---|---|---|---|
| `HumanA` | Reference (`&`) | No | Construction |
| `HumanB` | Pointer (`*`) | Yes | Anytime via `setWeapon()` |

**Concepts:** When to use references vs pointers.

---

### ex04 — Sed is for Losers 📝

Replaces all occurrences of `s1` with `s2` in a file, writing to `<filename>.replace`.

- **Forbidden:** `std::string::replace`
- Uses `find()` + `substr()` loop instead

```bash
./sed file "old" "new"
```

**Concepts:** File I/O (`ifstream` / `ofstream`), string manipulation without `replace`.

---

### ex05 — Harl 2.0 😤

Harl complains at 4 levels: `DEBUG`, `INFO`, `WARNING`, `ERROR`.

- Uses an **array of pointers to member functions** — no `if/else` chain
- `void (Harl::*funcs[])(void)` maps level strings to methods

**Concepts:** Pointers to member functions.

---

### ex06 — Harl Filter 🔇

Like ex05, but uses a **switch with fallthrough** to display all messages from a given level and above.

```bash
./harlFilter WARNING    # prints WARNING + ERROR
./harlFilter DEBUG      # prints all 4 levels
./harlFilter INVALID    # "Probably complaining about insignificant problems"
```

**Concepts:** `switch` statement, fallthrough behavior.

---

## Compilation

```bash
cd ex00 && make      # ./zombie
cd ex01 && make      # ./zombieHorde
cd ex02 && make      # ./brain
cd ex03 && make      # ./violence
cd ex04 && make      # ./sed
cd ex05 && make      # ./harl
cd ex06 && make      # ./harlFilter
```

All exercises compile with:
```
c++ -Wall -Wextra -Werror -std=c++98
```
