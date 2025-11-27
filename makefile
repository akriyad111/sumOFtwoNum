all: build

build:
	gcc main.c -o app

test:
	gcc test.c -o test_app
	./test_app

clean:
	rm -f app test_app
