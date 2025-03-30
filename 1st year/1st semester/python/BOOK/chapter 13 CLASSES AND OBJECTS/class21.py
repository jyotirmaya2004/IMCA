import time

class Timer:
    def __init__(self):
        self.start_time = None
        self.end_time = None

    def start(self):
        self.start_time = time.time()
        print("Timer started...")

    def stop(self):
        if self.start_time is None:
            print("Timer hasn't started yet!")
            return
        self.end_time = time.time()
        elapsed = self.end_time - self.start_time
        print(f"Timer stopped. Elapsed time: {elapsed:.2f} seconds")

timer = Timer()
timer.start()
time.sleep(5)  # Simulating a delay
timer.stop()
