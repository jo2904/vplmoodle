import sys

occurence = [0,0,0,0,0]
chaine = sys.argv[1]
print(chaine)
for i in range(0, len(chaine)):
    if chaine[i] == "a":
        occurence[0] =+ 1
    elif chaine[i] == "b":
        occurence[1] =+ 1
    elif chaine[i] == "i":
        occurence[2] =+ 1
    elif chaine[i] == "j":
        occurence[3] =+ 1
    elif chaine[i] == "u":
        occurence[4] =+ 1

for i in range(0,5):
    print(str(occurence[i]) + " ")
