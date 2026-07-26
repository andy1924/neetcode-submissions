class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:
        is_subset = []

        for word in words:
            for other in words:
                if word != other and word in other:
                    is_subset.append(word)
                    break

        return is_subset