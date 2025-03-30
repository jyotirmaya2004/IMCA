class PrimeChecker:
    @staticmethod
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n ** 0.5) + 1):
            if n % i == 0:
                return False
        return True

print(PrimeChecker.is_prime(11))  # Output: True
print(PrimeChecker.is_prime(10))  # Output: False
