cmake_minimum_required(VERSION 3.0)

PROJECT(09_Loop)
############# CASE 1 ##############
##set(a 99) 
##foreach(currentElement ${a} b c d e f)
####################################

############ CASE 2 ################
#set(listA 1 2 3 4 5 6)
#foreach(currentElement IN LISTS listA)
#############################

############ CASE 3 ################
#set(listA 1 2 3 4)
#set(listB a b c d )
#foreach(currentElement IN LISTS listA listB)
#############################

############ CASE 4 ################
#set(listA 1 2 3 4)
#set(listB a b c d )
#foreach(currentElement IN LISTS listA listB ITEMS x y)
#############################

#message("currentElemenr = ${currentElement_0} " )


############ CASE 5 ################
#set(listA 1 2 3 4)
#set(listB a b c d )
#foreach(currentElement IN ZIP_LISTS listA listB)
#message("currentElemenr = ${currentElement_0} ${currentElement_1} " )
#############################

############ CASE 6 ################
#set(listA 1 2 3 4)
#set(listB a b c d )
#set(listC aa ab ac ad )
#foreach(currentElement IN ZIP_LISTS listA listB listC) 
#message("currentElemenr = ${currentElement_0} ${currentElement_1} ${currentElement_2}" )

############ CASE 7 ################
#set(listA 1 2 3 4)
#set(listB a b c d )
#foreach(ce1 ce2 IN ZIP_LISTS listA listB) 
#message("currentElemenr = ${ce1} ${ce2}")

############ CASE 8 ################
set(listA 1 2 3 4)
set(listB a b c d )
#for{int i=0; i<10 ;i++} // 0 9
foreach(currentElement RANGE 0 9) 
message("currentElemenr = ${currentElement} " )


endforeach()


