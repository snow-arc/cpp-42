# Module 03 — Inheritance

> Building a chain of inherited classes, culminating in the Diamond Problem.

---

## Class Hierarchy

```
         ClapTrap
        /        \
   ScavTrap    FragTrap
        \        /
       DiamondTrap
```

---

## Exercises

### ex00 — Aaaaand... OPEN! 🤖

The base class `ClapTrap`:

| Attribute | Default |
|---|---|
| `_name` | Constructor param |
| `_hitPoints` | 10 |
| `_energyPoints` | 10 |
| `_attackDamage` | 0 |

| Action | Cost | Effect |
|---|---|---|
| `attack(target)` | 1 EP | Deals `_attackDamage` to target |
| `takeDamage(amount)` | — | Reduces HP (clamps to 0) |
| `beRepaired(amount)` | 1 EP | Restores HP |

Can't act with 0 HP or 0 EP.

**Concepts:** Class design, encapsulation, `unsigned int` underflow protection.

---

### ex01 — Serena, My Love! 🛡️

`ScavTrap` inherits from `ClapTrap` (**protected** attributes):

| Attribute | Override |
|---|---|
| HP | **100** |
| EP | **50** |
| AD | **20** |

- Overrides `attack()` to print "ScavTrap" instead of "ClapTrap"
- New method: `guardGate()` — "is now in Gate keeper mode"
- Construction/destruction messages show correct order (ClapTrap first, ScavTrap second)

**Concepts:** Public inheritance, method overriding, construction/destruction order.

---

### ex02 — Repetitive Work 💥

`FragTrap` inherits from `ClapTrap`:

| Attribute | Override |
|---|---|
| HP | **100** |
| EP | **100** |
| AD | **30** |

- New method: `highFivesGuys()` — "requests a positive high five!"
- Does NOT override `attack()` (inherits ClapTrap's)

**Concepts:** Multiple derived classes from same base.

---

### ex03 — Now It's Weird! 💎

`DiamondTrap` inherits from **both** `ScavTrap` and `FragTrap` — the classic Diamond Problem.

**Virtual inheritance** prevents duplicate `ClapTrap` sub-objects:
```cpp
class ScavTrap : virtual public ClapTrap { ... };
class FragTrap : virtual public ClapTrap { ... };
```

| Attribute | Source |
|---|---|
| HP = 100 | FragTrap |
| EP = 50 | ScavTrap |
| AD = 30 | FragTrap |
| `attack()` | `using ScavTrap::attack` |

- Has its own private `_name`
- `ClapTrap::_name` is set to `<name>_clap_name`
- `whoAmI()` prints both names

**Concepts:** Diamond inheritance, `virtual` base classes, `using` declaration.

---

## Compilation

```bash
cd ex00 && make      # ./claptrap
cd ex01 && make      # ./scavtrap
cd ex02 && make      # ./fragtrap
cd ex03 && make      # ./diamondtrap
```

All exercises compile with:
```
c++ -Wall -Wextra -Werror -std=c++98
```
