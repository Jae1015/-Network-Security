#Python3
p=input("Enter plain text: ")
key=int(input("Enter key: "))#for taking integer input
c=''
for i in range(len(p)):
	temp=(ord(p[i])+97+key)%(97+26)
	if(temp>97):
		c=c+chr(temp)
	else:
		c=c=c+chr(temp+26)
print(c)
