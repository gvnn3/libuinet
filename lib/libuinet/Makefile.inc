#
# Definitions needed when building a consumer of libuinet
#

LDADD+= -lpthread
ifeq ($(shell uname -s),Linux)
LDADD+= -lrt
LDADD+= -lcrypto
else
LDADD+= -lssl
endif
