def _default():
    small = 269.99
    med = 322.99
    large = 394.99
    sum=0
    input_string = input("Input pizza sizes separated by space or enter to finish the pizzas ")
    list  = input_string.split()
    for item in list:
        if item=='s':
            sum=sum+small
        elif item=='S':
            sum=sum+small           
        elif item=='m':
            sum=sum+med
        elif item=='M':
            sum=sum+med
        elif item=='L':
            sum=sum+large
        elif item=='l':
            sum=sum+large
        else:
            print("wrong input")
            exit(2)
                
            
     
    s = "def done."
    print (s)
    print (sum)  
# This function is for amazon
def _amazon():
    small = 269.99
    med = 322.99
    large = 299.99
    sum=0
    input_string = input("Input pizza sizes separated by space or enter to finish the pizzas ")
    list  = input_string.split()
    for item in list:
        if item=='s':
            sum=sum+small
        elif item=='S':
            sum=sum+small           
        elif item=='m':
            sum=sum+med
        elif item=='M':
            sum=sum+med
        elif item=='L':
            sum=sum+large
        elif item=='l':
            sum=sum+large
        else:
            print("wrong input")
            exit(2)
                
            
     
    s = "def done."
    print (s)
    print (sum)
    
# This function is for Facebook 
def _fb():
    small = 269.99
    med = 322.99
    large = 389.99
    sum=0
    count=0
    input_string = input("Input pizza sizes separated by space or enter to finish the pizzas ")
    list  = input_string.split()
    for item in list:
        if item=='s':
            sum=sum+small
        elif item=='S':
            sum=sum+small           
        elif item=='m':
            count=count+1
            if count % 5 == 0:
                sum=sum+0
            else:
                sum=sum+med
        elif item=='M':
            count=count+1
            if count % 5 == 0:
                sum=sum+0
            else:
                sum=sum+med
        elif item=='L':
            sum=sum+large
        elif item=='l':
            sum=sum+large
        else:
            print("wrong input")
            exit(2)
                
            
     
    s = "def done."
    print (s)
    print (sum)
    
# This function is for INfy
def _infy():
    small = 269.99
    med = 322.99
    large = 394.99
    sum=0
    count=0
    input_string = input("Input pizza sizes separated by space or enter to finish the pizzas ")
    list  = input_string.split()
    for item in list:
        if item=='s':
            count=count+1
            if count % 3 == 0:
                sum=sum+0
            else:
                sum=sum+small
        elif item=='S':
            count=count+1
            if count % 3 == 0:
                sum=sum+0
            else:
                sum=sum+small          
        elif item=='m':
            sum=sum+med
        elif item=='M':
            sum=sum+med
        elif item=='L':
            sum=sum+large
        elif item=='l':
            sum=sum+large
        else:
            print("wrong input")
            exit(2)
                
            
     
    s = "def done."
    print (s)
    print (sum)  


#function to define ownprice
def _default_ownprice(small,med,large):
    sum=0
    input_string = input("Input pizza sizes separated by space or enter to finish the pizzas ")
    list  = input_string.split()
    for item in list:
        if item=='s':
            sum=sum+small
        elif item=='S':
            sum=sum+small           
        elif item=='m':
            sum=sum+med
        elif item=='M':
            sum=sum+med
        elif item=='L':
            sum=sum+large
        elif item=='l':
            sum=sum+large
        else:
            print("wrong input")
            exit(2)
                
            
     
    s = "def done."
    print (s)
    print (sum)  
#function for total sum of other companies
def _make_tot(old,new,choice,small,med,large):
    temp=int(old-new)
    temp=abs(temp)
    count=0
    input_string = input("Input pizza sizes separated by space or enter to finish the pizzas ")
    list  = input_string.split()
    x=0
    sum=0
    
    
        
  
    for item in list:
        if item=='s':
            count=count+1
            sum=sum+small
        elif item=='S':
            count=count+1
            sum=sum+small           
        elif item=='m':
            count=count+1
            sum=sum+med
        elif item=='M':
            count=count+1
            sum=sum+med
        elif item=='L':
            count=count+1
            sum=sum+large
        elif item=='l':
            count=count+1
            sum=sum+large
        else:
            print("wrong input")
            exit(2)
        
            
    tempsum=0      
    if choice=='s':
            x=1
            tempsum=sum-temp*small
    elif choice=='S':
            x=1
            tempsum=sum-temp*small
    elif choice=='m':
            x=2
            tempsum=sum-temp*med
    elif choice=='M':
            x=2
            tempsum=sum-temp*med
    elif choice=='l':
            x=3
            tempsum=sum-temp*large
    elif choice=='L':
            x=3
            tempsum=sum-temp*large
          
    print("Total sum",tempsum)
#Function for other companies
def _others():    
    print("Enter Small pizza price: ")
    small=int(input())
    print("Enter Medium pizza price: ")
    med=int(input())
    print("Enter large pizza price: ")
    large=int(input())
    choice = input("Enter 1 for discounts or 0 for no discounts:")
    if choice=='1':
        print("Enter old no of pizzas:")
        old=int(input())
        print("Enter new no of pizzas:")
        new=int(input())
        choice = input("Enter which size you wish to apply this discount:")
        _make_tot(old,new,choice,small,med,large)
    else:
         _default_ownprice(small,med,large)

#MAIN FUNCTON
print("Select operation.")
print("1.Default")
print("2.Amazon")
print("3.Fb")
print("4.Infy")
print("5.Others(own settings)")
# Take input from the user 
choice = input("Enter choice(1/2/3/4/5):")

if choice == '1':
    _default()
elif choice == '2':
   _amazon()
elif choice == '3':
   _fb()
elif choice == '4':
   _infy()
elif choice == '5':
   _others()
else:
   print("Invalid input")
