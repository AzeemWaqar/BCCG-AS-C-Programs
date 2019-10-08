import os
print("\t\t\t\t\t\t\t\t\t\tMain Menu")
print("\nSelect The Option to Perform:")
print("\n1= Arthematic Operants.\n2= Number Comparision.\n3= Factorial Caculation.\n4= Table")
option = int(input("Enter The Option to Perform: "))
if option == 1:
    os.system('cls')
    print("\nArthmetic Operators Selected")
    print("1= Addition.\n2= Subtraction.\n3= Multiplication.\n4= Division.")

    operant = int(input("Enter The Option: "))
    if operant == 1:
        os.system('cls')
        print("\nAddition Selected")
        fno = int(input("\nEnter The First Number: "))
        sno = int(input("\nEnter The Second Number: "))
        sum = fno + sno
        print("The Sum is : ", sum)
    elif operant == 2:
        os.system('cls')
        print("Subtraction Selected")
        fno = int(input("\nEnter The First Number: "))
        sno = int(input("\nEnter The Second Number: "))
        subtraction = fno - sno
        print("\nThe subtraction is : ", subtraction)
    elif operant == 3:
        os.system('cls')

        print("\nMultiplication Selected")
        fno = int(input("\nEnter The First Number: "))
        sno = int(input("\nEnter The Second Number: "))
        multiplication = fno * sno
        print("\nThe Multiplication is : ", multiplication)
    elif operant == 4:
        os.system('cls')

        print("\nDivision Selected")
        fno = int(input("\nEnter The First Number: "))
        sno = int(input("\nEnter The Second Number: "))
        division = fno / sno
        print("The Division is : ", division)
    else:
        print("Invalid option")


if option == 2:
        print("\nNumber Comparision Selected")
        fno = int(input("\nEnter The First Number: "))
        sno = int(input("\nEnter The Second Number: "))

        if fno == sno:
            print ("\nBoth Numbers are Equal")

        if fno>sno:
            print("\n1st Number is Greater Then Second Number")

        else:
            print("The Second Number is Greater")

if option == 3:
        print("\nFactorial Calculation Selected")
        n = int(input("Enter The Number: "))
        fact = 1

        for i in range(1,n+1):
            fact = fact*i
        print("\nThe Factorial of", n, "is", fact)

if option == 4:
        print("\nTable Selected")
        num = int(input("Display multiplication table of? "))

        for i in range(1, 11):
            print(num, 'x', i, '=', num * i)

input("Press enter to exit;)")