class InvalidPasswordError(Exception):
    def __init__(self, password):
        message = f"Password '{password}' is invalid (must be 8+ characters)"
        super().__init__(message)

def validate_password(password):
    if len(password) < 8:
        raise InvalidPasswordError(password)
    else:
        print("Password is valid")

try:
    validate_password("short")
except InvalidPasswordError as e:
    print(e)
