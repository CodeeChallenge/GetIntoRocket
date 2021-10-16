z=0
for x in range(6):
	for y in range(x,0,-1):
		if z//2==0:
			print(" ",end="")
		else:
			print("a",end="")
		z=z+1
	print()