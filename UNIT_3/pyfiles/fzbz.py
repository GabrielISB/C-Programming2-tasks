## Reads the content from one file and copies it to another

file = open("fb1.txt", "r")
file2 = open("fb2.txt", "w")


contents = file.read()
		
file2.write(contents)
