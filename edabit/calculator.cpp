/*  Create a function that takes two numbers and a 
 *  mathematical operator + - / * and will perform 
 *  a calculation with the given numbers.
 */
int calculator(int num1, char op, int num2)
{
    switch (op)
    {
    case '*':
        return num1 * num2;
        // condition ? value_if_true : value_if_false <- ternary statement example
    case '/':
        return (num2 == 0) ? 0 : num1 / num2;
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    }
}