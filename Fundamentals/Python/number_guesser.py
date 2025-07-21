def main():
    num_1 = int(input("Enter a Number: "))
    num_2 = int(input("Enter a Number: "))
    operation = input("Enter an operator +, -, *, /, %: ")

    if operation == "+":
        print(num_1 + num_2)
    elif operation == "-":
        print(num_1 - num_2)
    elif operation == "*":
        print(num_1 * num_2)
    elif operation == "/":
        print(num_1 / num_2)
    elif operation == "%":
        print(num_1 % num_2)
    else:
        print("error")
    

if __name__ == "__main__":
    main()