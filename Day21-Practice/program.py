choc = [4,5,0,1,8,9,0]
i = 0
N= 7

while(i<N):
    if(choc[i] == 0):
        choc.pop(choc[i])
        choc.append(0)
        i += 1
 
    else:
        i +=1


print(choc)