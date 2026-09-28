scores = [25, 60, 99]

def average(scores):
    scores_total = len(scores)
    total = 0
    for score in scores:
        total += score
    avg = total / scores_total

    print(f"The average of the hardcoded scores is {avg}")

average(scores)