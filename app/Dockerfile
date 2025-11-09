FROM gcc:latest AS dev

COPY . /usr/src/app

WORKDIR /usr/src/app

RUN make
#gcc -o app app.c

CMD ["./app"]