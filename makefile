all: build

build:
	gcc main.c -o app

test:
	gcc test.c main.c -o test_app
	./test_app

clean:
	rm -f app test_app
