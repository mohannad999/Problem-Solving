
function(f2 A B)
 #set(A 5)
 #set(B 6)
  
  set(A 5 PARENT_SCOPE)
  set(B 6 PARENT_SCOPE)
endfunction()

function(f1 A B)
 message("f1, A=${A}, B=${B}")
 f2(A B)
 message("f1, A=${A}, B=${B}")
 endfunction()
 
 f1(2 3)
