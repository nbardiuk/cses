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
	@ bb ./tests/run-tests.clj $*

.PHONY: test
test: test-a_plus_b test-weird_algorithm test-permutations
