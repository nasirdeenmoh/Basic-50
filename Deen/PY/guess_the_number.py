import random
number = random.randint(1, 100)
tries = 0
while True:
    guess = int(input("Enter your guess>> "))

    if guess > number:
        print("Too high")
        tries += 1
    elif guess == number:
        print("Correcty")
        if tries <= 3:
            print(f"Nice guessing skills, u cracked it in {tries} tries")
        else:
            print("Better luck next time, but u did good nonetheless")
            print(f"Took you {tries} tries btw")
        break
    elif guess == 0: 
        break
    else:
        print("Too low")
        tries += 1