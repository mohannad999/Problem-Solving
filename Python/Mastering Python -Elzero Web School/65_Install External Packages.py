# ------------------------------------------
# -- Modules => Install External Packages --
# ------------------------------------------
# [1] Module vs Package
# [2] External Packages Downloaded From The Internet
# [3] You Can Install Packages With Python Package Manager PIP
# [4] PIP Install the Package and Its Dependencies
# [5] Modules List "https://docs.python.org/3/py-modindex.html"
# [6] Packages and Modules Directory "https://pypi.org/"
# [7] PIP Manual "https://pip.pypa.io/en/stable/reference/pip_install/"
# ---------------------------------------------------------------------


# pip install cmd 
# [1] pip install packageName  
# [2] pip install packageName1 packageName2 packageName3 
# [3] pip --version 
# [4]pip install packageName==1.2.4 //to install spicific version
# [4]pip install packageName>=1.2.4 // # [4]pip install packageName==1.2.4  or larger than 
# [3] pip install packageName --upgrade
# [] pip install --user packageName --upgrade //if I fase a problem with the primetion


######################################
import termcolor
import pyfiglet

print(dir(pyfiglet))
print(pyfiglet.figlet_format("Zaatreh"))
print(termcolor.colored("Zaatreh", color="yellow"))

print(termcolor.colored(pyfiglet.figlet_format("Zaatreh"), color="yellow"))