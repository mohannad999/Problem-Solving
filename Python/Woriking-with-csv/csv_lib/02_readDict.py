import csv


with open('names.csv','r') as csv_files:
    csv_reader=csv.DictReader(csv_files)

    for line in csv_reader:
        #print(line) #print all Dictionary
        print(line['email'])