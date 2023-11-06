import pandas as pd


website = (
    "https://support.staffbase.com/hc/en-us/articles/360007108391-CSV-File-Examples"
)

csv_fileLink = "https://support.staffbase.com/hc/en-us/article_attachments/360009197031/username.csv"
# reading 1 csv file form  the website
csvfile = pd.read_csv(csv_fileLink)
print(csvfile)

# rename coloms  //this line did'nt work with me
csvfile.rename(columns={"Identifier": "ID", "Username": "User"}, inplace=True)

print(csvfile)
