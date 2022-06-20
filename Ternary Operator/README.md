# <p align=center> ENGLISH </p>

#### <p align=center> The conditional operator is kind of similar to the if-else statement as it does follow the same algorithm as of if-else statement but the conditional operator takes less space and helps to write the if-else statements in the shortest way possible. </p>

### Syntax: 
The conditional operator is of the form
```cpp
variable = Expression1 ? Expression2 : Expression3
```
It can be visualized into if-else statement as:
```cpp
if(Expression1)
{
    variable = Expression2;
}
else
{
    variable = Expression3;
}
```
Since the Conditional Operator ‘?:’ takes three operands to work, hence they are also called <b>ternary operators</b>.

### Example:
```cpp
// C++ program to check whether number is Even or Odd
// Using ternary operator
#include <iostream>

int main()
{
    int num1 = 8;
    (num1 % 2 == 0) ? std::cout << num1 << " is even!" : std::cout << num1 << " is odd!";
    return 0;
}
```
### Output:
```
8 is even!
```
