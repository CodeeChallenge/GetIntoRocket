a=["zog","nvwsuikgndmfexxgjtkb","nxko"]
str=""
a.sort(key=len,reverse = True)
num = 0
s=0
for i in a:
	#if no char repeat inside string   [zogg]
	for j in range(len(i)):
		s=0
		for k in range(len(i)):
			if ((i[j] == i[k]) and j!=k):
				s=1	
				break
		if s==1:
			break
	
	if s==1:
		continue
	num=0
	for j in i:
		if j not in str:
			num+=1
	if num == len(i):
		str+=i		
print(len(str))		