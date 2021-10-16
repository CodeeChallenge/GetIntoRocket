from  sys import argv
script,user_name = argv

print("hi,{user_name},i'm the {script}script")
print("i would like to ask you few question")
print("do you like me{user_name}?")
likes=input()

print("where do you live in")
live=input()

print("how many computers do you have")
computers=input()

print("""
alright,so you said{likes} about liking me.
and you live in{live} dont know where it is.
and you have {computers} in home"""	)