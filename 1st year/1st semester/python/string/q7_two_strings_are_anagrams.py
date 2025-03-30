"""Check if two strings are anagrams of each other."""
def are_anagrams(s1, s2):
    if len(s1) != len(s2):
        return False
    sorted_s1 = sorted(s1)
    sorted_s2 = sorted(s2)
    return sorted_s1 == sorted_s2

# Example usage:
print(are_anagrams("listen", "silent"))
