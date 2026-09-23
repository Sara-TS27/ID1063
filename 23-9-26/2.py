
def daysElapsed(day, month):
    days= [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    total= day
    for i in range(month - 1):
        total = total+days[i]
    return total
day, month = map(int, input().split())
print(daysElapsed(day, month))
