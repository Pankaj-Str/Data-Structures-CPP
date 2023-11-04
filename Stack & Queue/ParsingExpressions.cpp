#include <iostream>
#include <cctype>
#include <string>

class ExpressionParser {
public:
    ExpressionParser(const std::string& expression) : input(expression), position(0) {}

    double parse() {
        double result = parseAdditionSubtraction();
        if (position < input.length()) {
            std::cerr << "Error: Unexpected character '" << input[position] << "'" << std::endl;
            // You can add more detailed error handling here
        }
        return result;
    }

private:
    std::string input;
    size_t position;

    double parseAdditionSubtraction() {
        double left = parseMultiplicationDivision();
        while (position < input.length()) {
            char op = input[position];
            if (op != '+' && op != '-') {
                break;
            }
            position++;
            double right = parseMultiplicationDivision();
            if (op == '+') {
                left += right;
            } else {
                left -= right;
            }
        }
        return left;
    }

    double parseMultiplicationDivision() {
        double left = parseTerm();
        while (position < input.length()) {
            char op = input[position];
            if (op != '*' && op != '/') {
                break;
            }
            position++;
            double right = parseTerm();
            if (op == '*') {
                left *= right;
            } else {
                if (right == 0) {
                    std::cerr << "Error: Division by zero" << std::endl;
                    // You can add more detailed error handling here
                } else {
                    left /= right;
                }
            }
        }
        return left;
    }

    double parseTerm() {
        if (position >= input.length()) {
            std::cerr << "Error: Unexpected end of expression" << std::endl;
            // You can add more detailed error handling here
            return 0.0;
        }

        char currentChar = input[position];
        if (std::isdigit(currentChar)) {
            std::string number;
            while (position < input.length() && (std::isdigit(input[position]) || input[position] == '.')) {
                number += input[position];
                position++;
            }
            return std::stod(number);
        } else if (currentChar == '(') {
            position++;
            double result = parseAdditionSubtraction();
            if (position >= input.length() || input[position] != ')') {
                std::cerr << "Error: Unmatched parentheses" << std::endl;
                // You can add more detailed error handling here
            } else {
                position++;
            }
            return result;
        } else if (currentChar == '-') {
            position++;
            return -parseTerm();
        } else {
            std::cerr << "Error: Unexpected character '" << currentChar << "'" << std::endl;
            // You can add more detailed error handling here
            return 0.0;
        }
    }
};

int main() {
    std::string expression;
    std::cout << "Enter an arithmetic expression: ";
    std::getline(std::cin, expression);

    ExpressionParser parser(expression);
    double result = parser.parse();

    if (result != 0.0) {
        std::cout << "Result: " << result << std::endl;
    }

    return 0;
}
