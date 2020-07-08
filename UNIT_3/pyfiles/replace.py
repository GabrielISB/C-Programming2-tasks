# Reads one number from a file and changes it into 8 
# then writes it to another 

file = open("fb1.txt", "r")
file2 = open("replace.txt", "w")

texto = file.read()

file2.write(texto.replace("1", "8"))
