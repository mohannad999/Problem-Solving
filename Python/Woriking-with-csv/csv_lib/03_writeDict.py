import csv


# with open('names.csv','r') as csv_files:
#     csv_reader=csv.DictReader(csv_files)

#     with open('new_names.csv','w') as new_file:

#         fieldname =['first_name','last_name','email']
#         csv_writer=csv.DictWriter(new_file,fieldnames=fieldname,delimiter='#')

#         csv_writer.writeheader()

#         for line in csv_reader:
#             csv_writer.writerow(line)



with open('names.csv','r') as csv_files:
    csv_reader=csv.DictReader(csv_files)

    with open('new_names2.csv','w') as new_file:

        fieldname =['first_name','email']
        csv_writer=csv.DictWriter(new_file,fieldnames=fieldname,delimiter=',')

        csv_writer.writeheader()

        for line in csv_reader:
            del line['last_name']
            csv_writer.writerow(line)