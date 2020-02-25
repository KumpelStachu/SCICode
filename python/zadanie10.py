file = open('dane.txt', 'r')

for line in file.readlines():
    if(int(line) % 2 == 0):
        open('wynik.txt', 'a').write(line)
else:
    file.close()