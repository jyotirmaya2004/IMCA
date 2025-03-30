class Device:
    def __init__(self, brand):
        self.brand = brand

    def device_info(self):
        return f"Device brand: {self.brand}"

class Phone(Device):
    def __init__(self, brand, number):
        super().__init__(brand)
        self.number = number

    def call(self, contact):
        return f"Calling {contact} from {self.number}."

class Smartphone(Phone):
    def __init__(self, brand, number, os):
        super().__init__(brand, number)
        self.os = os

    def install_app(self, app_name):
        return f"Installing {app_name} on {self.brand} smartphone running {self.os}."

smartphone = Smartphone("Samsung", "123-456-7890", "Android")
print(smartphone.device_info())     # Output: Device brand: Samsung
print(smartphone.call("Alice"))     # Output: Calling Alice from 123-456-7890.
print(smartphone.install_app("WhatsApp"))  # Output: Installing WhatsApp on Samsung smartphone running Android.
