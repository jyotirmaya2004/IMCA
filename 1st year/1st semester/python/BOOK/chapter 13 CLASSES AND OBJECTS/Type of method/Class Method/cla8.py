class Logger:
    log_level = "INFO"  # Class variable

    @classmethod
    def set_log_level(cls, level):
        cls.log_level = level

Logger.set_log_level("DEBUG")
print(Logger.log_level)  # Output: DEBUG
