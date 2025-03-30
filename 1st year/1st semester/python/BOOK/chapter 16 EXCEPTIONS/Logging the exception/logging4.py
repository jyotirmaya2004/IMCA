import logging

logging.basicConfig(level=logging.ERROR)

try:
    x = 1 / 0
except Exception as e:
    logging.error(f"Exception occurred: {e}", exc_info=True)


