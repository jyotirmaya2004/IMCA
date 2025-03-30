
import logging

# Create a logger
logger = logging.getLogger(__name__)

# Set the logging level to NOTSET (0) to allow all messages to be logged
logger.setLevel(logging.NOTSET)

# Create a file handler to log messages to a file
file_handler = logging.FileHandler('log_file.log')
file_handler.setLevel(logging.NOTSET)

# Create a console handler to log messages to the console
console_handler = logging.StreamHandler()
console_handler.setLevel(logging.NOTSET)

# Create a formatter to specify the format of the log messages
formatter = logging.Formatter('%(asctime)s - %(name)s - %(levelname)s - %(message)s')

# Add the formatter to the handlers
file_handler.setFormatter(formatter)
console_handler.setFormatter(formatter)

# Add the handlers to the logger
logger.addHandler(file_handler)
logger.addHandler(console_handler)

# Log messages at different levels
logger.critical("This is a critical message.")
logger.error("This is an error message.")
logger.warning("This is a warning message.")
logger.info("This is an informational message.")
logger.debug("This is a debug message.")

# Log a message at the NOTSET level
logger.log(logging.NOTSET, "This is a NOTSET message.")

# Log a message at a custom level
logger.log(25, "This is a custom message at level 25.")

