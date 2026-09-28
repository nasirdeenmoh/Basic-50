seconds = int(input("Enter time in secs> "))

if seconds:
    minutes = seconds / 60
    hours = minutes / 60
    print(f"{seconds} second is equal to {minutes} minutes, and {hours} hours")
else:
    print("Please enter a second value next time.")