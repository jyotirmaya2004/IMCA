class FileContextManager:
    def __enter__(self):
        return "File opened"

    def __exit__(self, exc_type, exc_val, exc_tb):
        return "File closed"

class LockContextManager:
    def __enter__(self):
        return "Lock acquired"

    def __exit__(self, exc_type, exc_val, exc_tb):
        return "Lock released"

def use_context_manager(context_manager):
    with context_manager as resource:
        print(resource)

file_context_manager = FileContextManager()
lock_context_manager = LockContextManager()

use_context_manager(file_context_manager)  # Output: File opened
use_context_manager(lock_context_manager)  # Output: Lock acquired

