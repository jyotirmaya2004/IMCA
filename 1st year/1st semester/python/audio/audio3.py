import pyttsx3
engine =pyttsx3.init()
engine.say(f"Enter your name : ")
engine.runAndWait()
name=input("Enter your name : ")
engine.say(f"hi,{name}")
engine.runAndWait()
engine.say(f"Thank you")
engine.runAndWait()