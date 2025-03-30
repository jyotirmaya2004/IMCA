class InvalidAgeError(Exception):
    pass

def validate_age(age):
    if age < 18:
        raise InvalidAgeError("Age must be 18 or older")
    else:
        print("Age is valid")

try:
    validate_age(15)
except InvalidAgeError as e:
    print(e)
