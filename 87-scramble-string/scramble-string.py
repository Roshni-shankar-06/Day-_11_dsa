class Solution:
  @functools.lru_cache(None)
  def isScramble(self, s1: str, s2: str) -> bool:
    if s1 == s2:
      return True
    if collections.Counter(s1) != collections.Counter(s2):
      return False


