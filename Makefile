all:
	@echo $(.LOADED)
	@echo Answer to life, the universe and everything: $(answer )

load answer.so

answer.so: answer.c
	$(CC) -shared -fPIC -o $@ $<
