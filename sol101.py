str1 = input()
sstr =''
str1 +='0'
no = int(str1[0])
listno = [str(i) for i in range(10)]
for i in range(len(str1)):
	if str1[i] not in listno:
		sstr += str1[i]
	else:
		print(no*sstr,end='')
		no = int(str1[i])
		sstr = ''					