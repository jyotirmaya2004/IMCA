def authenticate(user):
    def decorator(func):
        def wrapper(*args, **kwargs):
            if user.get("authenticated", False):
                return func(*args, **kwargs)
            else:
                print("Access Denied!")
        return wrapper
    return decorator

user_data = {"username": "admin", "authenticated": False}

@authenticate(user_data)
def secret_data():
    print("This is top-secret data!")

secret_data()  # Access denied

user_data["authenticated"] = True
secret_data()  # Access granted
