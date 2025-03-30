import logging

# Configure logging
logging.basicConfig(filename='app.log', filemode='w', format='%(name)s - %(levelname)s - %(message)s')

try:
    # Code that may raise an exception
    result = 10 / 0
except Exception as e:
    # Log the exception
    logging.error("Exception occurred", exc_info=True)