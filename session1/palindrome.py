# https://www.hackerrank.com/challenges/palindrome-index
def checkPalin(string):
	x = 0
	if len(string) % 2:
		x = 1
	return string[0:len(string)//2] == string[len(string)//2+x:][::-1]

def main():
	T = int(input())

	for _ in range(T):
		s = input()
		found = False
		for i in range(len(s)):
			if checkPalin(s[:i] + s[i+1:]):
				found = True
				break
		if found:
			print(i)
		else:
			print(-1)

	return 0

main()