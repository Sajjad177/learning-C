#include <stdio.h>

int main(void)
{
    char ch;
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("%c", ch);
    }
    else
    {
        ch = ch + 32;
        printf("%c", ch);
    }

    return 0;
}

/*

# C Programming Notes: Uppercase & Lowercase Conversion

### 1. `char` Data Type
- `char` একটি character store করে।
- Example: `a`, `B`, `x`, `Z`

### 2. Character Input
```c
char ch;
scanf("%c", &ch);
```
- `%c` একটি character input নেয়।
- `&ch` input-এর মান `ch` variable-এ রাখার জন্য ব্যবহৃত হয়।

### 3. Lowercase Check
```c
if (ch >= 'a' && ch <= 'z')
```
- `a` থেকে `z` পর্যন্ত lowercase letter পরীক্ষা করে।
- `&&` মানে দুটি condition-ই সত্য হতে হবে।

### 4. Lowercase → Uppercase
```c
ch = ch - 32;
```
- ASCII-তে lowercase letter-এর code uppercase-এর চেয়ে 32 বেশি।
- তাই 32 বিয়োগ করলে lowercase থেকে uppercase হয়।
- Example: `a` → `A`

### 5. Uppercase → Lowercase
```c
ch = ch + 32;
```
- 32 যোগ করলে uppercase থেকে lowercase হয়।
- Example: `B` → `b`

### 6. Character Output
```c
printf("%c", ch);
```
- `%c` ব্যবহার করে character print করা হয়।

### 7. `if-else` Logic
- `if`: condition সত্য হলে চলে।
- `else`: `if`-এর condition মিথ্যা হলে চলে।
- `else if`: আরেকটি condition পরীক্ষা করতে ব্যবহার করা হয়।

### 8. Important Mistake
শুধু lowercase check করে `else`-এ `+32` দিলে সংখ্যা বা symbol-ও পরিবর্তিত হতে পারে।

সঠিক logic:
```c
if (ch >= 'a' && ch <= 'z')
{
    ch = ch - 32;
}
else if (ch >= 'A' && ch <= 'Z')
{
    ch = ch + 32;
}
```

### 9. মনে রাখার শর্টকাট
- Lowercase → Uppercase = `- 32`
- Uppercase → Lowercase = `+ 32`
- `&&` = AND
- `%c` = Character input/output
- `if-else` = Condition অনুযায়ী সিদ্ধান্ত নেওয়া


*/
