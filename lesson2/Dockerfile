FROM alpine:3.3

RUN echo "@testing http://dl-4.alpinelinux.org/alpine/edge/testing" >> /etc/apk/repositories \
	&& apk add --update \
		php \
	&& rm -rf /var/cache/apk/*

EXPOSE 80

ADD hello.php /var/www/index.php

CMD ["php","-S","0.0.0.0:80","-t","/var/www/"]
