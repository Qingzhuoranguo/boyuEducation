def linear_search (x,ls): 
	ls_len = len (ls)  
	for i in range (ls_len): 
		if ls[i] == x:   
			return True
	return False 


   

ls = [1,2,3,4,5,6,7,7,8,9,10,11,11,12,14,15,20]
def B_Search (ls, num):
    result = "False"
    half_ls_in = int(len(ls)/2)
    half_ls = int(len(ls)/2)
    for i in range (half_ls+1):
        half_ls_in = int(half_ls_in)
        if half_ls_in < 0:
            break
        if half_ls_in > len(ls)-1:
            break
        
        if ls[half_ls_in] == num:
            result = "True"
            break
        
        if ls[half_ls_in] < num:
          half_ls_in = half_ls_in + int(len(ls) - half_ls_in)/2
          continue
        if ls[half_ls_in] > num:
            remain = len(ls) - half_ls_in
            half_ls_in = half_ls_in - int(len(ls) - remain)/2
            continue

    return result


print ( B_Search(ls, 9.5) )
