# ft_printf

Reimplementation of the standard `printf` function in C, developed as part of the 42 School curriculum.

---

## 📌 Description

The goal of this project is to implement a simplified version of the `printf` function from the C standard library. This custom implementation handles various format specifiers and uses variadic functions.

---

## 🛠️ Supported Format Specifiers

This version of `ft_printf` supports the following conversions:

| Format | Description                      |
|--------|----------------------------------|
| `%c`   | Character                        |
| `%s`   | String                           |
| `%d`   | Signed decimal integer           |
| `%i`   | Signed decimal integer           |
| `%u`   | Unsigned decimal integer         |
| `%x`   | Unsigned hexadecimal (lowercase) |
| `%X`   | Unsigned hexadecimal (uppercase) |
| `%p`   | Pointer address                  |

---

## 📁 Project Files

### Header File: [`ft_printf.h`](./ft_printf.h)

Defines the public function prototype and helper functions.

### Source Files:

- `ft_printf.c` — Main implementation of the `ft_printf` function
- `ft_putstr.c` — String printing and character output
- `ft_int_number.c` — Integer formatting
- `ft_hexnumber.c` — Hexadecimal formatting
- `ft_unsigned.c` — Unsigned integer formatting
- `ft_pointer.c` — Pointer address formatting
- `ft_step.c` — Helper function for number-to-string conversion steps

---

### Example
```c
#include "ft_printf.h"

int	main(void)
{
	int	num = 42;
	ft_printf("Hello, number: %d\n", num);
	return (0);
}