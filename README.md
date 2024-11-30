# Fraction Operations in C++

This project demonstrates my understanding of **object-oriented programming (OOP)** concepts in C++. The program implements a hierarchy of classes to perform various operations on fractions, including addition, multiplication, and conversion to decimal format. It also showcases the use of **overloaded operators**, **virtual functions**, and **inheritance**.

## Overview

The project consists of a base class `Fraction` and two derived classes:
1. **ProperFraction**: Represents fractions where the numerator is smaller than the denominator.
2. **ImproperFraction**: Represents fractions where the numerator is greater than or equal to the denominator and can be converted between mixed and improper forms.

### Features
- **Operator Overloading**: 
  - `+` for fraction addition.
  - `*` for fraction multiplication.
- **Conversion to Decimal**: Converts the fraction to its decimal equivalent.
- **Mixed and Improper Fraction Conversion**:
  - `toMixedFraction`: Converts improper fractions to mixed fractions.
  - `toImpropeFraction`: Converts mixed fractions back to improper fractions.
- **Virtual Function**:
  - `showFraction`: Displays the fraction in a readable format, overridden in `ImproperFraction` to handle mixed fractions.

### Example Operations
The main function tests the following:
1. **Addition of Proper Fractions** (`a. Fraction a_sum`).
2. **Addition of Improper Fractions** (`b. Fraction b_sum`).
3. **Multiplication of a Proper and Improper Fraction** (`c. Fraction c_product`).
4. **Multiplication of Two Improper Fractions** (`d. Fraction d_product`).
5. **Conversion to Decimal** for various fractions (`f`, `g`, `h`).

## Sample Output
The output of the program displays results for operations `a` through `h`:
```plaintext
a. 1/1
b. 47/12
c. 5/6
d. 55/12
f. 0.5
g. 1.66667
h. 2.75
```

## Future Improvements
1. **Decimal Conversion Logic**:
   - Refactor the `toDecimal` method to ensure consistency and return values properly.
2. **Validation**:
   - Add validation to ensure inputs for `ProperFraction` and `ImproperFraction` comply with their respective definitions.
3. **Simplification**:
   - Implement a method to simplify fractions after arithmetic operations.
4. **Error Handling**:
   - Include exception handling for invalid inputs, such as division by zero.
5. **Unit Testing**:
   - Write test cases to verify the correctness of operations and edge cases.
6. **Dynamic Fraction Allocation**:
   - Explore dynamic memory management to handle larger numbers or more complex fractions.

## Conclusion
This project serves as a practical demonstration of my ability to implement OOP concepts in C++. It highlights my understanding of inheritance, operator overloading, and virtual functions while also leaving room for future improvements and optimizations.
