def pointfunc(): 
    
    testcases = input()
    i = 0 
    
    #for each test case 
    while i < int(testcases):  
        inputs = []
        amount = 4 
        area = None 
        
        #grabbing inputs and adding them into array  
        for j in range(amount): 
            inputs.append(input())
        
        #making them into array that I can loop through 
        points = []
        for item in inputs: 
            points.append(item.split())
            
        
        #for one point loop through every other point 
        for i in range(len(points)): 
            x = None
            y = None 
            
            for j in range(len(points)): 
                if points[i][0] == points[j][0] and points[i] != points[j]:
                    y = int(points[i][1]) - int(points[j][1])
                elif points[i][1] == points[j][1] and points[i] != points[j]:
                    x = int(points[i][0]) - int(points[j][0])
                    
                #if we have the x and y value break through this loop 
                if x and y != None:  
                    area = x * y 
                    break 
            
            #if we have the area break through the entire loop 
            if area != None: 
                break 

            
        i += 1 
        #after everything return the abs value of the area (im assuming area can't be negative?? or can it??)
    return abs(area) 

print(pointfunc())



