# https://www.hackerrank.com/challenges/anagram

def main():
	t = int(input())
	for _ in range(t):
		count = 0
		s = input()
		if len(s) and len(s) % 2 == 1:
			print(-1)
			continue
		s1 = s[:len(s)//2]
		s2 = s[len(s)//2:]
		letters = set(list(s2))
		for letter in letters:
			if(s2.count(letter)>s1.count(letter)):
				count += s2.count(letter)-s1.count(letter)
		print(count)
	return 0
main()