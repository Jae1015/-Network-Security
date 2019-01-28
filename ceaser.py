p=input("Enter plain text:")
#print (p)
key=3 #fixed in ceaser cipher
c=''
temp=''
for i in range(len(p)):
	temp=(ord(p[i])+97+key)%(97+26)
	if(temp>97):
		c=c+chr(temp)
	else:
		c=c=c+chr(temp+26)
print(c)
