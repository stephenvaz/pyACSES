with open('test.txt', 'r') as f:
        wordcount = 0
        for line in f:
            wordcount += len(line.split())
        print(f"Word count: {wordcount}")
