# Debug Output for a Subscribe and Download All Command

The following is the debugging output of scPOD for subscribing to a podcast 
(the BBC's "Body On The Moor") and downloading all the items.  The command 
used was `scpod subscribe 'http://www.bbc.co.uk/programmes/p03wy14r/episodes/downloads.rss' download all`.  
The podcast was successfully added to the database and all items were 
downloaded.

## Debug Output:

```
Executing Command '/usr/bin/wget --no-check-certificate -O"/mnt/sda1/audio/podcasts/./new_feed.xml" http://www.bbc.co.uk/programmes/p03wy14r/episodes/downloads.rss'
Returned value '0'
Download Successful!
Found element "xml"[1]
Attribute [of 'xml'] 'version' = '"1.0"'
Attribute [of 'xml'] 'encoding' = '"UTF-8"?'
End of element "xml".
STAG: 'xml'
Found element "rss"[1]
Attribute [of 'rss'] 'version' = '"2.0"'
Attribute [of 'rss'] 'xmlns:media' = '"http://search.yahoo.com/mrss/"'
Attribute [of 'rss'] 'xmlns:atom' = '"http://www.w3.org/2005/Atom"'
Attribute [of 'rss'] 'xmlns:ppg' = '"http://bbc.co.uk/2009/01/ppgRss"'
Attribute [of 'rss'] 'xmlns:itunes' = '"http://www.itunes.com/dtds/podcast-1.0.dtd"'
[2]Found element "channel"
[3]Found element "title"
Element data: "Body on the Moor"
End of element "title".
	TITLE
[3]Found element "link"
Element data: "http://www.bbc.co.uk/programmes/p03wy14r"
End of element "link".
	LINK
[3]Found element "description"
Element data: "A body is found on the moor, with no clue as to who the man was. And he died from poisoning. Who is he? Why was he there? Jon Manel follows the police inquiry for BBC Radio 4."
End of element "description".
Creating Channel...
[3]Found element "itunes:summary"
Element data: "A body is found on the moor, with no clue as to who the man was. And he died from poisoning. Who is he? Why was he there? Jon Manel follows the police inquiry for BBC Radio 4."
End of element "itunes:summary".
[3]Found element "itunes:author"
Element data: "BBC Radio 4"
End of element "itunes:author".
[3]Found element "itunes:owner"
[4]Found element "itunes:name"
Element data: "BBC"
End of element "itunes:name".
[4]Found element "itunes:email"
Element data: "RadioMusic.Support@bbc.co.uk"
End of element "itunes:email".
Element data: ""
End of element "itunes:owner".
[3]Found element "language"
Element data: "en"
End of element "language".
Found element "ppg:seriesDetails"[3]
Attribute [of 'ppg:seriesDetails'] 'frequency' = '"occasionally"'
Attribute [of 'ppg:seriesDetails'] 'daysLive' = '"-1"'
End of element "ppg:seriesDetails".
STAG: 'ppg:seriesDetails'
Found element "ppg:systemRef"[3]
Attribute [of 'ppg:systemRef'] 'systemId' = '"pid.brand"'
Attribute [of 'ppg:systemRef'] 'key' = '"p03wy14r"'
End of element "ppg:systemRef".
STAG: 'ppg:systemRef'
Found element "ppg:systemRef"[3]
Attribute [of 'ppg:systemRef'] 'systemId' = '"pid.genre"'
Attribute [of 'ppg:systemRef'] 'key' = '"C00079"'
End of element "ppg:systemRef".
STAG: 'ppg:systemRef'
Found element "ppg:network"[3]
Attribute [of 'ppg:network'] 'id' = '"radio4"'
Attribute [of 'ppg:network'] 'name' = '"BBC Radio 4"'
End of element "ppg:network".
STAG: 'ppg:network'
[3]Found element "image"
[4]Found element "url"
Element data: "http://ichef.bbci.co.uk/images/ic/3000x3000/p03xpqbg.jpg"
End of element "url".
image url: above epn is image
[4]Found element "title"
Element data: "Body on the Moor"
End of element "title".
	TITLE
image title: above epn is image
[4]Found element "link"
Element data: "http://www.bbc.co.uk/programmes/p03wy14r"
End of element "link".
	LINK
image link: above epn is image
Element data: ""
End of element "image".
Found element "itunes:image"[3]
Attribute [of 'itunes:image'] 'href' = '"http://ichef.bbci.co.uk/images/ic/3000x3000/p03xpqbg.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
[3]Found element "copyright"
Element data: "(C) BBC 2017"
End of element "copyright".
[3]Found element "pubDate"
Element data: "Wed, 15 Mar 2017 00:00:00 +0000"
End of element "pubDate".
Found element "itunes:category"[3]
Attribute [of 'itunes:category'] 'text' = '"News &amp; Politics"'
End of element "itunes:category".
STAG: 'itunes:category'
[3]Found element "itunes:explicit"
Element data: "no"
End of element "itunes:explicit".
Found element "media:rating"[3]
Attribute [of 'media:rating'] 'scheme' = '"urn:simple"'
Element data: "nonadult"
End of element "media:rating".
Found element "atom:link"[3]
Attribute [of 'atom:link'] 'href' = '"http://www.bbc.co.uk/programmes/p03wy14r/episodes/downloads.rss"'
Attribute [of 'atom:link'] 'rel' = '"self"'
Attribute [of 'atom:link'] 'type' = '"application/rss+xml"'
End of element "atom:link".
STAG: 'atom:link'
[3]Found element "item"
[4]Found element "title"
Element data: "Episode 7: Solved"
End of element "title".
	TITLE
[4]Found element "description"
Element data: "The investigation receives some good news but there are yet more questions. What can we find out about the man whose body was on the moor?"
End of element "description".
[4]Found element "itunes:subtitle"
Element data: "Discovering the name of the body on the moor."
End of element "itunes:subtitle".
[4]Found element "itunes:summary"
Element data: "The investigation receives some good news but there are yet more questions. What can we find out about the man whose body was on the moor?"
End of element "itunes:summary".
[4]Found element "pubDate"
Element data: "Wed, 15 Mar 2017 00:00:00 +0000"
End of element "pubDate".
[4]Found element "itunes:duration"
Element data: "607"
End of element "itunes:duration".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"http://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/http/vpid/p04wyvzw.mp3"'
Attribute [of 'enclosure'] 'length' = '"9712000"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "9712000 (9712000)
Found element "ppg:enclosureLegacy"[4]
Attribute [of 'ppg:enclosureLegacy'] 'url' = '"http://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/http/vpid/p04wyvzw.mp3"'
Attribute [of 'ppg:enclosureLegacy'] 'length' = '"9712000"'
Attribute [of 'ppg:enclosureLegacy'] 'type' = '"audio/mpeg"'
End of element "ppg:enclosureLegacy".
STAG: 'ppg:enclosureLegacy'
Found element "ppg:enclosureSecure"[4]
Attribute [of 'ppg:enclosureSecure'] 'url' = '"https://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/https/vpid/p04wyvzw.mp3"'
Attribute [of 'ppg:enclosureSecure'] 'length' = '"9712000"'
Attribute [of 'ppg:enclosureSecure'] 'type' = '"audio/mpeg"'
End of element "ppg:enclosureSecure".
STAG: 'ppg:enclosureSecure'
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "urn:bbc:podcast:p04wyw58"
End of element "guid".
[4]Found element "link"
Element data: "http://www.bbc.co.uk/programmes/p04wyw58"
End of element "link".
	LINK
[4]Found element "itunes:explicit"
Element data: "clean"
End of element "itunes:explicit".
Found element "media:content"[4]
Attribute [of 'media:content'] 'url' = '"http://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/http/vpid/p04wyvzw.mp3"'
Attribute [of 'media:content'] 'fileSize' = '"9712000"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'medium' = '"audio"'
Attribute [of 'media:content'] 'expression' = '"full"'
Attribute [of 'media:content'] 'duration' = '"607"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "itunes:author"
Element data: "BBC Radio 4"
End of element "itunes:author".
[4]Found element "ppg:canonical"
Element data: "/programmes/p04wyw58"
End of element "ppg:canonical".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
[4]Found element "title"
Element data: "Episode 6: A year on"
End of element "title".
	TITLE
[4]Found element "description"
Element data: "A year after "Neil Dovestones" was found, the investigation has become truly multi-national, with links to Pakistan, the Netherlands and Slovakia. 

Jon Manel hears how the police have been trying to make progress with fingerprints, DNA, and isotope analysis."
End of element "description".
[4]Found element "itunes:subtitle"
Element data: "It is 12 months since "Neil" was discovered. Can scientists solve the mystery?"
End of element "itunes:subtitle".
[4]Found element "itunes:summary"
Element data: "A year after "Neil Dovestones" was found, the investigation has become truly multi-national, with links to Pakistan, the Netherlands and Slovakia. 

Jon Manel hears how the police have been trying to make progress with fingerprints, DNA, and isotope analysis."
End of element "itunes:summary".
[4]Found element "pubDate"
Element data: "Mon, 12 Dec 2016 16:56:00 +0000"
End of element "pubDate".
[4]Found element "itunes:duration"
Element data: "557"
End of element "itunes:duration".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"http://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/http/vpid/p04l46xf.mp3"'
Attribute [of 'enclosure'] 'length' = '"8912000"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "8912000 (8912000)
Found element "ppg:enclosureLegacy"[4]
Attribute [of 'ppg:enclosureLegacy'] 'url' = '"http://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/http/vpid/p04l46xf.mp3"'
Attribute [of 'ppg:enclosureLegacy'] 'length' = '"8912000"'
Attribute [of 'ppg:enclosureLegacy'] 'type' = '"audio/mpeg"'
End of element "ppg:enclosureLegacy".
STAG: 'ppg:enclosureLegacy'
Found element "ppg:enclosureSecure"[4]
Attribute [of 'ppg:enclosureSecure'] 'url' = '"https://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/https/vpid/p04l46xf.mp3"'
Attribute [of 'ppg:enclosureSecure'] 'length' = '"8912000"'
Attribute [of 'ppg:enclosureSecure'] 'type' = '"audio/mpeg"'
End of element "ppg:enclosureSecure".
STAG: 'ppg:enclosureSecure'
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "urn:bbc:podcast:p04l46xc"
End of element "guid".
[4]Found element "link"
Element data: "http://www.bbc.co.uk/programmes/p04l46xc"
End of element "link".
	LINK
[4]Found element "itunes:explicit"
Element data: "clean"
End of element "itunes:explicit".
Found element "media:content"[4]
Attribute [of 'media:content'] 'url' = '"http://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/http/vpid/p04l46xf.mp3"'
Attribute [of 'media:content'] 'fileSize' = '"8912000"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'medium' = '"audio"'
Attribute [of 'media:content'] 'expression' = '"full"'
Attribute [of 'media:content'] 'duration' = '"557"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "itunes:author"
Element data: "BBC Radio 4"
End of element "itunes:author".
[4]Found element "ppg:canonical"
Element data: "/programmes/p04l46xc"
End of element "ppg:canonical".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
[4]Found element "title"
Element data: "Episode 5: A breakthrough"
End of element "title".
	TITLE
[4]Found element "description"
Element data: "The man they are calling Neil Dovestones remains in the mortuary in Oldham but the police continue to make progress. The clue inside his left leg proves to be even more helpful than anticipated.



With Jon Manel.



If you have any information which you believe could help the police inquiry, you can reach DS Coleman's team by email: dovestones@gmp.police.uk 



You can contact Jon at jon.manel@bbc.co.uk"
End of element "description".
[4]Found element "itunes:subtitle"
Element data: "Detective Sergeant John Coleman receives the report he has been waiting for."
End of element "itunes:subtitle".
[4]Found element "itunes:summary"
Element data: "The man they are calling Neil Dovestones remains in the mortuary in Oldham but the police continue to make progress. The clue inside his left leg proves to be even more helpful than anticipated.



With Jon Manel.



If you have any information which you believe could help the police inquiry, you can reach DS Coleman's team by email: dovestones@gmp.police.uk 



You can contact Jon at jon.manel@bbc.co.uk"
End of element "itunes:summary".
[4]Found element "pubDate"
Element data: "Thu, 23 Jun 2016 16:04:00 +0000"
End of element "pubDate".
[4]Found element "itunes:duration"
Element data: "583"
End of element "itunes:duration".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"http://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/http/vpid/p03z7twp.mp3"'
Attribute [of 'enclosure'] 'length' = '"9328000"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "9328000 (9328000)
Found element "ppg:enclosureLegacy"[4]
Attribute [of 'ppg:enclosureLegacy'] 'url' = '"http://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/http/vpid/p03z7twp.mp3"'
Attribute [of 'ppg:enclosureLegacy'] 'length' = '"9328000"'
Attribute [of 'ppg:enclosureLegacy'] 'type' = '"audio/mpeg"'
End of element "ppg:enclosureLegacy".
STAG: 'ppg:enclosureLegacy'
Found element "ppg:enclosureSecure"[4]
Attribute [of 'ppg:enclosureSecure'] 'url' = '"https://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/https/vpid/p03z7twp.mp3"'
Attribute [of 'ppg:enclosureSecure'] 'length' = '"9328000"'
Attribute [of 'ppg:enclosureSecure'] 'type' = '"audio/mpeg"'
End of element "ppg:enclosureSecure".
STAG: 'ppg:enclosureSecure'
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "urn:bbc:podcast:p03z7twh"
End of element "guid".
[4]Found element "link"
Element data: "http://www.bbc.co.uk/programmes/p03z7twh"
End of element "link".
	LINK
[4]Found element "itunes:explicit"
Element data: "clean"
End of element "itunes:explicit".
Found element "media:content"[4]
Attribute [of 'media:content'] 'url' = '"http://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/http/vpid/p03z7twp.mp3"'
Attribute [of 'media:content'] 'fileSize' = '"9328000"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'medium' = '"audio"'
Attribute [of 'media:content'] 'expression' = '"full"'
Attribute [of 'media:content'] 'duration' = '"583"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "itunes:author"
Element data: "BBC Radio 4"
End of element "itunes:author".
[4]Found element "ppg:canonical"
Element data: "/programmes/p03z7twh"
End of element "ppg:canonical".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
[4]Found element "title"
Element data: "Episode 4: The clue inside the leg"
End of element "title".
	TITLE
[4]Found element "description"
Element data: "Why did the man they are now calling Neil travel such a long way to get to the moorland track where he was found?



To have any chance of finding out who he is, the police need a decent lead. And they find one. Jon explores how that could help.



With Jon Manel."
End of element "description".
[4]Found element "itunes:subtitle"
Element data: "A vital clue is discovered in the body."
End of element "itunes:subtitle".
[4]Found element "itunes:summary"
Element data: "Why did the man they are now calling Neil travel such a long way to get to the moorland track where he was found?



To have any chance of finding out who he is, the police need a decent lead. And they find one. Jon explores how that could help.



With Jon Manel."
End of element "itunes:summary".
[4]Found element "pubDate"
Element data: "Tue, 14 Jun 2016 18:00:00 +0000"
End of element "pubDate".
[4]Found element "itunes:duration"
Element data: "572"
End of element "itunes:duration".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"http://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/http/vpid/p03yk0g3.mp3"'
Attribute [of 'enclosure'] 'length' = '"9152000"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "9152000 (9152000)
Found element "ppg:enclosureLegacy"[4]
Attribute [of 'ppg:enclosureLegacy'] 'url' = '"http://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/http/vpid/p03yk0g3.mp3"'
Attribute [of 'ppg:enclosureLegacy'] 'length' = '"9152000"'
Attribute [of 'ppg:enclosureLegacy'] 'type' = '"audio/mpeg"'
End of element "ppg:enclosureLegacy".
STAG: 'ppg:enclosureLegacy'
Found element "ppg:enclosureSecure"[4]
Attribute [of 'ppg:enclosureSecure'] 'url' = '"https://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/https/vpid/p03yk0g3.mp3"'
Attribute [of 'ppg:enclosureSecure'] 'length' = '"9152000"'
Attribute [of 'ppg:enclosureSecure'] 'type' = '"audio/mpeg"'
End of element "ppg:enclosureSecure".
STAG: 'ppg:enclosureSecure'
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "urn:bbc:podcast:p03yk0fw"
End of element "guid".
[4]Found element "link"
Element data: "http://www.bbc.co.uk/programmes/p03yk0fw"
End of element "link".
	LINK
[4]Found element "itunes:explicit"
Element data: "clean"
End of element "itunes:explicit".
Found element "media:content"[4]
Attribute [of 'media:content'] 'url' = '"http://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/http/vpid/p03yk0g3.mp3"'
Attribute [of 'media:content'] 'fileSize' = '"9152000"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'medium' = '"audio"'
Attribute [of 'media:content'] 'expression' = '"full"'
Attribute [of 'media:content'] 'duration' = '"572"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "itunes:author"
Element data: "BBC Radio 4"
End of element "itunes:author".
[4]Found element "ppg:canonical"
Element data: "/programmes/p03yk0fw"
End of element "ppg:canonical".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
[4]Found element "title"
Element data: "Episode 3: Poison"
End of element "title".
	TITLE
[4]Found element "description"
Element data: "After six months, the man’s body remains in a mortuary in Oldham. Toxicology reports reveal the unusual way he died, and we hear about the plastic container he was carrying.



With Jon Manel.



For details of organisations which can offer advice and support on the issues raised in the report, go online to bbc.co.uk/actionnline or call the BBC Action Line to hear recorded information on 0800 066 066.   Lines are open 24 hours and calls are free from landlines and mobiles."
End of element "description".
[4]Found element "itunes:subtitle"
Element data: "Tests reveal how the man died and he is given a temporary name."
End of element "itunes:subtitle".
[4]Found element "itunes:summary"
Element data: "After six months, the man’s body remains in a mortuary in Oldham. Toxicology reports reveal the unusual way he died, and we hear about the plastic container he was carrying.



With Jon Manel.



For details of organisations which can offer advice and support on the issues raised in the report, go online to bbc.co.uk/actionnline or call the BBC Action Line to hear recorded information on 0800 066 066.   Lines are open 24 hours and calls are free from landlines and mobiles."
End of element "itunes:summary".
[4]Found element "pubDate"
Element data: "Fri, 10 Jun 2016 15:36:00 +0000"
End of element "pubDate".
[4]Found element "itunes:duration"
Element data: "552"
End of element "itunes:duration".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"http://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/http/vpid/p03xy16h.mp3"'
Attribute [of 'enclosure'] 'length' = '"8832000"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "8832000 (8832000)
Found element "ppg:enclosureLegacy"[4]
Attribute [of 'ppg:enclosureLegacy'] 'url' = '"http://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/http/vpid/p03xy16h.mp3"'
Attribute [of 'ppg:enclosureLegacy'] 'length' = '"8832000"'
Attribute [of 'ppg:enclosureLegacy'] 'type' = '"audio/mpeg"'
End of element "ppg:enclosureLegacy".
STAG: 'ppg:enclosureLegacy'
Found element "ppg:enclosureSecure"[4]
Attribute [of 'ppg:enclosureSecure'] 'url' = '"https://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/https/vpid/p03xy16h.mp3"'
Attribute [of 'ppg:enclosureSecure'] 'length' = '"8832000"'
Attribute [of 'ppg:enclosureSecure'] 'type' = '"audio/mpeg"'
End of element "ppg:enclosureSecure".
STAG: 'ppg:enclosureSecure'
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "urn:bbc:podcast:p03xy16c"
End of element "guid".
[4]Found element "link"
Element data: "http://www.bbc.co.uk/programmes/p03xy16c"
End of element "link".
	LINK
[4]Found element "itunes:explicit"
Element data: "clean"
End of element "itunes:explicit".
Found element "media:content"[4]
Attribute [of 'media:content'] 'url' = '"http://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/http/vpid/p03xy16h.mp3"'
Attribute [of 'media:content'] 'fileSize' = '"8832000"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'medium' = '"audio"'
Attribute [of 'media:content'] 'expression' = '"full"'
Attribute [of 'media:content'] 'duration' = '"552"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "itunes:author"
Element data: "BBC Radio 4"
End of element "itunes:author".
[4]Found element "ppg:canonical"
Element data: "/programmes/p03xy16c"
End of element "ppg:canonical".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
[4]Found element "title"
Element data: "Episode 2: The journey"
End of element "title".
	TITLE
[4]Found element "description"
Element data: "With no idea who he is, the police have to rely on the small number of clues found in the man's pockets. From the remote moorland track where his body was found, they begin to retrace his steps. Can they discover where his journey started? And we meet the last person known to have talked to him before he died. With Jon Manel."
End of element "description".
[4]Found element "itunes:subtitle"
Element data: "The Police try to piece together the man's journey to the moor."
End of element "itunes:subtitle".
[4]Found element "itunes:summary"
Element data: "With no idea who he is, the police have to rely on the small number of clues found in the man's pockets. From the remote moorland track where his body was found, they begin to retrace his steps. Can they discover where his journey started? And we meet the last person known to have talked to him before he died. With Jon Manel."
End of element "itunes:summary".
[4]Found element "pubDate"
Element data: "Wed, 08 Jun 2016 14:50:00 +0000"
End of element "pubDate".
[4]Found element "itunes:duration"
Element data: "552"
End of element "itunes:duration".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"http://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/http/vpid/p03xph99.mp3"'
Attribute [of 'enclosure'] 'length' = '"8832000"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "8832000 (8832000)
Found element "ppg:enclosureLegacy"[4]
Attribute [of 'ppg:enclosureLegacy'] 'url' = '"http://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/http/vpid/p03xph99.mp3"'
Attribute [of 'ppg:enclosureLegacy'] 'length' = '"8832000"'
Attribute [of 'ppg:enclosureLegacy'] 'type' = '"audio/mpeg"'
End of element "ppg:enclosureLegacy".
STAG: 'ppg:enclosureLegacy'
Found element "ppg:enclosureSecure"[4]
Attribute [of 'ppg:enclosureSecure'] 'url' = '"https://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/https/vpid/p03xph99.mp3"'
Attribute [of 'ppg:enclosureSecure'] 'length' = '"8832000"'
Attribute [of 'ppg:enclosureSecure'] 'type' = '"audio/mpeg"'
End of element "ppg:enclosureSecure".
STAG: 'ppg:enclosureSecure'
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "urn:bbc:podcast:p03xph95"
End of element "guid".
[4]Found element "link"
Element data: "http://www.bbc.co.uk/programmes/p03xph95"
End of element "link".
	LINK
[4]Found element "itunes:explicit"
Element data: "clean"
End of element "itunes:explicit".
Found element "media:content"[4]
Attribute [of 'media:content'] 'url' = '"http://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/http/vpid/p03xph99.mp3"'
Attribute [of 'media:content'] 'fileSize' = '"8832000"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'medium' = '"audio"'
Attribute [of 'media:content'] 'expression' = '"full"'
Attribute [of 'media:content'] 'duration' = '"552"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "itunes:author"
Element data: "BBC Radio 4"
End of element "itunes:author".
[4]Found element "ppg:canonical"
Element data: "/programmes/p03xph95"
End of element "ppg:canonical".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
[4]Found element "title"
Element data: "Episode 1: The discovery"
End of element "title".
	TITLE
[4]Found element "description"
Element data: "Last December a man's body was discovered in the desolate landscape of Saddleworth Moor in the Peak District National Park.



There was no clue as to who the man was. Six months on, he still hasn't been identified and his body remains in a mortuary in Oldham.



The police have been mystified and shocked by what they have found



For months, those leading the investigation have been sharing their progress with Jon Manel."
End of element "description".
[4]Found element "itunes:subtitle"
Element data: "A body is found on the moor. No-one knows who the man is. Inside the police investigation"
End of element "itunes:subtitle".
[4]Found element "itunes:summary"
Element data: "Last December a man's body was discovered in the desolate landscape of Saddleworth Moor in the Peak District National Park.



There was no clue as to who the man was. Six months on, he still hasn't been identified and his body remains in a mortuary in Oldham.



The police have been mystified and shocked by what they have found



For months, those leading the investigation have been sharing their progress with Jon Manel."
End of element "itunes:summary".
[4]Found element "pubDate"
Element data: "Tue, 07 Jun 2016 15:21:00 +0000"
End of element "pubDate".
[4]Found element "itunes:duration"
Element data: "545"
End of element "itunes:duration".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"http://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/http/vpid/p03xlj79.mp3"'
Attribute [of 'enclosure'] 'length' = '"8720000"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "8720000 (8720000)
Found element "ppg:enclosureLegacy"[4]
Attribute [of 'ppg:enclosureLegacy'] 'url' = '"http://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/http/vpid/p03xlj79.mp3"'
Attribute [of 'ppg:enclosureLegacy'] 'length' = '"8720000"'
Attribute [of 'ppg:enclosureLegacy'] 'type' = '"audio/mpeg"'
End of element "ppg:enclosureLegacy".
STAG: 'ppg:enclosureLegacy'
Found element "ppg:enclosureSecure"[4]
Attribute [of 'ppg:enclosureSecure'] 'url' = '"https://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/https/vpid/p03xlj79.mp3"'
Attribute [of 'ppg:enclosureSecure'] 'length' = '"8720000"'
Attribute [of 'ppg:enclosureSecure'] 'type' = '"audio/mpeg"'
End of element "ppg:enclosureSecure".
STAG: 'ppg:enclosureSecure'
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "urn:bbc:podcast:p03xlj74"
End of element "guid".
[4]Found element "link"
Element data: "http://www.bbc.co.uk/programmes/p03xlj74"
End of element "link".
	LINK
[4]Found element "itunes:explicit"
Element data: "clean"
End of element "itunes:explicit".
Found element "media:content"[4]
Attribute [of 'media:content'] 'url' = '"http://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/http/vpid/p03xlj79.mp3"'
Attribute [of 'media:content'] 'fileSize' = '"8720000"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'medium' = '"audio"'
Attribute [of 'media:content'] 'expression' = '"full"'
Attribute [of 'media:content'] 'duration' = '"545"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "itunes:author"
Element data: "BBC Radio 4"
End of element "itunes:author".
[4]Found element "ppg:canonical"
Element data: "/programmes/p03xlj74"
End of element "ppg:canonical".
Element data: ""
End of element "item".
	ITEM
Element data: ""
End of element "channel".
	CHANNEL
Element data: ""
End of element "rss".
	RSS
Preparing Channel Statement.
Preparing Channel Category Statement.
Preparing Item DL Statement.
Preparing Item NDL Statement.
Preparing Item Category Statement.
cpptr->title='Body on the Moor'.
ChanDir='Body_on_the_Moor'.
chanurl='http://www.bbc.co.uk/programmes/p03wy14r/episodes/downloads.rss'
ChanID=11.
Executing Command '/usr/bin/wget --no-check-certificate -O"/mnt/sda1/audio/podcasts/Body_on_the_Moor/p04wyvzw.mp3" http://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/http/vpid/p04wyvzw.mp3'
Returned value '0'
Download Successful!
Executing Command '/usr/bin/wget --no-check-certificate -O"/mnt/sda1/audio/podcasts/Body_on_the_Moor/p04l46xf.mp3" http://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/http/vpid/p04l46xf.mp3'
Returned value '0'
Download Successful!
Executing Command '/usr/bin/wget --no-check-certificate -O"/mnt/sda1/audio/podcasts/Body_on_the_Moor/p03z7twp.mp3" http://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/http/vpid/p03z7twp.mp3'
Returned value '0'
Download Successful!
Executing Command '/usr/bin/wget --no-check-certificate -O"/mnt/sda1/audio/podcasts/Body_on_the_Moor/p03yk0g3.mp3" http://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/http/vpid/p03yk0g3.mp3'
Returned value '0'
Download Successful!
Executing Command '/usr/bin/wget --no-check-certificate -O"/mnt/sda1/audio/podcasts/Body_on_the_Moor/p03xy16h.mp3" http://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/http/vpid/p03xy16h.mp3'
Returned value '0'
Download Successful!
Executing Command '/usr/bin/wget --no-check-certificate -O"/mnt/sda1/audio/podcasts/Body_on_the_Moor/p03xph99.mp3" http://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/http/vpid/p03xph99.mp3'
Returned value '0'
Download Successful!
Executing Command '/usr/bin/wget --no-check-certificate -O"/mnt/sda1/audio/podcasts/Body_on_the_Moor/p03xlj79.mp3" http://open.live.bbc.co.uk/mediaselector/5/redir/version/2.0/mediaset/audio-nondrm-download/proto/http/vpid/p03xlj79.mp3'
Returned value '0'
Download Successful!
Operation completed successfully!

```

