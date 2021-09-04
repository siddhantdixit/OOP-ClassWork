days = [
    "monday",
    "tuesday",
    "wednesday",
    "thursday",
    "friday",
    "saturday",
    "sunday"
]

# print(days[2:5])

# print(days[0],days[1])
# print(days[-1],days[-2])

# days.append("newday")
# print(days)

# days.insert(1,"noday")
# print(days)

# days.pop(1)
# print(days)

# days.remove("wednesday")
# print(days)

# days.pop()
# print(days)


Sdays = [i for i in days if i.startswith("s")]
print(Sdays)

