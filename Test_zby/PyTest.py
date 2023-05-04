num = 1
print("Hello Python!")
print(num)
numList = [1, 2, 3, 4]
it = iter(numList)
while True:
    try:
        print(next(it))
    except StopIteration:
        break
