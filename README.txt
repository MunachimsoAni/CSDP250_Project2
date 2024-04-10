Project description: Convert a decimal number to a binary number.

Input Data: Decimal number to be converted, entered as a double data type. Declares status boolean variable

Output result: Displays the converted binary number


Procedures you run the program: In the main function, It checks if the number is negative or positive. If negative, status is true and multiplies by -1 to be positive, else false.It prompts the user to enter the decimal number and then splits into two; integer and decimal part. Calls stack and queue display functions side by side to display the output. Displays with a negative sign if status is true.

Uses stack LL to convert integer to binary by pushing the modulus of the integer and dividing by 2 each time until it becomes zero.Uses queue LL to convert decimal part to binary enqueuing the integer number of each iterated decimal number multiplied by 2.This will run for a set amount of time (precision) for the set number of decimal places.


