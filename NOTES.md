# 📚 C Programming Notes

---

## 🎲 `rand()` is Not Actually Random

You've used `rand()` and `srand(time(NULL))` in your code. You know it generates "random" numbers. But here's the truth — **`rand()` is completely deterministic and predictable.** It's not random at all.

---

### What's Actually Happening

`rand()` uses a formula internally. Every time you call it, it takes the **previous number** and runs a math operation on it to produce the next one. Something roughly like this:

next = (previous × 1103515245 + 12345) % 2147483648

That's it. Pure math. No magic, no chaos, no randomness.

So if you always **start from the same number**, you always get the **exact same sequence**. Try this:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    srand(42);  // fixed seed
    for (int i = 0; i < 5; i++) {
        printf("%d\n", rand());
    }
    return 0;
}
```

Run it 10 times. You'll get the **exact same 5 numbers every single time.**

---

### So Why Does `srand(time(NULL))` "Fix" It?

Because `time(NULL)` returns the current Unix timestamp — the number of seconds since January 1, 1970. Every second that passes, the seed changes. So the sequence starts from a different point each run.

But notice — **if you run your program twice within the same second**, you get identical output again. Old video games exploited this constantly. Speedrunners still do — they reset and retry until the game launches at the exact second that gives them the "lucky" seed they want.

---

### Why Does This Actually Matter?

This is called a **PRNG — Pseudo Random Number Generator.** The "Pseudo" is the honest part.

It has a real consequence — **your guessing game can be cheated**. If someone knows:
1. What time your program started (easy to find out)
2. Which PRNG algorithm your system uses (it's public)

They can **predict every number your game will generate** before guessing. No luck needed.

This is exactly why online casinos, cryptography, password generators, and security systems **never use `rand()`**. They use hardware-based randomness — electrical noise, thermal fluctuations, mouse movement — things that are genuinely unpredictable. In C, the secure alternative is reading from `/dev/urandom` on Linux, which pulls from the operating system's entropy pool.

---

### The Funny Part

The C standard doesn't even guarantee how good `rand()` is. The official documentation literally says implementations may produce "low-order bits that are cyclic" — meaning the last digit of your random numbers might just go `1, 2, 3, 4, 5, 1, 2, 3, 4, 5...` on some compilers. It's that unreliable.

For a guessing game — totally fine. For anything that matters — never touch it.

---

> **TL;DR:** `rand()` is a math formula pretending to be chaos. `srand()` just picks where in the formula you start. Real randomness is a genuinely hard problem in computer science.

---