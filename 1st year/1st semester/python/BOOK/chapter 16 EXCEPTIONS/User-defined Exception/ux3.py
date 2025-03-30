class InvalidEmailError(Exception):
    pass

def validate_email(email):
    if "@" not in email:
        raise InvalidEmailError("Invalid email address")
    else:
        print("Email address is valid")

try:
    validate_email("invalid_email")
except InvalidEmailError as e:
    print(e)
