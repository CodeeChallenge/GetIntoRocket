import re
str="""
	this is the string and best usecase of string. 2 32 32 5 45 35  this
	"""
all = re.findall(r'\d{1}',str)
print(all)		