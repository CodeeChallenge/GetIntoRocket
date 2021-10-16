import csv
with open('C:\\Users\\Refsty\\Downloads\\contacts.csv','rt')as f:
  data = csv.reader(f)
  for row in data:
        print(row)