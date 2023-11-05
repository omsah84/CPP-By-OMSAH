cnt = 1
while(1):
    print("Enter the value:")
    n = int(input())
    if(n==1):
        cnt +=1

    if(n==-1):
        cnt -+1

    if(n==0):
        break

if(cnt %4 == 0):
    print("south")

if(cnt % 4 == 1):
    print("East")

if(cnt%4 == 2):
    print("west")

if(cnt %4 == 3):
    print("North")
