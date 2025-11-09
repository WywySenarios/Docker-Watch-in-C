FROM gcc:latest AS dev

COPY . /usr/src/app

WORKDIR /usr/src/app

RUN make

CMD ["./app"]