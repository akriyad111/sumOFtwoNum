all: build

build:
	gcc main.c add.c -o app

test:
	gcc test.c add.c -o test_app
	./test_app

clean:
	rm -f app test_app
