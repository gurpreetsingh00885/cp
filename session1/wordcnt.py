# http://www.spoj.com/problems/WORDCNT/

def main():
	T = int(input())

	for _ in range(T):
		words = input().split(' ')
		count = 0
		counts = []
		last = words[0]
		for word in words:
			if len(word)==len(last):
				count += 1
			else:
				counts.append(count)
				count = 1
				last = word
		print(max(counts))

main()