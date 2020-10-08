def factorial(n):
    fact = 1
    for i in range(1, n + 1):
        fact = fact * i
    return fact


def main():
    number = 6
    print(factorial(number))


if __name__ == "__main__":
    main()

