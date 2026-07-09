PORTNAME=	rebar3
CATEGORIES=	devel
OTP_MAJOR?=	29
PKGNAMESUFFIX=	-custom${OTP_MAJOR}
COMMENT=	rebar3 with ${OTP_MAJOR}

MASTERDIR=      ${.CURDIR}/../rebar3

post-patch:
	${REINPLACE_CMD} -i '' "s@#!/usr/bin/env escript@#!/usr/local/lib/erlang${OTP_MAJOR}/bin/escript@" ${WRKSRC}/bootstrap

.include "${MASTERDIR}/Makefile"

BUILD_DEPENDS=	${LOCALBASE}/lib/erlang${OTP_MAJOR}/bin/erl:lang/erlang-runtime${OTP_MAJOR}
RUN_DEPENDS=	${LOCALBASE}/lib/erlang${OTP_MAJOR}/bin/erl:lang/erlang-runtime${OTP_MAJOR}

