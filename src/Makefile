CXX=g++
CXXFLAGS=-std=c++17 -Wall -Werror -Wextra -pedantic -UQT_MACRO
GCOV=--coverage
OUTNAME=tests

.PHONY: install
install: tests cmake build

.PHONY: cmake
cmake:
	
	mkdir -p build && cd build && cmake ..

.PHONY: build
build: cmake
	cd build && make

.PHONY: tests
test: model/tests/unit_tests.cc
	gcc $< -lstdc++ -lgtest -std=c++17 -Wall -Werror -Wextra -o unit_tests
	cd model/tests
	./unit_tests

.PHONY: leaks
leaks: model/tests/unit_tests.cc
	gcc $< -lstdc++ -lgtest -std=c++17 -Wall -Werror -Wextra -o unit_tests
	cd model/tests
	leaks --atExit -- ./unit_tests

.PHONY: open
open:
	open build/output/amd64/view/qcp/SmartCalc.app

.PHONY: clean
clean:
	rm -rf build ./*.o ./*.a ./a.out ./*.gcno ./*.gcda ./gcov_report *.info ./*.info unit_tests

.PHONY: uninstall
uninstall:
	@rm -rf build*

.PHONY: dist
dist:
	@tar -cf calc.tar *.cc *.h Makefile build

.PHONY: dvi
dvi:
	open ../materials/doc.tex
	# pdflatex ../materials/doc.tex