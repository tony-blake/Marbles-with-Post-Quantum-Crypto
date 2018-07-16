#!/bin/sh

#Regenerate the CRL to avoid the expired CRL error
openssl ca -config CA/estExampleCA.cnf -gencrl -out CA/estCA/crl.pem
cat CA/trustedcerts.crt CA/estCA/crl.pem > US901/trustedcertsandcrl.crt

#Setup the trust anchor
export EST_TRUSTED_CERTS=US901/trustedcertsandcrl.crt
export EST_CACERTS_RESP=CA/estCA/cacert.crt
export EST_OPENSSL_CACONFIG=CA/estExampleCA.cnf

#Start the EST server
../../example/server/estserver -n -l -p 8089 -c CA/estCA/private/estservercertandkey.pem -k CA/estCA/private/estservercertandkey.pem -r estrealm -d 60 -v
