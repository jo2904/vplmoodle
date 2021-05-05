#python one liner

path = input("votre fichier python: ")
fichier = open(path, "r")
text = fichier.read()
text = text.replace("\n", ";")
text = text.replace(";;", ";")
print("python3 -c '" + text +"'")