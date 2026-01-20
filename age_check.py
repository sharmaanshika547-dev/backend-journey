def  check_age(age):
    if age>=18:
       return "Allowed"

    else:
       return "not allowed" 

age = int(input("Enter age"))
result =  check_age(age)
print(result)
