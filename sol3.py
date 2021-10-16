def fun1(n):
    m=n
    x=0
    while m:
       x=(x*10)+int(m%10)
       m=int(m/10)
    if x == n:
        return 1
    else:
        return -1
n=99*99
while n:
	if fun1(n) == 1:
		print(n)
		break  
	n=n-1     