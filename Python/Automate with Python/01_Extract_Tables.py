import pandas as pd

webSite = "https://en.wikipedia.org/wiki/ARM_architecture_family"
armCortex = pd.read_html(webSite)

nunerofTable = len(armCortex)  # number of tabels in this website
print(nunerofTable)

print(armCortex[5])
