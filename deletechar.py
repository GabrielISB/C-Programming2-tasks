x= ['+62', '+75', '-54', '-88']
n = 0
for i in x:
	x[n] = i.replace('-','')
	n += 1
n = 0
for i in x:
	x[n] = i.replace('+', '')
	n += 1
print(x)
