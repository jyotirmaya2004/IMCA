def role_required(role):
    def decorator(func):
        def wrapper(user, *args, **kwargs):
            if user.get("role") == role:
                return func(user, *args, **kwargs)
            else:
                print("Access Denied!")
        return wrapper
    return decorator

@role_required("admin")
def admin_function(user):
    print(f"Welcome {user['username']}, you have admin access!")

user = {"username": "Alice", "role": "user"}
admin_function(user)  # Access Denied

user["role"] = "admin"
admin_function(user)  # Access Granted
