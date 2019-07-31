all:
	@echo $(.LOADED)
	@echo $(answer "What is 2 + pi?")
	@echo $(answer "How many roads must a man walk down?")
	@echo $(answer "Answer to life, the universe and everything:")
	@echo $(answer "The answer is always")

load answer.so

answer.so: answer.c
	$(CC) -shared -fPIC -o $@ $<
