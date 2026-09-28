print("Enter two numbers to show you the sum, product, difference, and quotient")
first_number = int(input("Enter first number... "))
second_number = int(input("Enter the second number... "))

sum = first_number + second_number
difference = first_number - second_number
quotient = first_number / second_number
product = first_number * second_number

print(f"""
The numbers above sum equals {sum}, product: {product}, difference: {difference}, quotient: {quotient}
""")
