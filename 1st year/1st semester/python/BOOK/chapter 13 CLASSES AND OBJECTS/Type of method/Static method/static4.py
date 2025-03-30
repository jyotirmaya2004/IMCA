class EmailValidator:
    @staticmethod
    def is_valid_email(email):
        return "@" in email and email.endswith(".com")

print(EmailValidator.is_valid_email("test@gmail.com"))  # Output: True
print(EmailValidator.is_valid_email("invalid_email"))   # Output: False
