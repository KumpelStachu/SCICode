file = open('dane.txt', 'r')

ile = 0

for line in file.readlines():
    if(str(line) != "Wednesday"):
        ile = ile + 1
else:
    open('wynik.txt', 'a').write(ile)
    file.close()