file = open('dane.txt', 'r')

for line in file.readlines():
    if(str(line)  == "September"):
        open('wynik.txt', 'a').write(line)
else:
    file.close()