import logging

logging.basicConfig(level=logging.ERROR)

try:
    x = 1 / 0
except Exception as e:
    logging.error(f"Exception type: {type(e).__name__}, Message: {e}")
