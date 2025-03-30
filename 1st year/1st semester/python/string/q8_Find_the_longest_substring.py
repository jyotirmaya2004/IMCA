"""Find the longest substring without repeating characters."""
def longest_substring(s):
    start = 0
    max_len = 0
    used_chars = {}
    for end in range(len(s)):
        if s[end] in used_chars and used_chars[s[end]] >= start:
            start = used_chars[s[end]] + 1
        used_chars[s[end]] = end
        max_len = max(max_len, end - start + 1)
    return max_len

# Example usage:
print(longest_substring("abcabcbb"))
