def fib():
    
    print("This is the worst Fibonacci Sequence Calc. Ever.")
    final0 = input("Please what step you want the sequece to get to and \nthis "
                   "will show you the corrisponding number. \n")
    final = int(final0)
    i = 1

    start = 1
    start2 = 1
    step3 = 3
    step4 = 4
    step5 = 5

    while(i < final):

        if final < 3:           #step 1 and 2
            print(start)
        cont = start + start2   #step 3
        if final == step3:          
            print(cont)
            break
        step3 = step3 + 3
        start = cont + start2   #step 4
        if final == step4:
            print(start)
            break
        step4 = step4 + 3
        start2 = start + cont   #step 5
        if final == step5:
            print(start2)
            break
        step5 = step5 + 3
        i += 1

fib()
