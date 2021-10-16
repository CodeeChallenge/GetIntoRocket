# a^2 + b^2 = c^2
# a + b + c = 1000
f=True
for i in range(1,1001):
	for j in range(1,1001):
		for k in range(1,1001):
			if f == True:
				if (i**2) + (j**2) + (k**2):
					if i + j + k == 1000:
						print(i,j,k)
						f=False