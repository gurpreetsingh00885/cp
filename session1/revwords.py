# https://leetcode.com/problems/reverse-words-in-a-string/description/

def main():
	s = input()
	print(" ".join([x.strip() for x in s.split(' ') if x!=''][::-1]))

main()