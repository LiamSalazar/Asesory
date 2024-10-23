s = "abccbaacz"
visited = []

for letter in s:
    if letter in visited:
        print(letter)
        break
    else:
        visited.append(letter)