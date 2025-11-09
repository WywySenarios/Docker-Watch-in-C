You have two options to make this work:
1. tty: false & fflush(stdout);
Set `tty: false` in the docker-compose file, nested directly under the `app` service, or remove the line associated with `tty` in the docker-compose file. Then go to app/app.c and ensure that there's `fflush(stdout);` after every print statement.
2. tty: true & no flushing
Set `tty: true` in the docker-compose file, nested directly under the `app` service.

The `fflush(stdout);` lines are no longer needed.