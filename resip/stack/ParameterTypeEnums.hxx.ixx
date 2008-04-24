// .bwc. This is the file you edit when you want to add native support for a
// parameter to the stack. A few basic facts about how this file is used:
// * Only lines beginning with "defineParam" are processed in any way.
// * The syntax expected is defineParam(<1>, "<2>", <3>, "<4>")
//    1: The postfix for the accessor token; ie dAlg -> p_dAlg
//    2: The name of the parameter, in lower-case, as it will appear on the wire
//    3: The class that will be used to represent the parameter's value
//    4: A reference to where the param was defined
// If you have edited this file, you then need to run updateParameters.sh.

data,
control,
mobility,
description,
events,
priority,
methods,
schemes,
application,
video,
language,
type,
isFocus,
actor,
text,
extensions,
Instance,
regid,
ob,
pubGruu,
tempGruu,
gruu,
accessType,
algorithm,
boundary,
branch,
charset,
cnonce,
comp,
dAlg,
dQop,
dVer,
directory,
domain,
duration,
expiration,
expires,
filename,
fromTag,
handling,
id,
lr,
maddr,
method,
micalg,
mode,
name,
nc,
nonce,
opaque,
permission,
protocol,
purpose,
q,
realm,
reason,
received,
response,
retryAfter,
rinstance,
rport,
server,
site,
size,
smimeType,
stale,
tag,
toTag,
transport,
ttl,
uri,
user,
extension,
username,
earlyOnly,
refresher,
profileType,
vendor,
model,
version,
effectiveBy,
document,
appId,
networkUser,
url,
qop,
sigcompId,
// ?bwc? Do we use this any more?
addTransport,