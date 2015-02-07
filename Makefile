all: sequenbaul

sequenbaul:
	cd src/ ; qmake && make
	cp src/sequenbaul .

clean:
	make -C src/ clean
	rm src/sequenbaul
	rm src/Makefile
