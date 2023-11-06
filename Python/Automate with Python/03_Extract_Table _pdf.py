# pip install camelot-py
# pip install tk
# pip install ghostscript
import camelot


tabels = camelot.read_pdf("TenderJO.pdf", pages="3")
print(tabels)

# tabels.export('IELTS.csv',f='csv',copress=True)
# tabels[2].to_csv('IELTS.csv')
