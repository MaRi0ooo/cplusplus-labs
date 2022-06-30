# <p align=center>**ENGLISH**</p>

#### <p align=center>The conditional operator is kind of similar to the ```if-else``` statement as it does follow the same algorithm as of ```if-else``` statement but the conditional operator takes less space and helps to write the ```if-else``` statements in the shortest way possible</p>

### **Syntax**

The conditional operator is of the form

```cpp
larger = (x > y) ? x : y;
```

It can be visualized into ```if-else``` statement as:

```cpp
if(x > y)
    larger = x;
else
    larger = y;
```

Since the Conditional Operator ```?:``` takes three operands to work, hence they are also called **ternary operators**.

Usually, the conditional part is placed inside parentheses to make sure the operator precedence is correctly preserved and easier to read.

**Remember** that the ```?:``` operator has very low precedence, so it must be written in parentheses.

### **Style**

```cpp
// bad
max = x > y ? x : y;

// good
max = (x > y) ? x : y;

// very good
max = ((x > y) ? x : y);
```

> ### 🔴**IMPORTANT**❗🔴
> Always parenthesize the conditional part of a ternary operator, and preferably the entire ternary operator.

### **Example**

```cpp
// C++ program to check whether number is Even or Odd
// Using ternary operator
#include <iostream>

int main()
{
    int num1 = 8;
    ((num1 % 2 == 0) ? std::cout << num1 << " is even!" : std::cout << num1 << " is odd!");
    return 0;
}

// Output: 8 is even!
```
