def check_odd_even(number):
    # Using bitwise AND operator to check last bit
    # If last bit is 1, number is odd
    # If last bit is 0, number is even
    if number & 1 == 0:
        return "Even"
    else:
        return "Odd"

# Test the function
def main():
    num = int(input("Enter a number: "))
    result = check_odd_even(num)
    print(f"{num} is {result}")

if __name__ == "__main__":
    main()