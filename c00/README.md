# Module 00 — Namespaces, Classes, Member Functions, stdio Streams, Initialization Lists, static, const

> First contact with Object-Oriented Programming in C++98.

---

## Exercises

### ex00 — Megaphone 📢

A simple program that converts command-line arguments to **uppercase**.

| | |
|---|---|
| **Input** | `./megaphone "shhh... I think the students are asleep..."` |
| **Output** | `SHHH... I THINK THE STUDENTS ARE ASLEEP...` |
| **No args** | `* LOUD AND UNBEARABLE FEEDBACK NOISE *` |

**Concepts:** `std::cout`, `toupper`, basic CLI argument handling.

---

### ex01 — My Awesome PhoneBook 📞

A crappy phonebook that holds **8 contacts max** (no dynamic allocation). Oldest contact is replaced when full.

**Commands:**
| Command | Description |
|---|---|
| `ADD` | Prompts for 5 fields (first name, last name, nickname, phone number, darkest secret). No field can be empty. |
| `SEARCH` | Displays contacts in a formatted 4-column table (10 chars wide, right-aligned, truncated with `.`). Then prompts for an index to show full details. |
| `EXIT` | Exits the program. Contacts are lost. |

**Concepts:** Classes, member functions, `std::string`, `std::setw`, `std::iomanip`, encapsulation.

---

### ex02 — The Job of Your Dreams 💼

Re-create the `Account.cpp` implementation to match the output of a provided `tests.cpp` (which uses STL — the only exception to the "no STL" rule).

**Key points:**
- Static member variables (`_nbAccounts`, `_totalAmount`, etc.)
- Static member functions (`getNbAccounts`, `displayAccountsInfos`, etc.)
- Timestamp display with `<ctime>`
- Output must match the reference log exactly (minus timestamps)

**Concepts:** Static members, initialization lists, `const` methods, encapsulation.

---

## Compilation

```bash
cd ex00 && make      # ./megaphone
cd ex01 && make      # ./phonebook
cd ex02 && make      # ./account
```

All exercises compile with:
```
c++ -Wall -Wextra -Werror -std=c++98
```
