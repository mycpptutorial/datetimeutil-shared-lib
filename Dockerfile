FROM ubuntu:18.10
RUN apt-get update
RUN apt-get -y install g++
RUN apt-get -y install cmake
COPY . /usr/src/mycpptutorial/datetimeutil-shared-lib
RUN rm -rf /usr/src/mycpptutorial/datetimeutil-shared-lib/build > /dev/null
RUN mkdir -p /usr/src/mycpptutorial/datetimeutil-shared-lib/build
WORKDIR /usr/src/mycpptutorial/datetimeutil-shared-lib/build
RUN cmake ..
RUN make
