#Password Validator

def verify(pwd):
    special_chars = ['$', '@', '#']
    if (len(pwd) < 6):
        return "⨯ Password cannot be smaller than 6"
    elif (len(pwd) > 16):
        return "⨯ Password cannot exceed 16 charachters"
    elif not any (spc in special_chars for spc in pwd):
        return "⨯ Password must contain special characters"
    elif not any (ch.isdigit() for ch in pwd):
        return "⨯ Password must contain a number"
    elif not any (ch.isupper() for ch in pwd):
        return "⨯ Password must contain an upper case letter"
    elif not any (ch.islower() for ch in pwd):
        return "⨯ Password must contain a lower case letter"
    return "✔ Password Accepted"


pwd = input("Enter the password 👉 ")
print(verify(pwd))
