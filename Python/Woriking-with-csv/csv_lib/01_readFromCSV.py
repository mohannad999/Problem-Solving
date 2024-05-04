import csv

# with open ('names.csv','r') as csv_file:
#     csv_reader =csv.reader(csv_file)


#     with open('new_names.csv','w') as new_file:
#         csv_writer =csv.writer(new_file,delimiter='\t')

#         for line in csv_reader:
#             csv_writer.writerow(line)


        

    # for line in csv_reader:
    #     #print(line)  ##  to print full line 
    #     print(line[0])  ## to print the first Colum



with  open('new_names.csv','r') as csv_file:
    csv_reader=csv.reader(csv_file,delimiter='\t')

    for line in csv_reader:
        print(line[0])
