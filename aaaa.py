#factor
sum=0
a=int(input("enter  a no"))
for x in range (1,a+1):
	r=a%x
	if r==0:
		print(x)
		