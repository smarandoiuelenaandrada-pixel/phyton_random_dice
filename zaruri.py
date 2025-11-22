import random

def dice() -> int:
    return random.randint(1,6)

def statement(a: int, b: int) -> str:
    if a + b == 12:
        return f"Dau icu zaru 6 6 ca mine nu se mai naste"
    elif a + b == 11:
        return f"Dau cu zaru 6 5 n-am nevoie de servici"
    else:
        return f"Dau cu zaru {a} {b}"

x = dice()
y = dice()

print(statement(x, y))
