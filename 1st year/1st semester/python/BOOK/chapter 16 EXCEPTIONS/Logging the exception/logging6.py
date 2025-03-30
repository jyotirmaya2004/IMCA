import logging
import os

# Create a logger
logger = logging.getLogger(__name__)
logger.setLevel(logging.DEBUG)

# Create a file handler
file_handler = logging.FileHandler('exceptions.log')
file_handler.setLevel(logging.DEBUG)

# Create a console handler
console_handler = logging.StreamHandler()
console_handler.setLevel(logging.INFO)

# Create a formatter
formatter = logging.Formatter('%(asctime)s - %(name)s - %(levelname)s - %(message)s')

# Add the formatter to the handlers
file_handler.setFormatter(formatter)
console_handler.setFormatter(formatter)

# Add the handlers to the logger
logger.addHandler(file_handler)
logger.addHandler(console_handler)

def divide_numbers(num1, num2):
    try:
        result = num1 / num2
        logger.info(f"Division successful: {num1} / {num2} = {result}")
        return result
    except ZeroDivisionError as e:
        logger.error(f"ZeroDivisionError: {e}")
        raise
    except TypeError as e:
        logger.error(f"TypeError: {e}")
        raise

def read_file(file_path):
    try:
        with open(file_path, 'r') as file:
            contents = file.read()
            logger.info(f"File read successfully: {file_path}")
            return contents
    except FileNotFoundError as e:
        logger.error(f"FileNotFoundError: {e}")
        raise
    except PermissionError as e:
        logger.error(f"PermissionError: {e}")
        raise

def main():
    try:
        num1 = 10
        num2 = 0
        result = divide_numbers(num1, num2)
        print(result)

        file_path = 'non_existent_file.txt'
        contents = read_file(file_path)
        print(contents)
    except Exception as e:
        logger.error(f"Exception: {e}")

if __name__ == '__main__':
    main()
