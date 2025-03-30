import logging

logger = logging.getLogger(__name__)
logger.setLevel(logging.ERROR)

handler = logging.FileHandler('exceptions.log')
handler.setLevel(logging.ERROR)

formatter = logging.Formatter('%(asctime)s - %(name)s - %(levelname)s - %(message)s')
handler.setFormatter(formatter)

logger.addHandler(handler)

try:
    x = 1 / 0
except Exception as e:
    logger.error(f"Exception occurred: {e}", exc_info=True)


