import re 

def checkpass(password):
  if 6 <= len(password) <= 16:
    if re.search("[a-z]", password) and re.search("[A-Z]",password):
      if re.search("[0-9]",password):
        if re.search("[$@#]",password): 
          return True 

  return False

Paswrd = input("Create your password: ")
print(checkpass(Paswrd))
