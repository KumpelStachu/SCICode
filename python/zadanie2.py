file = open('dane.txt', 'r')

for line in file.readlines():
    if(len(str(line)) >= 7):
        open('wynik.txt', 'a').write(line)
else:
    file.close()