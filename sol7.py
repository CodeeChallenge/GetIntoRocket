s1=input()
s2=''
x=0
for i in range(len(s1)):
	x=0
	y=chr(ord(s1[i])+1)
	z=chr(ord(s1[i])-1)
	for j in range(len(s1)):
		if y == s1[j]:
			x=1
		if z == s1[j]:
			x=1
	if x==0 :
		s2+=s1[i]
print(s2)