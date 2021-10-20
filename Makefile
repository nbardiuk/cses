.POSIX:
CC = g++
CFLAGS = -std=c++11 -O2 -Wall

.PHONY: clean
clean:
	@ rm -rf ./target

target:
	@ mkdir -p target

.PRECIOUS: ./target/%
./target/%: src/%.cc target
	@ $(CC) $(CFLAGS) -o $@ $<

.PHONY: test-%
test-%: ./target/%
	@ bb ./tests/run-tests.clj ./target/$* ./tests/$*.edn

.PHONY: test
test: $(patsubst tests/%.edn,test-%,$(wildcard tests/*.edn))
