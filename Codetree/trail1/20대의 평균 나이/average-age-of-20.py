total = 0
i = 0

while True:
    num = int(input())

    if num >= 30 or num<20:
        break

    total += num
    i += 1


avr = total / i
print(f"{avr:.2f}")