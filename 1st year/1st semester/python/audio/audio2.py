import pyttsx3

engine = pyttsx3.init()

# Customize voice, rate, and volume
voices = engine.getProperty('voices')
engine.setProperty('voice', voices[1].id)  # Female voice
engine.setProperty('rate', 150)  # Slow down the speech
engine.setProperty('volume', 0.9)  # Set volume to 90%
print("Enter your name : ",end="")
engine.say("Enter your name")
engine.runAndWait()
name=input()
# Speak the text
print(f"Hello,{name}. Welcome to Python programming.")
engine.say(f"Hello,{name}. Welcome to Python programming.")
engine.runAndWait()
