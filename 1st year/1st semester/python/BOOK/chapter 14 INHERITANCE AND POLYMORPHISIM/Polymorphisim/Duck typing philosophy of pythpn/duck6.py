class EmailNotification:
    def __init__(self, recipient, message):
        self.recipient = recipient
        self.message = message

    def send(self):
        print(f"Sending email to {self.recipient}: {self.message}")

class SMSNotification:
    def __init__(self, recipient, message):
        self.recipient = recipient
        self.message = message

    def send(self):
        print(f"Sending SMS to {self.recipient}: {self.message}")

class PushNotification:
    def __init__(self, recipient, message):
        self.recipient = recipient
        self.message = message

    def send(self):
        print(f"Sending push notification to {self.recipient}: {self.message}")

def send_notification(notification):
    notification.send()

# Create different types of notifications
email = EmailNotification("john@example.com", "Hello, John!")
sms = SMSNotification("+1234567890", "Hello, John!")
push = PushNotification("john@example.com", "Hello, John!")

# Send notifications using the same function
send_notification(email)
send_notification(sms)
send_notification(push)
