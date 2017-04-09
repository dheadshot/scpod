# Parser Debugging Output
The following is the debug information generated when debugging the parser.  I
am keeping this for reference just in case more problems are found later and I
need to compare outputs.

The xml file used is the RSS feed for "The Bugle", which I have placed in this
archive alongside this file.

## Debugging Output Begins:
```
1, 1
Found element "xml"[1]
Attribute [of 'xml'] 'version' = '"1.0"'
Attribute [of 'xml'] 'encoding' = '"UTF-8"?'
End of element "xml".
STAG: 'xml'
Found element "xml-stylesheet"[1]
Attribute [of 'xml-stylesheet'] 'type' = '"text/xsl"'
Attribute [of 'xml-stylesheet'] 'media' = '"screen"'
Attribute [of 'xml-stylesheet'] 'href' = '"/~d/styles/rss2full.xsl"?'
End of element "xml-stylesheet".
STAG: 'xml-stylesheet'
Found element "xml-stylesheet"[1]
Attribute [of 'xml-stylesheet'] 'type' = '"text/css"'
Attribute [of 'xml-stylesheet'] 'media' = '"screen"'
Attribute [of 'xml-stylesheet'] 'href' = '"http://feeds.feedburner.com/~d/styles/itemcontent.css"?'
End of element "xml-stylesheet".
STAG: 'xml-stylesheet'
Found element "rss"[1]
Attribute [of 'rss'] 'xmlns:atom' = '"http://www.w3.org/2005/Atom"'
Attribute [of 'rss'] 'xmlns:itunes' = '"http://www.itunes.com/dtds/podcast-1.0.dtd"'
Attribute [of 'rss'] 'xmlns:media' = '"http://search.yahoo.com/mrss/"'
Attribute [of 'rss'] 'xmlns:sy' = '"http://purl.org/rss/1.0/modules/syndication/"'
Attribute [of 'rss'] 'xmlns:content' = '"http://purl.org/rss/1.0/modules/content/"'
Attribute [of 'rss'] 'xmlns:feedburner' = '"http://rssnamespace.org/feedburner/ext/1.0"'
Attribute [of 'rss'] 'version' = '"2.0"'
[2]Found element "channel"
[3]Found element "title"
Element data: "The Bugle"
End of element "title".
	TITLE
[3]Found element "link"
Element data: "http://thebuglepodcast.com/"
End of element "link".
	LINK
[3]Found element "pubDate"
Element data: "Fri, 31 Mar 2017 19:07:53 -0000"
End of element "pubDate".
[3]Found element "lastBuildDate"
Element data: "Fri, 31 Mar 2017 19:15:45 -0000"
End of element "lastBuildDate".
[3]Found element "ttl"
Element data: "60"
End of element "ttl".
[3]Found element "language"
Element data: "en"
End of element "language".
[3]Found element "copyright"
Element data: "2016, All Rights Reserved"
End of element "copyright".
[3]Found element "webMaster"
Element data: "prxhelp@prx.org (PRX)"
End of element "webMaster".
[3]Found element "description"
Fixing ']]>'	'
      It’s the trans-global satiricast that leaves no hot potato unbuttered. Andy Zaltzman breaks down the news with comedians from across the world including Wyatt Cenac, Hari Kondabolu, John Oliver, Nish Kumar, Anuvab Pal and his sister Helen.]]>'	Element data: "It’s the trans-global satiricast that leaves no hot potato unbuttered. Andy Zaltzman breaks down the news with comedians from across the world including Wyatt Cenac, Hari Kondabolu, John Oliver, Nish Kumar, Anuvab Pal and his sister Helen."
End of element "description".
Adding description 'It’s the trans-global satiricast that leaves no hot potato unbuttered. Andy Zaltzman breaks down the news with comedians from across the world including Wyatt Cenac, Hari Kondabolu, John Oliver, Nish Kumar, Anuvab Pal and his sister Helen.' to channel...
Written channel description.
Desc is free.
[3]Found element "managingEditor"
Element data: "prxwpadmin@prx.org (The Bugle)"
End of element "managingEditor".
[3]Found element "generator"
Element data: "PRX Feeder v1.0.0"
End of element "generator".
[3]Found element "docs"
Element data: "http://blogs.law.harvard.edu/tech/rss"
End of element "docs".
[3]Found element "image"
[4]Found element "url"
Element data: "https://f.prxu.org/thebugle/images/e7c3bb8a-2c67-4db2-819c-b7dcb1b72d5f/bugle_zag-300.png"
End of element "url".
image url: above epn is image
[4]Found element "title"
Element data: "The Bugle"
End of element "title".
	TITLE
image title: above epn is image
[4]Found element "link"
Element data: "http://thebuglepodcast.com/"
End of element "link".
	LINK
image link: above epn is image
[4]Found element "width"
Element data: "300"
End of element "width".
image width: above epn is image
[4]Found element "height"
Element data: "300"
End of element "height".
image height: above epn is image
Element data: ""
End of element "image".
[3]Found element "itunes:new-feed-url"
Element data: "http://feeds.thebuglepodcast.com/thebuglefeed"
End of element "itunes:new-feed-url".
[3]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
Found element "itunes:category"[3]
Attribute [of 'itunes:category'] 'text' = '"Comedy"'
End of element "itunes:category".
STAG: 'itunes:category'
Found element "itunes:image"[3]
Attribute [of 'itunes:image'] 'href' = '"https://f.prxu.org/thebugle/images/aade6bdb-65a2-4b2d-95fc-e0a89bc42f95/bugle_zag-1400.png"'
End of element "itunes:image".
STAG: 'itunes:image'
[3]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[3]Found element "itunes:owner"
[4]Found element "itunes:email"
Element data: "prxwpadmin@prx.org"
End of element "itunes:email".
[4]Found element "itunes:name"
Element data: "The Bugle"
End of element "itunes:name".
Element data: ""
End of element "itunes:owner".
[3]Found element "itunes:subtitle"
Element data: "It's the trans-global satiricast that leaves no hot potato unbuttered."
End of element "itunes:subtitle".
[3]Found element "itunes:summary"
Fixing ']]>'	'
      It's the trans-global satiricast that leaves no hot potato unbuttered. Andy Zaltzman breaks down the news with comedians from across the world including Wyatt Cenac, Hari Kondabolu, John Oliver, Nish Kumar, Anuvab Pal and his sister Helen.]]>'	Element data: "It's the trans-global satiricast that leaves no hot potato unbuttered. Andy Zaltzman breaks down the news with comedians from across the world including Wyatt Cenac, Hari Kondabolu, John Oliver, Nish Kumar, Anuvab Pal and his sister Helen."
End of element "itunes:summary".
[3]Found element "media:copyright"
Element data: "2016, All Rights Reserved"
End of element "media:copyright".
Found element "media:thumbnail"[3]
Attribute [of 'media:thumbnail'] 'url' = '"https://f.prxu.org/thebugle/images/e7c3bb8a-2c67-4db2-819c-b7dcb1b72d5f/bugle_zag-300.png"'
End of element "media:thumbnail".
STAG: 'media:thumbnail'
Found element "media:category"[3]
Attribute [of 'media:category'] 'scheme' = '"http://www.itunes.com/dtds/podcast-1.0.dtd"'
Element data: "Comedy"
End of element "media:category".
[3]Found element "sy:updatePeriod"
Element data: "hourly"
End of element "sy:updatePeriod".
[3]Found element "sy:updateFrequency"
Element data: "1"
End of element "sy:updateFrequency".
Found element "atom10:link"[3]
Attribute [of 'atom10:link'] 'xmlns:atom10' = '"http://www.w3.org/2005/Atom"'
Attribute [of 'atom10:link'] 'rel' = '"self"'
Attribute [of 'atom10:link'] 'type' = '"application/rss+xml"'
Attribute [of 'atom10:link'] 'href' = '"http://feeds.feedburner.com/thebuglefeed"'
End of element "atom10:link".
STAG: 'atom10:link'
Found element "feedburner:info"[3]
Attribute [of 'feedburner:info'] 'uri' = '"thebuglefeed"'
End of element "feedburner:info".
STAG: 'feedburner:info'
Found element "atom10:link"[3]
Attribute [of 'atom10:link'] 'xmlns:atom10' = '"http://www.w3.org/2005/Atom"'
Attribute [of 'atom10:link'] 'rel' = '"hub"'
Attribute [of 'atom10:link'] 'href' = '"http://pubsubhubbub.appspot.com/"'
End of element "atom10:link".
STAG: 'atom10:link'
Found element "feedburner:feedFlare"[3]
Attribute [of 'feedburner:feedFlare'] 'href' = '"https://add.my.yahoo.com/rss?url=http%3A%2F%2Ffeeds.feedburner.com%2Fthebuglefeed"'
Attribute [of 'feedburner:feedFlare'] 'src' = '"http://us.i1.yimg.com/us.yimg.com/i/us/my/addtomyyahoo4.gif"'
Element data: "Subscribe with My Yahoo!"
End of element "feedburner:feedFlare".
Found element "feedburner:feedFlare"[3]
Attribute [of 'feedburner:feedFlare'] 'href' = '"http://feedly.com/#subscription/feed/http://feeds.feedburner.com/thebuglefeed"'
Attribute [of 'feedburner:feedFlare'] 'src' = '"http://s3.feedly.com/feedburner/feedly.png"'
Element data: "Subscribe with Feedly"
End of element "feedburner:feedFlare".
Found element "feedburner:feedFlare"[3]
Attribute [of 'feedburner:feedFlare'] 'href' = '"https://www.subtome.com/#/subscribe?feeds=http%3A%2F%2Ffeeds.feedburner.com%2Fthebuglefeed"'
Attribute [of 'feedburner:feedFlare'] 'src' = '"http://www.subtome.com/subtome-feedburner.png"'
Element data: "Subscribe with SubToMe"
End of element "feedburner:feedFlare".
Found element "feedburner:feedFlare"[3]
Attribute [of 'feedburner:feedFlare'] 'href' = '"http://www.bloglines.com/sub/http://feeds.feedburner.com/thebuglefeed"'
Attribute [of 'feedburner:feedFlare'] 'src' = '"http://www.bloglines.com/images/sub_modern11.gif"'
Element data: "Subscribe with Bloglines"
End of element "feedburner:feedFlare".
Found element "feedburner:feedFlare"[3]
Attribute [of 'feedburner:feedFlare'] 'href' = '"http://www.netvibes.com/subscribe.php?url=http%3A%2F%2Ffeeds.feedburner.com%2Fthebuglefeed"'
Attribute [of 'feedburner:feedFlare'] 'src' = '"//www.netvibes.com/img/add2netvibes.gif"'
Element data: "Subscribe with Netvibes"
End of element "feedburner:feedFlare".
Found element "feedburner:feedFlare"[3]
Attribute [of 'feedburner:feedFlare'] 'href' = '"http://www.bitty.com/manual/?contenttype=rssfeed&amp;contentvalue=http%3A%2F%2Ffeeds.feedburner.com%2Fthebuglefeed"'
Attribute [of 'feedburner:feedFlare'] 'src' = '"http://www.bitty.com/img/bittychicklet_91x17.gif"'
Element data: "Subscribe with Bitty Browser"
End of element "feedburner:feedFlare".
Found element "feedburner:feedFlare"[3]
Attribute [of 'feedburner:feedFlare'] 'href' = '"http://www.dailyrotation.com/index.php?feed=http%3A%2F%2Ffeeds.feedburner.com%2Fthebuglefeed"'
Attribute [of 'feedburner:feedFlare'] 'src' = '"http://www.dailyrotation.com/rss-dr2.gif"'
Element data: "Subscribe with Daily Rotation"
End of element "feedburner:feedFlare".
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "http://bugle.prx.org/?p=623"
End of element "guid".
[4]Found element "title"
Element data: "Bonus Bugle – Too Much News #1"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 31 Mar 2017 19:07:53 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/oSo5_BL1QVA/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Some recent moments that missed the final cut - including the definitive verdict on the 'bleeps']]>'	Element data: "Some recent moments that missed the final cut - including the definitive verdict on the 'bleeps'"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/ad4199ff-a6b3-40e8-a086-7a2e9cbe5a91/bugle4022a_wp.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"32503850"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "32503850 (32503850)
[4]Found element "itunes:subtitle"
Element data: "Bonus Bugle - Too Much News #1"
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "36:21"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        The last 22 weeks have contained a lot of news, too much even for The Bugle, so here are some recent moments that missed the final cut - including the definitive verdict on f***s and c***s]]>'	Element data: "The last 22 weeks have contained a lot of news, too much even for The Bugle, so here are some recent moments that missed the final cut - including the definitive verdict on f***s and c***s"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"https://f.prxu.org/thebugle/images/aade6bdb-65a2-4b2d-95fc-e0a89bc42f95/bugle_zag-1400.png"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"32503850"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/ad4199ff-a6b3-40e8-a086-7a2e9cbe5a91/bugle4022a_wp.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "The last 22 weeks have contained a lot of news, too much even for The Bugle, so here are some recent moments that missed the final cut – including the definitive verdict on f***s and c***s"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/oSo5_BL1QVA"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2017/03/bonus-bugle-too-much-news-1/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "http://bugle.prx.org/?p=619"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 4022 – Not Scared, Bored"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sat, 25 Mar 2017 09:05:06 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/yd_eIvnpbb4/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and Nish on the response to the London terror attacks, Trump's failed bill, the happiness index and Scotland's confused position.]]>'	Element data: "Andy and Nish on the response to the London terror attacks, Trump's failed bill, the happiness index and Scotland's confused position."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/538ae651-e966-4b4c-9b5f-2c03b3275ae2/bugle4022_wp.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"47508167"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "47508167 (47508167)
[4]Found element "itunes:subtitle"
Element data: "Bugle 4022 - Not Scared, Bored"
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "51:59"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and Nish on the response to the Westminster terror attack, Trump's failed bill, the happiness index and Scotland's confused position.

Plus baseball news.

*Recorded before the healthcare bill went completely down the pan]]>'	Element data: "Andy and Nish on the response to the Westminster terror attack, Trump's failed bill, the happiness index and Scotland's confused position.

Plus baseball news.

*Recorded before the healthcare bill went completely down the pan"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"https://f.prxu.org/thebugle/images/aade6bdb-65a2-4b2d-95fc-e0a89bc42f95/bugle_zag-1400.png"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"47508167"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/538ae651-e966-4b4c-9b5f-2c03b3275ae2/bugle4022_wp.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and Nish on the response to the Westminster terror attack, Trump’s failed bill, the happiness index and Scotland’s confused position."
End of element "p".
P Data
P Data: Above epn is content:encoded
[5]Found element "p"
Element data: "Plus baseball news."
End of element "p".
P Data
P Data: Above epn is content:encoded
[5]Found element "p"
Element data: "*Recorded before the healthcare bill went completely down the pan"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/yd_eIvnpbb4"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2017/03/bugle-4022-not-scared-bored/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "http://bugle.prx.org/?p=616"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 4021 – Geertcha"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sat, 18 Mar 2017 17:40:43 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/tMfipdr5Szc/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and Hari Kondabolu discuss the 'good' news from the Netherlands, the rantings of Steve king, Trump's tax return and a penis-on-roof shortage.]]>'	Element data: "Andy and Hari Kondabolu discuss the 'good' news from the Netherlands, the rantings of Steve king, Trump's tax return and a penis-on-roof shortage."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/951d2ce1-2435-41e1-ac51-f5375d90715c/bugle4021_wp.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"41731971"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "41731971 (41731971)
[4]Found element "itunes:subtitle"
Element data: "Bugle 4021 - Geertcha"
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "45:58"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and Hari Kondabolu discuss the 'good' news from the Netherlands, the rantings of Steve king, Trump's tax return and a penis-on-roof shortage.]]>'	Element data: "Andy and Hari Kondabolu discuss the 'good' news from the Netherlands, the rantings of Steve king, Trump's tax return and a penis-on-roof shortage."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"https://f.prxu.org/thebugle/images/aade6bdb-65a2-4b2d-95fc-e0a89bc42f95/bugle_zag-1400.png"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"41731971"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/951d2ce1-2435-41e1-ac51-f5375d90715c/bugle4021_wp.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and Hari Kondabolu discuss the ‘good’ news from the Netherlands, the rantings of Steve King, Trump’s tax return and a penis-on-roof shortage."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/tMfipdr5Szc"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2017/03/bugle-4021-geertcha/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "http://bugle.prx.org/?p=612"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 4020 – Gender War"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sat, 11 Mar 2017 16:38:43 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/O8ZgNnRJ2qo/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Which is the better sex, why can't same sex couples commit adultery, how did Russia break infinity and why has the news gone (literally) down a rabbit hole?]]>'	Element data: "Which is the better sex, why can't same sex couples commit adultery, how did Russia break infinity and why has the news gone (literally) down a rabbit hole?"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/1aea73ff-ec84-427a-a3ae-03889ac60877/bugle4020_wp.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"44521848"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "44521848 (44521848)
[4]Found element "itunes:subtitle"
Element data: "Bugle 4020 - Gender War"
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "48:52"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Which is the better sex, why can't same sex couples commit adultery, how did Russia break infinity and why has the news gone (literally) down a rabbit hole?]]>'	Element data: "Which is the better sex, why can't same sex couples commit adultery, how did Russia break infinity and why has the news gone (literally) down a rabbit hole?"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"https://f.prxu.org/thebugle/images/aade6bdb-65a2-4b2d-95fc-e0a89bc42f95/bugle_zag-1400.png"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"44521848"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/1aea73ff-ec84-427a-a3ae-03889ac60877/bugle4020_wp.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "With International Women&#8217;s Day fresh in our minds, Andy and Helen decide to settle the battle of the sexes once and for all. Also, why can&#8217;t same sex couples commit adultery, how did Russia break infinity and why has the news gone (literally) down a rabbit hole?"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/O8ZgNnRJ2qo"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2017/03/bugle-4020-gender-war/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "http://bugle.prx.org/?p=609"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 4019 – Donkey"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sat, 04 Mar 2017 20:34:33 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/7wEdwv2SC7U/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy is joined by Wyatt Cenac to review Donald Trump's attempts to sound like a president, plus new billionaires want to be president and an in depth look into the latest fad - sleep.]]>'	Element data: "Andy is joined by Wyatt Cenac to review Donald Trump's attempts to sound like a president, plus new billionaires want to be president and an in depth look into the latest fad - sleep."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/ddeed579-b323-451d-81f1-a15cc4f97139/bugle4019_wp.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"34603677"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "34603677 (34603677)
[4]Found element "itunes:subtitle"
Element data: "Bugle 4019 - Donkey"
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "38:32"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy is joined by Wyatt Cenac to review Donald Trump's attempts to sound like a president, plus new billionaires want to be president and an in depth look into the latest fad - sleep.]]>'	Element data: "Andy is joined by Wyatt Cenac to review Donald Trump's attempts to sound like a president, plus new billionaires want to be president and an in depth look into the latest fad - sleep."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"https://f.prxu.org/thebugle/images/aade6bdb-65a2-4b2d-95fc-e0a89bc42f95/bugle_zag-1400.png"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"34603677"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/ddeed579-b323-451d-81f1-a15cc4f97139/bugle4019_wp.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy is joined by Wyatt Cenac to review Donald Trump&#8217;s attempts to sound like a president, plus new billionaires want to be president and an in depth look into the latest fad &#8211; sleep."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/7wEdwv2SC7U"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2017/03/bugle-4019-donkey/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "http://bugle.prx.org/?p=604"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 4018 – Fashion &amp; Fascism"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 24 Feb 2017 07:55:58 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/TTvZZ-S1oRY/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Amnesty has a report out, this is not good news for anyone]]>'	Element data: "Amnesty has a report out, this is not good news for anyone"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/fb2a0fb1-8e5e-4860-b030-ca0e19eb351e/bugle4018_wp.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"42809887"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "42809887 (42809887)
[4]Found element "itunes:subtitle"
Element data: "Bugle 4018 - Fashion &amp; Fascism"
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "47:05"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy is joined by Nish Kumar to present a series of key announcements: an Amnesty report is never good news, don't mess with a monk and Saudi Arabia  is the Roger Federer of human rights abuses.]]>'	Element data: "Andy is joined by Nish Kumar to present a series of key announcements: an Amnesty report is never good news, don't mess with a monk and Saudi Arabia  is the Roger Federer of human rights abuses."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"https://f.prxu.org/thebugle/images/aade6bdb-65a2-4b2d-95fc-e0a89bc42f95/bugle_zag-1400.png"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"42809887"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/fb2a0fb1-8e5e-4860-b030-ca0e19eb351e/bugle4018_wp.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy is joined by Nish Kumar to present a series of key announcements: an Amnesty report is never good news, don&#8217;t mess with a monk and Saudi Arabia  is the Roger Federer of human rights abuses."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/TTvZZ-S1oRY"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2017/02/bugle-4018-fashion-fascism/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "http://bugle.prx.org/?p=600"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 4017 – Evolution special"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sat, 18 Feb 2017 18:30:52 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/ncjn-IKqw54/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        What are we doing to prolong humankind? Not much AND too much.]]>'	Element data: "What are we doing to prolong humankind? Not much AND too much."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/75251e1c-f117-407f-be69-cf18992d884f/bugle4017_wp.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"40647784"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "40647784 (40647784)
[4]Found element "itunes:subtitle"
Element data: "Bugle 4017 - Evolution special"
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "44:50"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Found element "br"[5]
End of element "br".
STAG: 'br'
Found element "br"[5]
End of element "br".
STAG: 'br'
Found element "br"[5]
End of element "br".
STAG: 'br'
Found element "br"[5]
End of element "br".
STAG: 'br'
Fixing ']]>'	'
This show was recorded in Andy's shed.]]>'	Element data: "This show was recorded in Andy's shed."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"https://f.prxu.org/thebugle/images/aade6bdb-65a2-4b2d-95fc-e0a89bc42f95/bugle_zag-1400.png"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"40647784"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/75251e1c-f117-407f-be69-cf18992d884f/bugle4017_wp.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy is joined by Helen to look at a few stories of human endeavor, including: creation of the MAMMOPHANT, beauty spot stag do&#8217;s and traffic lights versus Darwin. What are we doing to prolong humankind? Not much AND too much."
End of element "p".
P Data
P Data: Above epn is content:encoded
[5]Found element "p"
Element data: "Plus The Trumpet &#8211; enough Trump to keep you sated, but not so much to cause uncontrollable bouts of pre-apocalyptic terror."
End of element "p".
P Data
P Data: Above epn is content:encoded
[5]Found element "p"
Element data: "This show was recorded in Andy&#8217;s shed."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/ncjn-IKqw54"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2017/02/bugle-4017-evolution-special/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "http://bugle.prx.org/?p=596"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 4016 – Terrorists eat cauliflowers"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 10 Feb 2017 14:37:57 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/ZPuI1ttdaMA/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Are you a terrorist? It's no longer simply 'yes' or 'no', and don't ask Donald.]]>'	Element data: "Are you a terrorist? It's no longer simply 'yes' or 'no', and don't ask Donald."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/738ba557-a9d2-4791-aedd-86c8a32e3497/bugle4016_wp.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"44406073"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "44406073 (44406073)
[4]Found element "itunes:subtitle"
Element data: "Bugle 4016 - Terrorists eat Cauliflowers"
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "48:45"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Are you a terrorist? It's no longer simply 'yes' or 'no'. Plus, Putin, Romania, Zimbabwe and the original gerrymander.  Andy is joined by Anuvab Pal]]>'	Element data: "Are you a terrorist? It's no longer simply 'yes' or 'no'. Plus, Putin, Romania, Zimbabwe and the original gerrymander.  Andy is joined by Anuvab Pal"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"https://f.prxu.org/thebugle/images/aade6bdb-65a2-4b2d-95fc-e0a89bc42f95/bugle_zag-1400.png"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"44406073"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/738ba557-a9d2-4791-aedd-86c8a32e3497/bugle4016_wp.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy is joined by Anuvab Pal. Are you a terrorist? It&#8217;s no longer simply &#8216;yes&#8217; or &#8216;no&#8217;, and don&#8217;t ask Donald. Plus, Putin, Romania, Zimbabwe and the original gerrymander."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/ZPuI1ttdaMA"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2017/02/bugle-4016-terrorists-eat-cauliflowers/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "http://bugle.prx.org/?p=592"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 4015 – Tolerance is just laziness"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sat, 04 Feb 2017 10:24:01 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/XWkiVcQC6lI/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Lord Gaga, Lady Gaga, salad shortages and Superbowl]]>'	Element data: "Lord Gaga, Lady Gaga, salad shortages and Superbowl"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/775aa66e-b1cb-4247-8d3e-73dd8321a5d1/bugle4015_wp.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"41824340"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "41824340 (41824340)
[4]Found element "itunes:subtitle"
Element data: "Bugle 4015 - Tolerance is just laziness"
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "46:04"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Found element "br"[5]
End of element "br".
STAG: 'br'
Found element "br"[5]
End of element "br".
STAG: 'br'
Found element "br"[5]
End of element "br".
STAG: 'br'
Fixing ']]>'	']]>'	Element data: ""
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"https://f.prxu.org/thebugle/images/aade6bdb-65a2-4b2d-95fc-e0a89bc42f95/bugle_zag-1400.png"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"41824340"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/775aa66e-b1cb-4247-8d3e-73dd8321a5d1/bugle4015_wp.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "From Lord Gaga to Lady Gaga, The Bugle covers it all this week. Politics, science, tech and salads &#8211; could be the tip of the iceberg, lettuce pray we romaine healthy."
End of element "p".
P Data
P Data: Above epn is content:encoded
[5]Found element "p"
Element data: "Plus American tourists prepare to take &#8216;point and shoot&#8217; to a new level"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/XWkiVcQC6lI"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2017/02/bugle-4015-tolerance-is-just-laziness/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "http://bugle.prx.org/?p=588"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 4014 – How bad can it get in a week?"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sat, 28 Jan 2017 22:00:52 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/P4sezdESAYk/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        One Week Into the Trump Administration. Hard to talk about much else.]]>'	Element data: "One Week Into the Trump Administration. Hard to talk about much else."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/2fa6e5be-b8a7-4d02-bd61-7b2fe39cb557/170127-Bugle-Mixdown.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"39359650"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "39359650 (39359650)
[4]Found element "itunes:subtitle"
Element data: "One Week Into the Trump Administration. Hard to talk about much else."
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "43:28"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        One Week Into the Trump Administration. Hard to talk about much else.]]>'	Element data: "One Week Into the Trump Administration. Hard to talk about much else."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"https://f.prxu.org/thebugle/images/aade6bdb-65a2-4b2d-95fc-e0a89bc42f95/bugle_zag-1400.png"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"39359650"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/2fa6e5be-b8a7-4d02-bd61-7b2fe39cb557/170127-Bugle-Mixdown.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "As the former star of Ghosts Can&#8217;t Do It settles into his latest job, Andy and Nish find it hard to talk about much else."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/P4sezdESAYk"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2017/01/bugle-4014-how-bad-can-it-get-in-a-week/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "http://bugle.prx.org/?p=584"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 4013 – American Carnage"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 20 Jan 2017 22:51:31 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/RwOF80fqrZc/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Trump inauguration: Andy and Hari try to make sense of what just happened]]>'	Element data: "Trump inauguration: Andy and Hari try to make sense of what just happened"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/f4f64418-20d9-4969-819f-50f6bcfa9dd1/bugle4013_wp.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"31165962"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "31165962 (31165962)
[4]Found element "itunes:subtitle"
Element data: "Bugle 4013 - American Carnage"
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "34:57"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Recording just an hour after the inauguration of Donald Trump, Andy and Hari try to make sense of what just happened.]]>'	Element data: "Recording just an hour after the inauguration of Donald Trump, Andy and Hari try to make sense of what just happened."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"https://f.prxu.org/thebugle/images/aade6bdb-65a2-4b2d-95fc-e0a89bc42f95/bugle_zag-1400.png"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"31165962"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/f4f64418-20d9-4969-819f-50f6bcfa9dd1/bugle4013_wp.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Recording just an hour after the inauguration of Donald Trump, Andy and Hari try to make sense of what just happened."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/RwOF80fqrZc"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2017/01/bugle-4013-american-carnage/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "http://bugle.prx.org/?p=578"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 4012 – Bashfulness and Shame"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 13 Jan 2017 20:07:07 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/J6tYH0v6F64/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Is Trump any worse than Catherine the Great? Should Andy start consulting for Mexico, and how much should a Chinese football team play for a total novice?]]>'	Element data: "Is Trump any worse than Catherine the Great? Should Andy start consulting for Mexico, and how much should a Chinese football team play for a total novice?"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/313bf702-f784-4fd7-87d2-b8fd54685909/bugle4012_wp2.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"112652539"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "112652539 (112652539)
[4]Found element "itunes:subtitle"
Element data: "Bugle 4012 - Bashfulness and Shame"
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "49:26"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy is joined by Anuvab Pal, who brings with him a series of literally enormous questions. Is Trump any worse than Catherine the Great? Should Andy start consulting for Mexico, and how much should a Chinese football team play for a total novice?]]>'	Element data: "Andy is joined by Anuvab Pal, who brings with him a series of literally enormous questions. Is Trump any worse than Catherine the Great? Should Andy start consulting for Mexico, and how much should a Chinese football team play for a total novice?"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"https://f.prxu.org/thebugle/images/aade6bdb-65a2-4b2d-95fc-e0a89bc42f95/bugle_zag-1400.png"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"112652539"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/313bf702-f784-4fd7-87d2-b8fd54685909/bugle4012_wp2.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy is joined by Anuvab Pal, who brings with him a series of literally enormous questions. Is Trump any worse than Catherine the Great? Should Andy start consulting for Mexico, and how much should a Chinese football team pay for a total novice?"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/J6tYH0v6F64"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2017/01/bugle-4012-bashfulness-and-shame/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "http://bugle.prx.org/?p=575"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 4011 – George W Bush Nostalgia"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sat, 07 Jan 2017 11:17:57 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/0WLfQMM2aYo/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Brexit resignations, Trump tantrums and MASSIVE CHICKEN NEWS]]>'	Element data: "Brexit resignations, Trump tantrums and MASSIVE CHICKEN NEWS"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/25b340b4-232e-4f4e-93d7-fe66e446dcb6/Bugle4011_wp.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"44146939"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "44146939 (44146939)
[4]Found element "itunes:subtitle"
Element data: "Bugle 4011 - George W Bush Nostalgia"
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "48:29"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        2017 - set to be the best year since 2015, brings a new Bugle with Andy Zaltzman and Nish Kumar. This week it's Brexit resignations, Trump tantrums and MASSIVE CHICKEN NEWS. Plus, technology, who cares?]]>'	Element data: "2017 - set to be the best year since 2015, brings a new Bugle with Andy Zaltzman and Nish Kumar. This week it's Brexit resignations, Trump tantrums and MASSIVE CHICKEN NEWS. Plus, technology, who cares?"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"https://f.prxu.org/thebugle/images/aade6bdb-65a2-4b2d-95fc-e0a89bc42f95/bugle_zag-1400.png"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"44146939"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/25b340b4-232e-4f4e-93d7-fe66e446dcb6/Bugle4011_wp.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "2017 &#8211; set to be the best year since 2015, brings a new Bugle with Andy Zaltzman and Nish Kumar. This week it&#8217;s Brexit resignations, Trump tantrums and MASSIVE CHICKEN NEWS. Plus, technology, who cares?"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/0WLfQMM2aYo"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2017/01/bugle-4011-george-w-bush-nostalgia/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "http://bugle.prx.org/?p=571"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 4010 – Christmas special!"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 23 Dec 2016 16:16:34 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/k_6-zUuIJHA/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Some Christmas tales from The Bugle]]>'	Element data: "Some Christmas tales from The Bugle"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/4809bbe7-343f-4579-b34e-55cf2ad47a58/bugle4010_wp.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"38953796"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "38953796 (38953796)
[4]Found element "itunes:subtitle"
Element data: "Christmas Special!"
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "43:04"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Who needs Christmas? 2016 does. Andy and Helen share a few Christmas tales, play some games and look back at some extreme Christmases of the past. May contain murder.]]>'	Element data: "Who needs Christmas? 2016 does. Andy and Helen share a few Christmas tales, play some games and look back at some extreme Christmases of the past. May contain murder."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"https://f.prxu.org/thebugle/images/aade6bdb-65a2-4b2d-95fc-e0a89bc42f95/bugle_zag-1400.png"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"38953796"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/4809bbe7-343f-4579-b34e-55cf2ad47a58/bugle4010_wp.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Who needs Christmas? 2016 does. Andy and Helen share a few Christmas tales, play some games and look back at some extreme Christmases of the past. May contain murder."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/k_6-zUuIJHA"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2016/12/bugle-4010-christmas-special/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "http://bugle.prx.org/?p=566"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 4009 – Trump, Turkey &amp; Trains"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 16 Dec 2016 21:08:15 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/qihbYBUe4-o/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and Anuvab Pal discuss the latest actions from the world's new crop of mad despots.]]>'	Element data: "Andy and Anuvab Pal discuss the latest actions from the world's new crop of mad despots."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/e9f2a4c5-2b38-4734-9817-4c0ed63bb827/bugle4009_wp.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"45124545"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "45124545 (45124545)
[4]Found element "itunes:subtitle"
Element data: "Bugle 4009 - Trump Turkey &amp; Trains"
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "49:30"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy Zaltzman is joined by Anuvab Pal to discuss India's national anthem, Erdogan's attempt to save the Lira and a strong batch of new global despots. Plus it's India v Great Britain in The Great  Train Off.]]>'	Element data: "Andy Zaltzman is joined by Anuvab Pal to discuss India's national anthem, Erdogan's attempt to save the Lira and a strong batch of new global despots. Plus it's India v Great Britain in The Great  Train Off."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"https://f.prxu.org/thebugle/images/aade6bdb-65a2-4b2d-95fc-e0a89bc42f95/bugle_zag-1400.png"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"45124545"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/e9f2a4c5-2b38-4734-9817-4c0ed63bb827/bugle4009_wp.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy Zaltzman is joined by Anuvab Pal to discuss India&#8217;s national anthem, Erdogan&#8217;s attempt to save the Lira and a strong batch of new global despots. Plus it&#8217;s India v Great Britain in The Great Train Off."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/qihbYBUe4-o"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2016/12/bugle-4009-trump-turkey-trains/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "http://bugle.prx.org/?p=562"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 4008 – Citation Needed"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sat, 10 Dec 2016 09:31:54 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/mnf0Q5b9XIc/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and Nish report on the latest experiments with democracy in Europe]]>'	Element data: "Andy and Nish report on the latest experiments with democracy in Europe"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/0ccf6d67-ea90-4aab-9b34-c281a274d044/bugle2008_wp.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"43606100"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "43606100 (43606100)
[4]Found element "itunes:subtitle"
Element data: "Bugle 4008 - Citation Needed"
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "47:55"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and Nish report on the latest experiments with democracy in Europe and look at the latest actions of Donald Trump and Boris Johnson. Plus - India Jones, traffic lights and your letters]]>'	Element data: "Andy and Nish report on the latest experiments with democracy in Europe and look at the latest actions of Donald Trump and Boris Johnson. Plus - India Jones, traffic lights and your letters"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"https://f.prxu.org/thebugle/images/aade6bdb-65a2-4b2d-95fc-e0a89bc42f95/bugle_zag-1400.png"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"43606100"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/0ccf6d67-ea90-4aab-9b34-c281a274d044/bugle2008_wp.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and Nish report on the latest experiments with democracy in Europe and look at the latest actions of Donald Trump and Boris Johnson. Plus &#8211; India Jones, traffic lights and your letters"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/mnf0Q5b9XIc"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2016/12/bugle-2008-citation-needed/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "http://bugle.prx.org/?p=558"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 4007 – Mid Atlantica"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sat, 03 Dec 2016 14:23:20 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/inlzr8sC0ns/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy is joined by Wyatt Cenac to look at the latest developments either side of the Atlantic, plus Fidel Castro and buckets of gold.]]>'	Element data: "Andy is joined by Wyatt Cenac to look at the latest developments either side of the Atlantic, plus Fidel Castro and buckets of gold."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/8e0be3a1-b335-4d58-a08b-6ee7b22f395d/Bugle4007_wp.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"42488477"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "42488477 (42488477)
[4]Found element "itunes:subtitle"
Element data: "Bugle 4007 - Mid Atlantica"
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "46:45"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy is joined by Wyatt Cenac to look at the latest developments either side of the Atlantic, plus Fidel Castro and buckets of gold.]]>'	Element data: "Andy is joined by Wyatt Cenac to look at the latest developments either side of the Atlantic, plus Fidel Castro and buckets of gold."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"https://f.prxu.org/thebugle/images/aade6bdb-65a2-4b2d-95fc-e0a89bc42f95/bugle_zag-1400.png"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"42488477"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/8e0be3a1-b335-4d58-a08b-6ee7b22f395d/Bugle4007_wp.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy is joined by Wyatt Cenac to look at the latest developments either side of the Atlantic, plus Fidel Castro and buckets of gold."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/inlzr8sC0ns"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2016/12/bugle-4007-mid-atlantica/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "http://bugle.prx.org/?p=549"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 4006 – Zaltzman Showdown"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sun, 27 Nov 2016 18:42:33 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/WNQMM2kJa10/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Helen Zalzman joins Andy to talk Tony Blair, recounts and Donald Trump.]]>'	Element data: "Helen Zalzman joins Andy to talk Tony Blair, recounts and Donald Trump."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/304a2a4c-c8a4-4cbb-8daf-dc830014955f/Bugle4006.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"43721648"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "43721648 (43721648)
[4]Found element "itunes:subtitle"
Element data: "Bugle 4006 - Zaltzman Showdown"
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "48:02"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Helen Zaltzman co-hosts in Andy's shed this week. Tony Blair emerges for another go at something or other in the UK, in America a recount makes the headlines and Andy premieres the premier weekly Donald Trump Bugle feature.]]>'	Element data: "Helen Zaltzman co-hosts in Andy's shed this week. Tony Blair emerges for another go at something or other in the UK, in America a recount makes the headlines and Andy premieres the premier weekly Donald Trump Bugle feature."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"https://f.prxu.org/thebugle/images/aade6bdb-65a2-4b2d-95fc-e0a89bc42f95/bugle_zag-1400.png"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"43721648"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/304a2a4c-c8a4-4cbb-8daf-dc830014955f/Bugle4006.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Helen Zaltzman co-hosts in Andy&#8217;s shed this week. Tony Blair emerges for another go at something or other in the UK, in America a recount makes the headlines and Andy premieres the premier weekly Donald Trump Bugle feature."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/WNQMM2kJa10"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2016/11/bugle-4006-zaltzman-showdown/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "http://bugle.prx.org/?p=541"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 4005 – Who Do I Bribe?"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sun, 20 Nov 2016 14:43:25 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/3dl04z_LJlA/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        In a break from Brexit and electogeddon, The Bugle turns it's eyes on India]]>'	Element data: "In a break from Brexit and electogeddon, The Bugle turns it's eyes on India"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/7d51095f-9f1d-4008-9b0e-8dff39afb02d/bugle4005_WP-1.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"41643363"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "41643363 (41643363)
[4]Found element "itunes:subtitle"
Element data: "Bugle 4005 - Who Do I Bribe?"
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "45:52"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        In a break from Brexit and electogeddon, The Bugle turns it's eyes on India, with RotW correspondent Anuvab Pal. Includes corruption, queues, statues and an obligatory overseas look at the US.]]>'	Element data: "In a break from Brexit and electogeddon, The Bugle turns it's eyes on India, with RotW correspondent Anuvab Pal. Includes corruption, queues, statues and an obligatory overseas look at the US."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"https://f.prxu.org/thebugle/images/aade6bdb-65a2-4b2d-95fc-e0a89bc42f95/bugle_zag-1400.png"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"41643363"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/7d51095f-9f1d-4008-9b0e-8dff39afb02d/bugle4005_WP-1.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "In a break from Brexit and electogeddon, The Bugle turns it&#8217;s eyes on India, with RotW correspondent Anuvab Pal. Includes corruption, queues, statues and an obligatory overseas look at the US."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/3dl04z_LJlA"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2016/11/bugle-4005-who-do-i-bribe/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "http://bugle.prx.org/?p=536"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 4004 – ZERO DT"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 11 Nov 2016 19:28:12 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/S8HFSjqXLYs/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and Hari Kondabolu try and fail to make sense of the US Presidential election.]]>'	Element data: "Andy and Hari Kondabolu try and fail to make sense of the US Presidential election."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/97c75cee-ff23-4260-a749-bcae1e5dd59c/bugle4004_wp.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"40366498"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "40366498 (40366498)
[4]Found element "itunes:subtitle"
Element data: "Bugle 4004 - ZERO DT"
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "44:32"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and Hari Kondabolu try and fail to make sense of the US Presidential election. Also - why are McDonalds taking legal action against a whole city, and why did Andy think this was a good week to do ONE OF HIS HATE CRIMES?]]>'	Element data: "Andy and Hari Kondabolu try and fail to make sense of the US Presidential election. Also - why are McDonalds taking legal action against a whole city, and why did Andy think this was a good week to do ONE OF HIS HATE CRIMES?"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"https://f.prxu.org/thebugle/images/aade6bdb-65a2-4b2d-95fc-e0a89bc42f95/bugle_zag-1400.png"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"40366498"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/97c75cee-ff23-4260-a749-bcae1e5dd59c/bugle4004_wp.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and Hari Kondabolu try and fail to make sense of the US Presidential election. Also &#8211; why are McDonalds taking legal action against a whole city, and why did Andy think this was a good week to do ONE OF HIS HATE CRIMES?"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/S8HFSjqXLYs"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2016/11/bugle-4004-zero-dt/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "http://bugle.prx.org/?p=532"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 4003 – Vote Rochelle"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sat, 05 Nov 2016 17:15:07 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/bPN8nJLhKJQ/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy is joined by Wyatt Cenac to discuss the final days of the US elections]]>'	Element data: "Andy is joined by Wyatt Cenac to discuss the final days of the US elections"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/7d4bbc38-6c94-4853-92e3-abc637cfadf6/bugle4003_wp.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"37567007"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "37567007 (37567007)
[4]Found element "itunes:subtitle"
Element data: "Bugle 4003 - Vote Rochelle"
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "41:37"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy is joined by Wyatt Cenac to discuss the final days of the US elections - what would Trump do in his 1st 100 days, and why is Hilary 'an' antichrist? Plus, sleep news.]]>'	Element data: "Andy is joined by Wyatt Cenac to discuss the final days of the US elections - what would Trump do in his 1st 100 days, and why is Hilary 'an' antichrist? Plus, sleep news."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"https://f.prxu.org/thebugle/images/aade6bdb-65a2-4b2d-95fc-e0a89bc42f95/bugle_zag-1400.png"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"37567007"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/7d4bbc38-6c94-4853-92e3-abc637cfadf6/bugle4003_wp.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy is joined by Wyatt Cenac to discuss the final days of the US elections &#8211; what would Trump do in his 1st 100 days, and why is Hilary &#8216;an&#8217; Antichrist? Plus, sleep news."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/bPN8nJLhKJQ"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2016/11/bugle-4003-vote-rochelle/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "http://bugle.prx.org/?p=527"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 4002 – Where’s MY Knighthood?"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sat, 29 Oct 2016 18:22:51 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/naLPhLFhzws/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Britain post-Brexit, the refugee crisis and the Chicago Cubs]]>'	Element data: "Britain post-Brexit, the refugee crisis and the Chicago Cubs"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/b56f9c14-a367-4301-ba63-9645ac76a82e/BUGLE4002_WP.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"40320940"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "40320940 (40320940)
[4]Found element "itunes:subtitle"
Element data: "Where's MY Knighthood?"
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "44:30"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Nish Kumar joins Andy this time to discuss Britain post-Brexit, the refugee crisis and the Chicago Cubs]]>'	Element data: "Nish Kumar joins Andy this time to discuss Britain post-Brexit, the refugee crisis and the Chicago Cubs"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"https://f.prxu.org/thebugle/images/aade6bdb-65a2-4b2d-95fc-e0a89bc42f95/bugle_zag-1400.png"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"40320940"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/b56f9c14-a367-4301-ba63-9645ac76a82e/BUGLE4002_WP.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Nish Kumar joins Andy this time to discuss Britain post-Brexit, the refugee crisis and the Chicago Cubs"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/naLPhLFhzws"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2016/10/bugle-4002-wheres-my-knighthood/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "http://bugle.prx.org/?p=524"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 4001 – Tony The Tiger RIP"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Mon, 24 Oct 2016 16:09:13 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/2OLQ6zeVWqQ/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        US Elections, pumpkins and Finland]]>'	Element data: "US Elections, pumpkins and Finland"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/0e61c214-4539-40cf-aaf0-943279232d70/BUGLE4001_WP.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"39301538"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "39301538 (39301538)
[4]Found element "itunes:subtitle"
Element data: "Tony The Tiger RIP"
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "43:26"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy is joined by Hari Kondabolu to discuss the US Election, Finland's birthday and pumpkin spice.]]>'	Element data: "Andy is joined by Hari Kondabolu to discuss the US Election, Finland's birthday and pumpkin spice."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"https://f.prxu.org/thebugle/images/aade6bdb-65a2-4b2d-95fc-e0a89bc42f95/bugle_zag-1400.png"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"39301538"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/0e61c214-4539-40cf-aaf0-943279232d70/BUGLE4001_WP.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy is joined by Hari Kondabolu to discuss the US Election, Finland&#8217;s birthday and pumpkin spice."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/2OLQ6zeVWqQ"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2016/10/bugle-4001-tony-the-tiger-rip/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "http://bugle.prx.org/?p=518"
End of element "guid".
[4]Found element "title"
Element data: "Buglemas Eve – A Preview"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Mon, 17 Oct 2016 17:08:04 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/LXAkBbCQ4P0/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        The Bugle is back on 24th October]]>'	Element data: "The Bugle is back on 24th October"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/decf6d4c-cdeb-40eb-8223-80b571a57742/FINALPREVIEW.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"25437414"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "25437414 (25437414)
[4]Found element "itunes:subtitle"
Element data: "Andy introduced the new cast to the show"
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "28:59"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy Zaltzman is joined by Hari Kondabolu, Nish Kumar, Helen Zaltzman and Anuvab Pal to preview the return of The Bugle]]>'	Element data: "Andy Zaltzman is joined by Hari Kondabolu, Nish Kumar, Helen Zaltzman and Anuvab Pal to preview the return of The Bugle"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"https://f.prxu.org/thebugle/images/aade6bdb-65a2-4b2d-95fc-e0a89bc42f95/bugle_zag-1400.png"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"25437414"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/decf6d4c-cdeb-40eb-8223-80b571a57742/FINALPREVIEW.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy introduces you to your new best friends. Plus, finally someone has the balls to satirise Cyclocross"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/LXAkBbCQ4P0"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2016/10/buglemas-eve-a-preview/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/28319916"
End of element "guid".
[4]Found element "title"
Element data: "A Bugle update"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 16 Sep 2016 15:14:42 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/oMhTOMNcVxo/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        An update on the NEW NEW Bugle...]]>'	Element data: "An update on the NEW NEW Bugle..."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/f96723e0-c107-4e1c-ab22-bdf5fadc4dec/A-Bugle-update.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"25040437"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "25040437 (25040437)
[4]Found element "itunes:subtitle"
Element data: "An update on the NEW NEW Bugle..."
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "19:52"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        An update on the NEW NEW Bugle...]]>'	Element data: "An update on the NEW NEW Bugle..."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000182902433-22nqmw-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"25040437"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/f96723e0-c107-4e1c-ab22-bdf5fadc4dec/A-Bugle-update.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "An update on the NEW NEW Bugle&#8230;"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/oMhTOMNcVxo"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2016/09/a-bugle-update/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/26723701"
End of element "guid".
[4]Found element "title"
Element data: "VIB – Very Important Bugle"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 03 Jun 2016 08:08:05 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/WIDLWbWj9ww/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        A very important Bugle]]>'	Element data: "A very important Bugle"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/1a8eebca-e2b9-4cbf-afab-e90bddbd3eaa/VIB-Very-Important-Bugle.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"17271401"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "17271401 (17271401)
[4]Found element "itunes:subtitle"
Element data: "A very important Bugle"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "20:28"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        A very important Bugle]]>'	Element data: "A very important Bugle"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/avatars-000036816294-7qogzv-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"17271401"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/1a8eebca-e2b9-4cbf-afab-e90bddbd3eaa/VIB-Very-Important-Bugle.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "A very important Bugle"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/WIDLWbWj9ww"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2016/06/vib-very-important-bugle/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/25135543"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 294 – The Chainsaw of Futuristic Justice"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 11 Mar 2016 15:38:16 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/QGc95pQo9AM/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        We're back and we left it to buglers to pick the topics - Trump, Brexit, Bacon and Leicester City are top of your list. #Bugle2016]]>'	Element data: "We're back and we left it to buglers to pick the topics - Trump, Brexit, Bacon and Leicester City are top of your list. #Bugle2016"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/aae137a4-4fc7-4971-b40f-e0264bc03fce/Bugle-294-The-Chainsaw-of-Futuristic-Justice.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"75748280"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "75748280 (75748280)
[4]Found element "itunes:subtitle"
Element data: "We're back and we left it to buglers to pick the …"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "41:56"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        We're back and we left it to buglers to pick the topics - Trump, Brexit, Bacon and Leicester City are top of your list. #Bugle2016]]>'	Element data: "We're back and we left it to buglers to pick the topics - Trump, Brexit, Bacon and Leicester City are top of your list. #Bugle2016"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000150515020-01uh91-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"75748280"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/aae137a4-4fc7-4971-b40f-e0264bc03fce/Bugle-294-The-Chainsaw-of-Futuristic-Justice.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "We&#8217;re back and we left it to buglers to pick the topics &#8211; Trump, Brexit, Bacon and Leicester City are top of your list. #Bugle2016"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/QGc95pQo9AM"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2016/03/bugle-294-the-chainsaw-of-futuristic-justice/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/20785470"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 293 – Slow cook democracy"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 29 May 2015 18:10:46 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/NEqgh8f2ADM/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and John look at the runners and riders for the US elections and have a look at the chaos at FIFA]]>'	Element data: "Andy and John look at the runners and riders for the US elections and have a look at the chaos at FIFA"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/ad1bbf01-90d3-446f-84e5-f77d938eed16/Bugle-293-Slow-cook-democracy.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"29717138"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "29717138 (29717138)
[4]Found element "itunes:subtitle"
Element data: "Andy and John look at the runners and riders for …"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "33:26"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and John look at the runners and riders for the US elections and have a look at the chaos at FIFA]]>'	Element data: "Andy and John look at the runners and riders for the US elections and have a look at the chaos at FIFA"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000118488291-klczta-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"29717138"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/ad1bbf01-90d3-446f-84e5-f77d938eed16/Bugle-293-Slow-cook-democracy.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and John look at the runners and riders for the US elections and have a look at the chaos at FIFA"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/NEqgh8f2ADM"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2015/05/bugle-293-slow-cook-democracy/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/20455208"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 292 – A career defining election"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 08 May 2015 18:25:18 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/G79Y4EmKxEA/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        What have you done Britain? What have you done?]]>'	Element data: "What have you done Britain? What have you done?"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/b40442e9-70b6-4a03-8bd8-d3fe864f5307/Bugle-292-A-career-defining-election.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"23602291"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "23602291 (23602291)
[4]Found element "itunes:subtitle"
Element data: "What have you done Britain? What have you done?"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "27:04"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        What have you done Britain? What have you done?]]>'	Element data: "What have you done Britain? What have you done?"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000116099731-wk7q8v-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"23602291"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/b40442e9-70b6-4a03-8bd8-d3fe864f5307/Bugle-292-A-career-defining-election.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "What have you done Britain? What have you done?"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/G79Y4EmKxEA"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2015/05/bugle-292-a-career-defining-election/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/20239676"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 291- Resistible force versus movable object"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 24 Apr 2015 20:33:01 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/975-a30bgg0/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        John celebrates being on the same list as Kim Jong Un and Vladimir Putin and The Bugle gives it's take on the British election campaign so far.]]>'	Element data: "John celebrates being on the same list as Kim Jong Un and Vladimir Putin and The Bugle gives it's take on the British election campaign so far."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/f7364ad0-ab17-4f57-b2db-b9f8cf7b9204/Bugle-291-Resistible-force-versus-movable-object.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"26956995"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "26956995 (26956995)
[4]Found element "itunes:subtitle"
Element data: "John celebrates being on the same list as Kim Jon…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "30:34"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        John celebrates being on the same list as Kim Jong Un and Vladimir Putin and The Bugle gives it's take on the British election campaign so far.]]>'	Element data: "John celebrates being on the same list as Kim Jong Un and Vladimir Putin and The Bugle gives it's take on the British election campaign so far."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000114511379-xkx2n5-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"26956995"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/f7364ad0-ab17-4f57-b2db-b9f8cf7b9204/Bugle-291-Resistible-force-versus-movable-object.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "John celebrates being on the same list as Kim Jong Un and Vladimir Putin and The Bugle gives it&#8217;s take on the British election campaign so far."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/975-a30bgg0"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2015/04/bugle-291-resistible-force-versus-movable-object/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/19570329"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 290 – Love Letters"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 13 Mar 2015 17:32:50 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/zWzotTN6WKo/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        It's a letters special, featuring Spain, Iran and worried Buglers.]]>'	Element data: "It's a letters special, featuring Spain, Iran and worried Buglers."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/24eb90b0-1d30-4c42-9228-2b26a776fce6/Bugle-290-Love-Letters.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"28981069"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "28981069 (28981069)
[4]Found element "itunes:subtitle"
Element data: "It's a letters special, featuring Spain, Iran and…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "32:40"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        It's a letters special, featuring Spain, Iran and worried Buglers.]]>'	Element data: "It's a letters special, featuring Spain, Iran and worried Buglers."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000109902845-sh1sft-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"28981069"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/24eb90b0-1d30-4c42-9228-2b26a776fce6/Bugle-290-Love-Letters.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "It&#8217;s a letters special, featuring Spain, Iran and worried Buglers."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/zWzotTN6WKo"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2015/03/bugle-290-love-letters/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/19456714"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 289 – Turbo Russia"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 06 Mar 2015 18:21:55 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/b3sWnQHPkas/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Russia becomes a parody of itself, says John Oliver and Andy Zaltzman]]>'	Element data: "Russia becomes a parody of itself, says John Oliver and Andy Zaltzman"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/733a3bc8-798f-49c6-b59c-5c54ed30c009/Bugle-289-Turbo-Russia.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"26707792"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "26707792 (26707792)
[4]Found element "itunes:subtitle"
Element data: "Russia becomes a parody of itself, says John Oliv…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "30:18"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Russia becomes a parody of itself, says John Oliver and Andy Zaltzman]]>'	Element data: "Russia becomes a parody of itself, says John Oliver and Andy Zaltzman"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000109133896-vu1ity-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"26707792"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/733a3bc8-798f-49c6-b59c-5c54ed30c009/Bugle-289-Turbo-Russia.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Russia becomes a parody of itself, says John Oliver and Andy Zaltzman"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/b3sWnQHPkas"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2015/03/bugle-289-turbo-russia/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/19338511"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 288 – Bear Sick"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 27 Feb 2015 18:39:45 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/emHTheHm7vI/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Polar Bears are having a bad time. Here's how bad...]]>'	Element data: "Polar Bears are having a bad time. Here's how bad..."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/b904eff0-506d-46b8-86c7-5f51b8e90ce6/Bugle-288-Bear-Sick.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"22788151"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "22788151 (22788151)
[4]Found element "itunes:subtitle"
Element data: "Polar Bears are having a bad time. Here's how bad…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "26:13"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Polar Bears are having a bad time. Here's how bad...]]>'	Element data: "Polar Bears are having a bad time. Here's how bad..."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000108319804-p2isti-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"22788151"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/b904eff0-506d-46b8-86c7-5f51b8e90ce6/Bugle-288-Bear-Sick.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Polar Bears are having a bad time. Here&#8217;s how bad&#8230;"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/emHTheHm7vI"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2015/02/bugle-288-bear-sick/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/19213396"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 287 – Ecuadoh!"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 20 Feb 2015 17:25:09 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/BueTw_9x1m4/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        John has the latest on his beef with Ecuador, and a Ukraine update.]]>'	Element data: "John has the latest on his beef with Ecuador, and a Ukraine update."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/7f7aed7e-daa1-40da-9741-edad896a3384/Bugle-287-Ecuadoh.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"24530219"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "24530219 (24530219)
[4]Found element "itunes:subtitle"
Element data: "John has the latest on his beef with Ecuador, and…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "28:02"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        John has the latest on his beef with Ecuador, and a Ukraine update.]]>'	Element data: "John has the latest on his beef with Ecuador, and a Ukraine update."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000107419667-ujrby8-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"24530219"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/7f7aed7e-daa1-40da-9741-edad896a3384/Bugle-287-Ecuadoh.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "John has the latest on his beef with Ecuador, and a Ukraine update."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/BueTw_9x1m4"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2015/02/bugle-287-ecuadoh/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/18868078"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 286 – Greekonomics"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 30 Jan 2015 19:18:30 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/F57wbWU2SQw/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Greece elects a new leader and Europe freaks out.]]>'	Element data: "Greece elects a new leader and Europe freaks out."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/7d9d29c6-a6f7-41e1-9a5a-9c693a2c091d/Bugle-286-Greekonomics.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"28857700"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "28857700 (28857700)
[4]Found element "itunes:subtitle"
Element data: "Greece elects a new leader and Europe freaks out."
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "32:32"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Greece elects a new leader and Europe freaks out.]]>'	Element data: "Greece elects a new leader and Europe freaks out."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000105097343-vdr9ks-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"28857700"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/7d9d29c6-a6f7-41e1-9a5a-9c693a2c091d/Bugle-286-Greekonomics.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Greece elects a new leader and Europe freaks out."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/F57wbWU2SQw"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2015/01/bugle-286-greekonomics/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/18761783"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 285 – Where’s Bono?"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sat, 24 Jan 2015 10:29:53 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/liN29jFkzHU/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        World leaders head to Davos, but the big question has to be asked... where's Bono?

You can donate to Michelle's fund here: www.gofundme.com/this-is-michelle]]>'	Element data: "World leaders head to Davos, but the big question has to be asked... where's Bono?

You can donate to Michelle's fund here: www.gofundme.com/this-is-michelle"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/193f2a45-663e-403c-bf84-d0a930a427bf/Bugle-285-Wheres-Bono_.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"33108926"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "33108926 (33108926)
[4]Found element "itunes:subtitle"
Element data: "World leaders head to Davos, but the big question has to be asked... where's Bono?"
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "36:58"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        World leaders head to Davos, but the big question has to be asked... where's Bono?  You can donate to Michelle's fund here: www.gofundme.com/this-is-michelle]]>'	Element data: "World leaders head to Davos, but the big question has to be asked... where's Bono?  You can donate to Michelle's fund here: www.gofundme.com/this-is-michelle"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000104415210-e10sl8-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"33108926"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/193f2a45-663e-403c-bf84-d0a930a427bf/Bugle-285-Wheres-Bono_.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "World leaders head to Davos, but the big question has to be asked&#8230; where&#8217;s Bono?"
End of element "p".
P Data
P Data: Above epn is content:encoded
[5]Found element "p"
Element data: "You can donate to Michelle&#8217;s fund here: www.gofundme.com/this-is-michelle"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/liN29jFkzHU"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2015/01/bugle-285-wheres-bono/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/18627606"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 284 – Too Hot For Print"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 16 Jan 2015 02:31:42 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/sM8tz0FfdE0/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        http://www.gofundme.com/this-is-michelle
Unity March, Oscars, Birmingham, Orthodox censors.]]>'	Element data: "http://www.gofundme.com/this-is-michelle
Unity March, Oscars, Birmingham, Orthodox censors."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/3e0cf077-e289-4793-9d3b-c10e6d256d9a/Bugle-284-Too-Hot-For-Print.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"59060175"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "59060175 (59060175)
[4]Found element "itunes:subtitle"
Element data: "Unity March, Oscars, Birmingham, Orthodox censors."
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "33:15"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Unity March, Oscars, Birmingham, Orthodox censors.  http://www.gofundme.com/this-is-michelle]]>'	Element data: "Unity March, Oscars, Birmingham, Orthodox censors.  http://www.gofundme.com/this-is-michelle"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000103500922-81pnz2-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"59060175"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/3e0cf077-e289-4793-9d3b-c10e6d256d9a/Bugle-284-Too-Hot-For-Print.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Found element "br"[6]
End of element "br".
STAG: 'br'
Element data: "Unity March, Oscars, Birmingham, Orthodox censors."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/sM8tz0FfdE0"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2015/01/bugle-284-too-hot-for-print/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/18526969"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 283 – #JeSuisCharlie"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 09 Jan 2015 20:53:42 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/Z8zAeGMkgHE/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        A show dedicated to all the people of the world who aren't arseholes. Happy 2015!]]>'	Element data: "A show dedicated to all the people of the world who aren't arseholes. Happy 2015!"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/1fb580eb-ce04-4c84-ada2-f85f8ccdbdad/Bugle-283-JeSuisCharlie.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"29511476"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "29511476 (29511476)
[4]Found element "itunes:subtitle"
Element data: "A show dedicated to all the people of the world w…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "33:13"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        A show dedicated to all the people of the world who aren't arseholes. Happy 2015!]]>'	Element data: "A show dedicated to all the people of the world who aren't arseholes. Happy 2015!"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000102813060-6p96nl-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"29511476"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/1fb580eb-ce04-4c84-ada2-f85f8ccdbdad/Bugle-283-JeSuisCharlie.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "A show dedicated to all the people of the world who aren&#8217;t arseholes. Happy 2015!"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/Z8zAeGMkgHE"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2015/01/bugle-283-jesuischarlie/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/18214605"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 282 – Twas the Dick before Christmas"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Thu, 18 Dec 2014 20:27:10 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/_b2mliFRem0/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Finally, Andy and John put the best of the worst against eachother in a battle of international dickery]]>'	Element data: "Finally, Andy and John put the best of the worst against eachother in a battle of international dickery"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/4b42cc24-23e6-4660-bc31-cb84d2daaa96/Bugle-282-Twas-the-Dick-before-Christmas.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"37705604"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "37705604 (37705604)
[4]Found element "itunes:subtitle"
Element data: "Finally, Andy and John put the best of the worst …"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "41:45"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Finally, Andy and John put the best of the worst against eachother in a battle of international dickery]]>'	Element data: "Finally, Andy and John put the best of the worst against eachother in a battle of international dickery"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000100661136-xxl14s-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"37705604"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/4b42cc24-23e6-4660-bc31-cb84d2daaa96/Bugle-282-Twas-the-Dick-before-Christmas.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Finally, Andy and John put the best of the worst against eachother in a battle of international dickery"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/_b2mliFRem0"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/12/bugle-282-twas-the-dick-before-christmas/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/18122438"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 281 – One star review"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 12 Dec 2014 19:40:31 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/IM3YLKBS_jk/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and John discuss the latest on the CIA and their 'aggressive quizzing'.]]>'	Element data: "Andy and John discuss the latest on the CIA and their 'aggressive quizzing'."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/a5d8d86f-a8ee-4405-8ae1-0c097b5d59fa/Bugle-281-One-star-review.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"36516050"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "36516050 (36516050)
[4]Found element "itunes:subtitle"
Element data: "Andy and John discuss the latest on the CIA and t…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "40:31"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and John discuss the latest on the CIA and their 'aggressive quizzing'.]]>'	Element data: "Andy and John discuss the latest on the CIA and their 'aggressive quizzing'."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000100042728-1rasd7-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"36516050"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/a5d8d86f-a8ee-4405-8ae1-0c097b5d59fa/Bugle-281-One-star-review.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and John discuss the latest on the CIA and their &#8216;aggressive quizzing&#8217;."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/IM3YLKBS_jk"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/12/bugle-281-one-star-review/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/18023892"
End of element "guid".
[4]Found element "title"
Element data: "The Bugle 280 – On the wAI out"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sat, 06 Dec 2014 13:09:15 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/jgZYVOYmU-8/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Robots are taking over, and we have an exclusive interview]]>'	Element data: "Robots are taking over, and we have an exclusive interview"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/8c48fc6a-9bc3-44b9-98b6-5ff105510887/The-Bugle-280-On-the-wAI-out.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"32422961"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "32422961 (32422961)
[4]Found element "itunes:subtitle"
Element data: "Robots are taking over, and we have an exclusive …"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "36:15"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Robots are taking over, and we have an exclusive interview]]>'	Element data: "Robots are taking over, and we have an exclusive interview"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000099382816-083z9d-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"32422961"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/8c48fc6a-9bc3-44b9-98b6-5ff105510887/The-Bugle-280-On-the-wAI-out.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Robots are taking over, and we have an exclusive interview"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/jgZYVOYmU-8"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/12/the-bugle-280-on-the-wai-out/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/17802100"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 279 – Chills, thrills and Blatter aches"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 21 Nov 2014 20:09:16 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/YztOacPVPv8/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        It's cold in Buffalo, almost as cold as the hearts of Vlad and Sepp. Plus, dick news and Norwegian Dead Guy day.]]>'	Element data: "It's cold in Buffalo, almost as cold as the hearts of Vlad and Sepp. Plus, dick news and Norwegian Dead Guy day."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/d0793913-07ec-479c-8eb3-9705e7a24730/Bugle-279-Chills-thrills-and-Blatter-aches.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"35058262"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "35058262 (35058262)
[4]Found element "itunes:subtitle"
Element data: "It's cold in Buffalo, almost as cold as the heart…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "39:00"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        It's cold in Buffalo, almost as cold as the hearts of Vlad and Sepp. Plus, dick news and Norwegian Dead Guy day.]]>'	Element data: "It's cold in Buffalo, almost as cold as the hearts of Vlad and Sepp. Plus, dick news and Norwegian Dead Guy day."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000097893611-lf9mj7-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"35058262"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/d0793913-07ec-479c-8eb3-9705e7a24730/Bugle-279-Chills-thrills-and-Blatter-aches.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "It&#8217;s cold in Buffalo, almost as cold as the hearts of Vlad and Sepp. Plus, dick news and Norwegian Dead Guy day."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/YztOacPVPv8"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/11/bugle-279-chills-thrills-and-blatter-aches/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/17695778"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 278 – SpaceCats: The Search For Merch"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 14 Nov 2014 23:27:51 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/_tezCRUasfg/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Space Exploration! Rihanna! Vintage BBC Recordings! All words that are connected to this podcast in some way.]]>'	Element data: "Space Exploration! Rihanna! Vintage BBC Recordings! All words that are connected to this podcast in some way."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/4d46fff5-279a-4f4d-bdb2-eb7c272022e7/Bugle-278-SpaceCats_-The-Search-For-Merch.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"92314076"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "92314076 (92314076)
[4]Found element "itunes:subtitle"
Element data: "Space Exploration! Rihanna! Vintage BBC Recording…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "40:57"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Space Exploration! Rihanna! Vintage BBC Recordings! All words that are connected to this podcast in some way.]]>'	Element data: "Space Exploration! Rihanna! Vintage BBC Recordings! All words that are connected to this podcast in some way."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000097186064-pdqlqq-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"92314076"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/4d46fff5-279a-4f4d-bdb2-eb7c272022e7/Bugle-278-SpaceCats_-The-Search-For-Merch.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Space Exploration! Rihanna! Vintage BBC Recordings! All words that are connected to this podcast in some way."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/_tezCRUasfg"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/11/bugle-278-spacecats-the-search-for-merch/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/17566463"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 277 – Wow! Why?"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Thu, 06 Nov 2014 18:38:53 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/AVHiLGtAKjs/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and John celebrate daredevils of the world. Warning, this show is one of 'those' ones, with the 'moments'.]]>'	Element data: "Andy and John celebrate daredevils of the world. Warning, this show is one of 'those' ones, with the 'moments'."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/1d26b797-e0fe-4f9c-8993-931b33a14ac6/Bugle-277-Wow-Why_.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"29133248"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "29133248 (29133248)
[4]Found element "itunes:subtitle"
Element data: "Andy and John celebrate daredevils of the world. …"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "32:50"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and John celebrate daredevils of the world. Warning, this show is one of 'those' ones, with the 'moments'.]]>'	Element data: "Andy and John celebrate daredevils of the world. Warning, this show is one of 'those' ones, with the 'moments'."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000096328289-rbubul-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"29133248"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/1d26b797-e0fe-4f9c-8993-931b33a14ac6/Bugle-277-Wow-Why_.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and John celebrate daredevils of the world. Warning, this show is one of &#8216;those&#8217; ones, with the &#8216;moments&#8217;."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/AVHiLGtAKjs"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/11/bugle-277-wow-why/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/17351041"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 276 – Calypso bad"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Thu, 23 Oct 2014 17:34:18 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/uZ_pPOck1SY/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        What's happening in Britain? Why are white men singing reggae songs about immigration?]]>'	Element data: "What's happening in Britain? Why are white men singing reggae songs about immigration?"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/3a098085-9d22-4af3-9998-421d02d10aa0/Bugle-276-Calypso-bad.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"29320053"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "29320053 (29320053)
[4]Found element "itunes:subtitle"
Element data: "What's happening in Britain? Why are white men si…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "33:01"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        What's happening in Britain? Why are white men singing reggae songs about immigration?]]>'	Element data: "What's happening in Britain? Why are white men singing reggae songs about immigration?"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000094891920-z8mmnq-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"29320053"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/3a098085-9d22-4af3-9998-421d02d10aa0/Bugle-276-Calypso-bad.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "What&#8217;s happening in Britain? Why are white men singing reggae songs about immigration?"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/uZ_pPOck1SY"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/10/bugle-276-calypso-bad/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/17153271"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 275 The Ebola Tombola"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 10 Oct 2014 17:58:49 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/Y1FpPXC4Lrg/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        While Ebola continues to be quite a nuisance, Brazil weighs up the importance of footballers as an election draws nearer and The Bugle leaks some smoking hot media featuring your favourite celebrities recorded au naturale.]]>'	Element data: "While Ebola continues to be quite a nuisance, Brazil weighs up the importance of footballers as an election draws nearer and The Bugle leaks some smoking hot media featuring your favourite celebrities recorded au naturale."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/6a0f6768-f4a3-4de5-a5e1-785b73145a62/Bugle-275-The-Ebola-Tombola.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"66299662"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "66299662 (66299662)
[4]Found element "itunes:subtitle"
Element data: "While Ebola continues to be quite a nuisance, Bra…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "30:07"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        While Ebola continues to be quite a nuisance, Brazil weighs up the importance of footballers as an election draws nearer and The Bugle leaks some smoking hot media featuring your favourite celebrities recorded au naturale.]]>'	Element data: "While Ebola continues to be quite a nuisance, Brazil weighs up the importance of footballers as an election draws nearer and The Bugle leaks some smoking hot media featuring your favourite celebrities recorded au naturale."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000093599681-r7oh0z-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"66299662"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/6a0f6768-f4a3-4de5-a5e1-785b73145a62/Bugle-275-The-Ebola-Tombola.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "While Ebola continues to be quite a nuisance, Brazil weighs up the importance of footballers as an election draws nearer and The Bugle leaks some smoking hot media featuring your favourite celebrities recorded au naturale."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/Y1FpPXC4Lrg"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/10/bugle-275-the-ebola-tombola/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/16933518"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 274 – Beard means business"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Thu, 25 Sep 2014 16:48:54 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/onBicx4f_ag/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        The world meets again to discuss the environment, and this time it has beards! Famous people with beards!]]>'	Element data: "The world meets again to discuss the environment, and this time it has beards! Famous people with beards!"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/44ed8456-8653-4362-97ad-a340682df041/Bugle-274-Beard-means-business.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"24974141"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "24974141 (24974141)
[4]Found element "itunes:subtitle"
Element data: "The world meets again to discuss the environment,…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "28:30"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        The world meets again to discuss the environment, and this time it has beards! Famous people with beards!]]>'	Element data: "The world meets again to discuss the environment, and this time it has beards! Famous people with beards!"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000092110651-f680ho-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"24974141"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/44ed8456-8653-4362-97ad-a340682df041/Bugle-274-Beard-means-business.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "The world meets again to discuss the environment, and this time it has beards! Famous people with beards!"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/onBicx4f_ag"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/09/bugle-274-beard-means-business/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/16831425"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 273 – Season 2!"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Thu, 18 Sep 2014 17:21:56 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/J2KjxvXfydw/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        The Bugle is back and not a moment too soon! Scotland, what have you become?]]>'	Element data: "The Bugle is back and not a moment too soon! Scotland, what have you become?"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/64913c36-ac0a-48e4-89ce-e2787a5d9103/Bugle-273-Season-2.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"29698712"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "29698712 (29698712)
[4]Found element "itunes:subtitle"
Element data: "The Bugle is back and not a moment too soon! Scot…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "33:25"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        The Bugle is back and not a moment too soon! Scotland, what have you become?]]>'	Element data: "The Bugle is back and not a moment too soon! Scotland, what have you become?"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000091414713-wvgp1t-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"29698712"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/64913c36-ac0a-48e4-89ce-e2787a5d9103/Bugle-273-Season-2.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "The Bugle is back and not a moment too soon! Scotland, what have you become?"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/J2KjxvXfydw"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/09/bugle-273-season-2/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/15409795"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 272 – WORLD CUP!"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Thu, 12 Jun 2014 21:23:31 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/_09W3d9dolE/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        The news is: There is no news! WORLD CUP!]]>'	Element data: "The news is: There is no news! WORLD CUP!"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/efe21d7b-4f4c-4803-a028-cbb0e5661720/Bugle-272-WORLD-CUP.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"30502769"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "30502769 (30502769)
[4]Found element "itunes:subtitle"
Element data: "The news is: There is no news! WORLD CUP!"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "34:15"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        The news is: There is no news! WORLD CUP!]]>'	Element data: "The news is: There is no news! WORLD CUP!"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000082209409-61yudu-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"30502769"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/efe21d7b-4f4c-4803-a028-cbb0e5661720/Bugle-272-WORLD-CUP.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "The news is: There is no news! WORLD CUP!"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/_09W3d9dolE"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/06/bugle-272-world-cup/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/15297915"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 271 – Abdicupdate"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Thu, 05 Jun 2014 17:37:16 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/yeKyQHZ5jPQ/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and John discuss the unexpected retirements of a batch of royal monarchs, and why THE QUEEN won't be following]]>'	Element data: "Andy and John discuss the unexpected retirements of a batch of royal monarchs, and why THE QUEEN won't be following"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/a9fd9440-a9a8-4b6f-a71b-736f58e7ad74/Bugle-271-Abdicupdate.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"29641492"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "29641492 (29641492)
[4]Found element "itunes:subtitle"
Element data: "Andy and John discuss the unexpected retirements …"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "33:21"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and John discuss the unexpected retirements of a batch of royal monarchs, and why THE QUEEN won't be following]]>'	Element data: "Andy and John discuss the unexpected retirements of a batch of royal monarchs, and why THE QUEEN won't be following"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000081546527-nzrq9k-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"29641492"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/a9fd9440-a9a8-4b6f-a71b-736f58e7ad74/Bugle-271-Abdicupdate.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and John discuss the unexpected retirements of a batch of royal monarchs, and why THE QUEEN won&#8217;t be following"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/yeKyQHZ5jPQ"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/06/bugle-271-abdicupdate/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/15198910"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 270 – Fruitcakes and Loonies"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 30 May 2014 11:54:54 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/H-GSKJql7kU/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Farage and Le Pen lead the charge to bring Europe back to the good old days, assuming bloody and broken is considered good. Plus, wasp news, and the outcome of the Zaltzman v Oliver Pool Championships]]>'	Element data: "Farage and Le Pen lead the charge to bring Europe back to the good old days, assuming bloody and broken is considered good. Plus, wasp news, and the outcome of the Zaltzman v Oliver Pool Championships"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/88b1860b-a3c0-43fe-a6f3-32317a39a21b/Bugle-270-Fruitcakes-and-Loonies.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"26866340"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "26866340 (26866340)
[4]Found element "itunes:subtitle"
Element data: "Farage and Le Pen lead the charge to bring Europe…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "30:28"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Farage and Le Pen lead the charge to bring Europe back to the good old days, assuming bloody and broken is considered good.  Plus, wasp news, and the outcome of the Zaltzman v Oliver Pool Championships]]>'	Element data: "Farage and Le Pen lead the charge to bring Europe back to the good old days, assuming bloody and broken is considered good.  Plus, wasp news, and the outcome of the Zaltzman v Oliver Pool Championships"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000080938611-7djjf4-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"26866340"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/88b1860b-a3c0-43fe-a6f3-32317a39a21b/Bugle-270-Fruitcakes-and-Loonies.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Farage and Le Pen lead the charge to bring Europe back to the good old days, assuming bloody and broken is considered good. Plus, wasp news, and the outcome of the Zaltzman v Oliver Pool Championships"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/H-GSKJql7kU"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/05/bugle-270-fruitcakes-and-loonies/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/15149435"
End of element "guid".
[4]Found element "title"
Element data: "The Bugle – Maychive II"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Tue, 27 May 2014 12:48:33 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/IQiE2vOVcNs/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Some stuff that happened in May, before this May (but since 2007).]]>'	Element data: "Some stuff that happened in May, before this May (but since 2007)."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/7e687efd-8807-4989-8484-798ee0f95f2e/The-Bugle-Maychive-II.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"37898227"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "37898227 (37898227)
[4]Found element "itunes:subtitle"
Element data: "Some stuff that happened in May, before this May …"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "41:57"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Some stuff that happened in May, before this May (but since 2007).]]>'	Element data: "Some stuff that happened in May, before this May (but since 2007)."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000080632479-khmwrs-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"37898227"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/7e687efd-8807-4989-8484-798ee0f95f2e/The-Bugle-Maychive-II.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Some stuff that happened in May, before this May (but since 2007)."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/IQiE2vOVcNs"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/05/the-bugle-maychive-ii/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/14970305"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 269 – Fiddlesticks to Russia"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Thu, 15 May 2014 18:31:05 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/0HSqDb91D_s/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Don't tell Vladimir Putin what you think of him, it could be a £40 fine. Plus, why are Brazilian football fans scared?]]>'	Element data: "Don't tell Vladimir Putin what you think of him, it could be a £40 fine. Plus, why are Brazilian football fans scared?"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/dd23dae9-b981-429e-a9a1-c34be72f5e4d/Bugle-269-Fiddlesticks-to-Russia.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"24293422"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "24293422 (24293422)
[4]Found element "itunes:subtitle"
Element data: "Don't tell Vladimir Putin what you think of him, …"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "27:47"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Don't tell Vladimir Putin what you think of him, it could be a £40 fine. Plus, why are Brazilian football fans scared?]]>'	Element data: "Don't tell Vladimir Putin what you think of him, it could be a £40 fine. Plus, why are Brazilian football fans scared?"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000079543818-sp8954-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"24293422"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/dd23dae9-b981-429e-a9a1-c34be72f5e4d/Bugle-269-Fiddlesticks-to-Russia.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Don&#8217;t tell Vladimir Putin what you think of him, it could be a £40 fine. Plus, why are Brazilian football fans scared?"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/0HSqDb91D_s"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/05/bugle-269-fiddlesticks-to-russia/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/14859519"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 268 BrokeSadleBack Mountain"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Thu, 08 May 2014 23:11:31 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/k44z9pmgN1I/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        There's gold at the bottom of the ocean and a mountain for sale. Let's team up.]]>'	Element data: "There's gold at the bottom of the ocean and a mountain for sale. Let's team up."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/c281ab0f-0ccb-4d0f-a892-d65a8bc507ca/Bugle-268-BrokeSadleBack-Mountain.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"67628802"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "67628802 (67628802)
[4]Found element "itunes:subtitle"
Element data: "There's gold at the bottom of the ocean and a mou…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "30:40"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        There's gold at the bottom of the ocean and a mountain for sale. Let's team up.]]>'	Element data: "There's gold at the bottom of the ocean and a mountain for sale. Let's team up."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000078871919-vzhwa4-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"67628802"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/c281ab0f-0ccb-4d0f-a892-d65a8bc507ca/Bugle-268-BrokeSadleBack-Mountain.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "There&#8217;s gold at the bottom of the ocean and a mountain for sale. Let&#8217;s team up."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/k44z9pmgN1I"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/05/bugle-268-brokesadleback-mountain/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/14783738"
End of element "guid".
[4]Found element "title"
Element data: "Maychive"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sun, 04 May 2014 10:56:54 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/EhE6QiL-tPY/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        This week in history, according to The Bugle]]>'	Element data: "This week in history, according to The Bugle"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/fcabb859-54b6-43ec-9f48-2bdcdb1dcd93/Maychive.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"37057615"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "37057615 (37057615)
[4]Found element "itunes:subtitle"
Element data: "This week in history, according to The Bugle"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "41:05"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        This week in history, according to The Bugle]]>'	Element data: "This week in history, according to The Bugle"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000078408659-2qhhto-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"37057615"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/fcabb859-54b6-43ec-9f48-2bdcdb1dcd93/Maychive.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "This week in history, according to The Bugle"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/EhE6QiL-tPY"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/05/maychive/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/14535119"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 267 Gaining My Religion"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 18 Apr 2014 19:05:52 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/ynJyLTrIH-U/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and John talk life expectancy and religion. Perfectly normal when approaching a birthday.]]>'	Element data: "Andy and John talk life expectancy and religion. Perfectly normal when approaching a birthday."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/f60b8ea8-eb9d-4fcb-8ef0-5707d78768a6/Bugle-267-Gaining-My-Religion.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"60938733"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "60938733 (60938733)
[4]Found element "itunes:subtitle"
Element data: "Andy and John talk life expectancy and religion. …"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "27:53"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and John talk life expectancy and religion. Perfectly normal when approaching a birthday.]]>'	Element data: "Andy and John talk life expectancy and religion. Perfectly normal when approaching a birthday."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000076918912-n7uqhj-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"60938733"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/f60b8ea8-eb9d-4fcb-8ef0-5707d78768a6/Bugle-267-Gaining-My-Religion.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and John talk life expectancy and religion. Perfectly normal when approaching a birthday."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/ynJyLTrIH-U"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/04/bugle-267-gaining-my-religion/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/14423029"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 266 – Flip Modi Squad"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 11 Apr 2014 17:49:16 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/GkZKbI6vghk/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and John focus on the elections in India, at least someone in the west is. Plus, Baby King news!]]>'	Element data: "Andy and John focus on the elections in India, at least someone in the west is. Plus, Baby King news!"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/5ab07697-ed35-4a5d-ae47-295bdfcb85a6/Bugle-266-Flip-Modi-Squad.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"32533760"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "32533760 (32533760)
[4]Found element "itunes:subtitle"
Element data: "Andy and John focus on the elections in India, at…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "36:22"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and John focus on the elections in India, at least someone in the west is. Plus, Baby King news!]]>'	Element data: "Andy and John focus on the elections in India, at least someone in the west is. Plus, Baby King news!"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000076259250-ahe3l4-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"32533760"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/5ab07697-ed35-4a5d-ae47-295bdfcb85a6/Bugle-266-Flip-Modi-Squad.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and John focus on the elections in India, at least someone in the west is. Plus, Baby King news!"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/GkZKbI6vghk"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/04/bugle-266-flip-modi-squad/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/14308762"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 265 – Cup ’em and Cough"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 04 Apr 2014 19:33:46 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/NJgJa6pljII/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Child presents solution to environmental crisis - cash savings!
Plus, an in depth report to the world's most sensational news story.]]>'	Element data: "Child presents solution to environmental crisis - cash savings!
Plus, an in depth report to the world's most sensational news story."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/f7cf8e55-6ac8-46a9-9f61-205059cf79d9/Bugle-265-Cup-em-and-Cough.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"38790226"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "38790226 (38790226)
[4]Found element "itunes:subtitle"
Element data: "Child presents solution to environmental crisis - cash savings!"
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "42:53"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Child presents solution to environmental crisis - cash savings!  Plus, an in depth report to the world's most sensational news story.]]>'	Element data: "Child presents solution to environmental crisis - cash savings!  Plus, an in depth report to the world's most sensational news story."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000075587606-shmuzh-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"38790226"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/f7cf8e55-6ac8-46a9-9f61-205059cf79d9/Bugle-265-Cup-em-and-Cough.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Found element "br"[6]
End of element "br".
STAG: 'br'
Element data: "Plus, an in depth report to the world&#8217;s most sensational news story."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/NJgJa6pljII"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/04/bugle-265-cup-em-and-cough/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/14189457"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 264 – Making nothing out of something"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 28 Mar 2014 17:47:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/D9ulWZQfMrU/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and John discuss the global news reaction to some horrific stories]]>'	Element data: "Andy and John discuss the global news reaction to some horrific stories"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/6c48fb7f-bef9-45b8-8204-23eed3946c0e/Bugle-264-Making-nothing-out-of-something.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"31125223"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "31125223 (31125223)
[4]Found element "itunes:subtitle"
Element data: "Andy and John discuss the global news reaction to…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "34:54"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and John discuss the global news reaction to some horrific stories]]>'	Element data: "Andy and John discuss the global news reaction to some horrific stories"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000074883230-r30thg-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"31125223"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/6c48fb7f-bef9-45b8-8204-23eed3946c0e/Bugle-264-Making-nothing-out-of-something.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and John discuss the global news reaction to some horrific stories"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/D9ulWZQfMrU"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/03/bugle-264-making-nothing-out-of-something/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/14072540"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 263 – Giant Chicken Coops versus Terror"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 21 Mar 2014 17:47:46 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/NK7gddu6nCk/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Former British colony opposes Russian incursion into Crimea, Jacob Zuma perfects his security measures and cricketer penis story explained]]>'	Element data: "Former British colony opposes Russian incursion into Crimea, Jacob Zuma perfects his security measures and cricketer penis story explained"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/fa77d962-21ab-4488-bdf0-5c3b0bc1da9a/Bugle-263-Giant-Chicken-Coops-versus-Terror.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"39344878"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "39344878 (39344878)
[4]Found element "itunes:subtitle"
Element data: "Former British colony opposes Russian incursion i…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "43:28"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Former British colony opposes Russian incursion into Crimea, Jacob Zuma perfects his security measures and cricketer penis story explained]]>'	Element data: "Former British colony opposes Russian incursion into Crimea, Jacob Zuma perfects his security measures and cricketer penis story explained"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000074197017-cbo70t-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"39344878"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/fa77d962-21ab-4488-bdf0-5c3b0bc1da9a/Bugle-263-Giant-Chicken-Coops-versus-Terror.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Former British colony opposes Russian incursion into Crimea, Jacob Zuma perfects his security measures and cricketer penis story explained"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/NK7gddu6nCk"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/03/bugle-263-giant-chicken-coops-versus-terror/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/13971862"
End of element "guid".
[4]Found element "title"
Element data: "The Bugle – Marchive"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sat, 15 Mar 2014 16:19:16 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/QAgIio4Imhk/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        A look back at the month of March, including multiple Pope news (it is near Easter afterall), some sex scandals and a bit of Syria]]>'	Element data: "A look back at the month of March, including multiple Pope news (it is near Easter afterall), some sex scandals and a bit of Syria"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/3089c9b9-7203-4c0b-958a-cebbc108d466/The-Bugle-Marchive.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"39423543"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "39423543 (39423543)
[4]Found element "itunes:subtitle"
Element data: "A look back at the month of March, including mult…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "36:00"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        A look back at the month of March, including multiple Pope news (it is near Easter afterall), some sex scandals and a bit of Syria]]>'	Element data: "A look back at the month of March, including multiple Pope news (it is near Easter afterall), some sex scandals and a bit of Syria"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000073608317-qixe6x-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"39423543"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/3089c9b9-7203-4c0b-958a-cebbc108d466/The-Bugle-Marchive.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "A look back at the month of March, including multiple Pope news (it is near Easter afterall), some sex scandals and a bit of Syria"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/QAgIio4Imhk"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/03/the-bugle-marchive/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/13841744"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 262 – Insane in the Ukraine"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 07 Mar 2014 18:03:43 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/qhuJr5HwWUU/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Russia marches into Ukraine whilst the west tuts, the pope brings something back from the dead and massive virus discovered in ice.]]>'	Element data: "Russia marches into Ukraine whilst the west tuts, the pope brings something back from the dead and massive virus discovered in ice."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/0c550fa8-61dd-40f6-9e4a-b81dbcc8cfd1/Bugle-262-Insane-in-the-Ukraine.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"41729111"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "41729111 (41729111)
[4]Found element "itunes:subtitle"
Element data: "Russia marches into Ukraine whilst the west tuts,…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "37:58"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Russia marches into Ukraine whilst the west tuts, the pope brings something back from the dead and massive virus discovered in ice.]]>'	Element data: "Russia marches into Ukraine whilst the west tuts, the pope brings something back from the dead and massive virus discovered in ice."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000072870325-q71ojb-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"41729111"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/0c550fa8-61dd-40f6-9e4a-b81dbcc8cfd1/Bugle-262-Insane-in-the-Ukraine.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Russia marches into Ukraine whilst the west tuts, the pope brings something back from the dead and massive virus discovered in ice."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/qhuJr5HwWUU"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/03/bugle-262-insane-in-the-ukraine/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/13726748"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 261 – Crimea River"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 28 Feb 2014 21:22:52 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/mOvAJfz2AWQ/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        This week: Ukraine, Penises on walls, Skywhales and movie sequel to Gravity.]]>'	Element data: "This week: Ukraine, Penises on walls, Skywhales and movie sequel to Gravity."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/55ca9b49-251c-455e-9d99-891c73c72650/Bugle-261-Crimea-River.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"47150159"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "47150159 (47150159)
[4]Found element "itunes:subtitle"
Element data: "This week: Ukraine, Penises on walls, Skywhales a…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "42:35"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        This week: Ukraine, Penises on walls, Skywhales and movie sequel to Gravity.]]>'	Element data: "This week: Ukraine, Penises on walls, Skywhales and movie sequel to Gravity."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000072209582-rc7iyt-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"47150159"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/55ca9b49-251c-455e-9d99-891c73c72650/Bugle-261-Crimea-River.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "This week: Ukraine, Penises on walls, Skywhales and movie sequel to Gravity."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/mOvAJfz2AWQ"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/02/bugle-261-crimea-river/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/13482778"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 260 – International Love Triangle"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 14 Feb 2014 18:46:40 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/CVA4XUVwo70/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Hollande woos another mistress, World Cup winners make better dates and is George Clooney a Nazi?]]>'	Element data: "Hollande woos another mistress, World Cup winners make better dates and is George Clooney a Nazi?"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/2748accf-9f4f-4ea4-bb88-ba8111664991/Bugle-260-International-Love-Triangle.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"43259746"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "43259746 (43259746)
[4]Found element "itunes:subtitle"
Element data: "Hollande woos another mistress, World Cup winners…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "39:16"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Hollande woos another mistress, World Cup winners make better dates and is George Clooney a Nazi?]]>'	Element data: "Hollande woos another mistress, World Cup winners make better dates and is George Clooney a Nazi?"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000070863875-nj6og1-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"43259746"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/2748accf-9f4f-4ea4-bb88-ba8111664991/Bugle-260-International-Love-Triangle.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Hollande woos another mistress, World Cup winners make better dates and is George Clooney a Nazi?"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/CVA4XUVwo70"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/02/bugle-260-international-love-triangle/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/13357476"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 259 – Sochi Special"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 07 Feb 2014 18:01:39 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/2JKc36wF-Sw/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and John report on the latest from Sochi - where Vlad Putin should be celebrating just how amazingly gay the Olympics are, rather than getting all homophobic. Plus! Massive wooden penis found on car! And pigs faces - too shocking for publication!]]>'	Element data: "Andy and John report on the latest from Sochi - where Vlad Putin should be celebrating just how amazingly gay the Olympics are, rather than getting all homophobic. Plus! Massive wooden penis found on car! And pigs faces - too shocking for publication!"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/765c32b4-502b-40fd-9838-29dfcdd6ab24/Bugle-259-Sochi-Special.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"60633931"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "60633931 (60633931)
[4]Found element "itunes:subtitle"
Element data: "Andy and John report on the latest from Sochi - w…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "44:35"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and John report on the latest from Sochi - where Vlad Putin should be celebrating just how amazingly gay the Olympics are, rather than getting all homophobic. Plus! Massive wooden penis found on car! And pigs faces - too shocking for publication!]]>'	Element data: "Andy and John report on the latest from Sochi - where Vlad Putin should be celebrating just how amazingly gay the Olympics are, rather than getting all homophobic. Plus! Massive wooden penis found on car! And pigs faces - too shocking for publication!"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000070193329-hjsodq-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"60633931"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/765c32b4-502b-40fd-9838-29dfcdd6ab24/Bugle-259-Sochi-Special.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and John report on the latest from Sochi &#8211; where Vlad Putin should be celebrating just how amazingly gay the Olympics are, rather than getting all homophobic. Plus! Massive wooden penis found on car! And pigs faces &#8211; too shocking for publication!"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/2JKc36wF-Sw"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/02/bugle-259-sochi-special/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/13250217"
End of element "guid".
[4]Found element "title"
Element data: "Bonus Bugle – A Twitter Q&amp;A"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sat, 01 Feb 2014 10:56:38 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/dKjWMmcnNss/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy answers your Twitter questions]]>'	Element data: "Andy answers your Twitter questions"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/7c14ce38-9d6a-40a6-b910-026e6fb8d15a/Bonus-Bugle-A-Twitter-QA.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"21241832"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "21241832 (21241832)
[4]Found element "itunes:subtitle"
Element data: "Andy answers your Twitter questions"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "17:14"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy answers your Twitter questions]]>'	Element data: "Andy answers your Twitter questions"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000069605733-9822lh-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"21241832"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/7c14ce38-9d6a-40a6-b910-026e6fb8d15a/Bonus-Bugle-A-Twitter-QA.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy answers your Twitter questions"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/dKjWMmcnNss"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/02/bonus-bugle-a-twitter-qa/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/13119604"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 258 – Nazis versus Terrorists"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 24 Jan 2014 19:53:01 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/NoFTkJJnSgY/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and John focus on two major meetings in Switzerland and British plans to form a police state. Plus - exclusive interview with Frankel!]]>'	Element data: "Andy and John focus on two major meetings in Switzerland and British plans to form a police state. Plus - exclusive interview with Frankel!"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/8a79bd25-9a83-40f1-b8a2-063f62ced4e0/Bugle-258-Nazis-versus-Terrorists.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"57726714"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "57726714 (57726714)
[4]Found element "itunes:subtitle"
Element data: "Andy and John focus on two major meetings in Swit…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "42:34"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and John focus on two major meetings in Switzerland and British plans to form a police state. Plus - exclusive interview with Frankel!]]>'	Element data: "Andy and John focus on two major meetings in Switzerland and British plans to form a police state. Plus - exclusive interview with Frankel!"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000068896016-jjhmkk-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"57726714"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/8a79bd25-9a83-40f1-b8a2-063f62ced4e0/Bugle-258-Nazis-versus-Terrorists.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and John focus on two major meetings in Switzerland and British plans to form a police state. Plus &#8211; exclusive interview with Frankel!"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/NoFTkJJnSgY"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/01/bugle-258-nazis-versus-terrorists/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/13005779"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 257 – Dancefloor Diplomacy"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sat, 18 Jan 2014 00:17:21 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/NVD9Ohh5g1U/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and John analyse the latest from Thailand, Syria, Sudan and France. Plus: animal news!]]>'	Element data: "Andy and John analyse the latest from Thailand, Syria, Sudan and France. Plus: animal news!"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/e1f4831b-dc8d-4fc5-99ec-3ad3a9aa6d05/Bugle-257-Dancefloor-Diplomacy.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"56402568"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "56402568 (56402568)
[4]Found element "itunes:subtitle"
Element data: "Andy and John analyse the latest from Thailand, S…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "41:39"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and John analyse the latest from Thailand, Syria, Sudan and France. Plus: animal news!]]>'	Element data: "Andy and John analyse the latest from Thailand, Syria, Sudan and France. Plus: animal news!"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000068210227-fodz93-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"56402568"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/e1f4831b-dc8d-4fc5-99ec-3ad3a9aa6d05/Bugle-257-Dancefloor-Diplomacy.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and John analyse the latest from Thailand, Syria, Sudan and France. Plus: animal news!"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/NVD9Ohh5g1U"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/01/bugle-257-dancefloor-diplomacy/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/12903943"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 256 – Troubled Bridge Over Boiling Water"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sat, 11 Jan 2014 22:50:40 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/NsYHVCxAYs8/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        John Describes what happens when it gets a bit Parky, Andy Laments England's Ashes performance and Round One of the first inter Bugle championship match up takes place.]]>'	Element data: "John Describes what happens when it gets a bit Parky, Andy Laments England's Ashes performance and Round One of the first inter Bugle championship match up takes place."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/85e179b4-3000-40bb-a4ba-a3c0b16878c6/Bugle-256-Troubled-Bridge-Over-Boiling-Water.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"51584200"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "51584200 (51584200)
[4]Found element "itunes:subtitle"
Element data: "John Describes what happens when it gets a bit Pa…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "38:18"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        John Describes what happens when it gets a bit Parky, Andy Laments England's Ashes performance and Round One of the first inter Bugle championship match up takes place.]]>'	Element data: "John Describes what happens when it gets a bit Parky, Andy Laments England's Ashes performance and Round One of the first inter Bugle championship match up takes place."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/avatars-000036816294-7qogzv-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"51584200"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/85e179b4-3000-40bb-a4ba-a3c0b16878c6/Bugle-256-Troubled-Bridge-Over-Boiling-Water.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "John Describes what happens when it gets a bit Parky, Andy Laments England&#8217;s Ashes performance and Round One of the first inter Bugle championship match up takes place."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/NsYHVCxAYs8"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/01/bugle-256-troubled-bridge-over-boiling-water/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/12774906"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 255"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 03 Jan 2014 21:24:46 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/fg-R8k6QVhU/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and John learn what the French get up to on New Year's Eve and offer some predictions for the new year. Plus the good ship SS Zaltzman is launched.]]>'	Element data: "Andy and John learn what the French get up to on New Year's Eve and offer some predictions for the new year. Plus the good ship SS Zaltzman is launched."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/ffd79f0f-b02c-4922-9bfe-c3d5734f55b1/Bugle-255.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"36474730"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "36474730 (36474730)
[4]Found element "itunes:subtitle"
Element data: "Andy and John learn what the French get up to on …"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "40:29"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and John learn what the French get up to on New Year's Eve and offer some predictions for the new year. Plus the good ship SS Zaltzman is launched.]]>'	Element data: "Andy and John learn what the French get up to on New Year's Eve and offer some predictions for the new year. Plus the good ship SS Zaltzman is launched."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000066964557-pa9lyc-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"36474730"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/ffd79f0f-b02c-4922-9bfe-c3d5734f55b1/Bugle-255.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and John learn what the French get up to on New Year&#8217;s Eve and offer some predictions for the new year. Plus the good ship SS Zaltzman is launched."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/fg-R8k6QVhU"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2014/01/bugle-255/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/12699321"
End of element "guid".
[4]Found element "title"
Element data: "TheBugle review of the year: 2013"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sun, 29 Dec 2013 17:45:39 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/NEXijZHgnnw/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy Zaltzman introduces a look back at some of the biggest headlines of the last 12 months. May include births, deaths, political misjudgements, and inappropriate behaviour at a funeral (for the 2nd consecutive year).]]>'	Element data: "Andy Zaltzman introduces a look back at some of the biggest headlines of the last 12 months. May include births, deaths, political misjudgements, and inappropriate behaviour at a funeral (for the 2nd consecutive year)."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/94d2c224-ed8e-4710-bcf2-36845ae3efd5/TheBugle-review-of-the-year_-2013.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"38750190"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "38750190 (38750190)
[4]Found element "itunes:subtitle"
Element data: "Andy Zaltzman introduces a look back at some of t…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "42:51"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy Zaltzman introduces a look back at some of the biggest headlines of the last 12 months. May include births, deaths, political misjudgements, and inappropriate behaviour at a funeral (for the 2nd consecutive year).]]>'	Element data: "Andy Zaltzman introduces a look back at some of the biggest headlines of the last 12 months. May include births, deaths, political misjudgements, and inappropriate behaviour at a funeral (for the 2nd consecutive year)."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000066548066-ronvhq-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"38750190"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/94d2c224-ed8e-4710-bcf2-36845ae3efd5/TheBugle-review-of-the-year_-2013.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy Zaltzman introduces a look back at some of the biggest headlines of the last 12 months. May include births, deaths, political misjudgements, and inappropriate behaviour at a funeral (for the 2nd consecutive year)."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/NEXijZHgnnw"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/12/thebugle-review-of-the-year-2013/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/12577095"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 254 – Christmas Special!"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 20 Dec 2013 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/VcC9zRp6_bc/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        The latest from London's Scroogiest councils, Santacon 2013 and how a US president might enjoy Christmas day (or not).]]>'	Element data: "The latest from London's Scroogiest councils, Santacon 2013 and how a US president might enjoy Christmas day (or not)."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/a9700333-085c-454a-bf30-19adbf2a045a/Bugle-254-Christmas-Special.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"33273986"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "33273986 (33273986)
[4]Found element "itunes:subtitle"
Element data: "The latest from London's Scroogiest councils, San…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "37:08"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        The latest from London's Scroogiest councils, Santacon 2013 and how a US president might enjoy Christmas day (or not).]]>'	Element data: "The latest from London's Scroogiest councils, Santacon 2013 and how a US president might enjoy Christmas day (or not)."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000065873064-zvvl3b-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"33273986"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/a9700333-085c-454a-bf30-19adbf2a045a/Bugle-254-Christmas-Special.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "The latest from London&#8217;s Scroogiest councils, Santacon 2013 and how a US president might enjoy Christmas day (or not)."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/VcC9zRp6_bc"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/12/bugle-254-christmas-special/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/12468362"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 253 – Lenin in a Dress"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 13 Dec 2013 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/7zJm7az2vyU/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        So what do the worlds leaders make of the wealth gap? It's Boris Johnson v The Pope!

Plus, the police stuff the queen's nuts in their mouths and pigs react to the sale of their seed.]]>'	Element data: "So what do the worlds leaders make of the wealth gap? It's Boris Johnson v The Pope!

Plus, the police stuff the queen's nuts in their mouths and pigs react to the sale of their seed."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/3edaa08f-af1c-4edc-8415-a93694cd8b15/Bugle-253-Lenin-in-a-Dress.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"37599509"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "37599509 (37599509)
[4]Found element "itunes:subtitle"
Element data: "So what do the worlds leaders make of the wealth gap? It's Boris Johnson v The Pope!"
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "41:39"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        So what do the worlds leaders make of the wealth gap? It's Boris Johnson v The Pope!  Plus, the police stuff the queen's nuts in their mouths and pigs react to the sale of their seed.]]>'	Element data: "So what do the worlds leaders make of the wealth gap? It's Boris Johnson v The Pope!  Plus, the police stuff the queen's nuts in their mouths and pigs react to the sale of their seed."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000065271126-0des60-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"37599509"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/3edaa08f-af1c-4edc-8415-a93694cd8b15/Bugle-253-Lenin-in-a-Dress.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "So what do the worlds leaders make of the wealth gap? It&#8217;s Boris Johnson v The Pope!"
End of element "p".
P Data
P Data: Above epn is content:encoded
[5]Found element "p"
Element data: "Plus, the police stuff the queen&#8217;s nuts in their mouths and pigs react to the sale of their seed."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/7zJm7az2vyU"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/12/bugle-253-lenin-in-a-dress/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/12359379"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 252 – (Product from) Pigs Might Fly (Off The Shelves)"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 06 Dec 2013 23:01:49 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/jUEeAfGZ_mo/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        A new challenger arrives for toughest world leader, Britain seeks to be a world leader in a new market, And the Bugle mourns a great man.]]>'	Element data: "A new challenger arrives for toughest world leader, Britain seeks to be a world leader in a new market, And the Bugle mourns a great man."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/81c1bf6c-2272-4a41-b6d4-495599e5e737/Bugle-252-Product-from-Pigs-Might-Fly-Off-The-Shelves.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"58581560"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "58581560 (58581560)
[4]Found element "itunes:subtitle"
Element data: "A new challenger arrives for toughest world leade…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "43:10"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        A new challenger arrives for toughest world leader, Britain seeks to be a world leader in a new market, And the Bugle mourns a great man.]]>'	Element data: "A new challenger arrives for toughest world leader, Britain seeks to be a world leader in a new market, And the Bugle mourns a great man."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000064638910-6eicoo-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"58581560"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/81c1bf6c-2272-4a41-b6d4-495599e5e737/Bugle-252-Product-from-Pigs-Might-Fly-Off-The-Shelves.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "A new challenger arrives for toughest world leader, Britain seeks to be a world leader in a new market, And the Bugle mourns a great man."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/jUEeAfGZ_mo"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/12/bugle-252-product-from-pigs-might-fly-off-the-shelves/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/12142480"
End of element "guid".
[4]Found element "title"
Element data: "Bonus Bugle – Bugle requests"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 22 Nov 2013 21:39:21 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/7L9y3Qk176U/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy introduces some Bugle highlights, as requested on Twitter]]>'	Element data: "Andy introduces some Bugle highlights, as requested on Twitter"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/ddc2d381-d835-41f5-8190-c88de1313839/Bonus-Bugle-Bugle-requests.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"29025534"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "29025534 (29025534)
[4]Found element "itunes:subtitle"
Element data: "Andy introduces some Bugle highlights, as request…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "32:47"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy introduces some Bugle highlights, as requested on Twitter]]>'	Element data: "Andy introduces some Bugle highlights, as requested on Twitter"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000063462016-a9h9fy-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"29025534"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/ddc2d381-d835-41f5-8190-c88de1313839/Bonus-Bugle-Bugle-requests.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy introduces some Bugle highlights, as requested on Twitter"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/7L9y3Qk176U"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/11/bonus-bugle-bugle-requests/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/12029637"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 251 – Nailing the truth to the floor"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 15 Nov 2013 18:03:46 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/E51GvunuFH8/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        A man in Russia has nailed his testicles to Russia, the British conservative party has hidden the internet, and The Bugle raids BBC Radio 1.]]>'	Element data: "A man in Russia has nailed his testicles to Russia, the British conservative party has hidden the internet, and The Bugle raids BBC Radio 1."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/9741be62-ccd4-40cf-91be-681324738126/Bugle-251-Nailing-the-truth-to-the-floor.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"30721193"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "30721193 (30721193)
[4]Found element "itunes:subtitle"
Element data: "A man in Russia has nailed his testicles to Russi…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "34:34"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        A man in Russia has nailed his testicles to Russia, the British conservative party has hidden the internet, and The Bugle raids BBC Radio 1.]]>'	Element data: "A man in Russia has nailed his testicles to Russia, the British conservative party has hidden the internet, and The Bugle raids BBC Radio 1."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000062845117-j8jg8q-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"30721193"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/9741be62-ccd4-40cf-91be-681324738126/Bugle-251-Nailing-the-truth-to-the-floor.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "A man in Russia has nailed his testicles to Russia, the British conservative party has hidden the internet, and The Bugle raids BBC Radio 1."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/E51GvunuFH8"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/11/bugle-251-nailing-the-truth-to-the-floor/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/11813345"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 250 – No one is madder than Obama…"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 01 Nov 2013 19:16:17 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/gunWVAFJO8o/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        ...is about IT glitches with the launch of Obamacare.

Plus why spying would have saved Jesus, Spain plans to jail all of the USA, church wangs and Vatican cricket.

Happy 250 Buglers!]]>'	Element data: "...is about IT glitches with the launch of Obamacare.

Plus why spying would have saved Jesus, Spain plans to jail all of the USA, church wangs and Vatican cricket.

Happy 250 Buglers!"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/a63985ad-b511-4a5d-8df9-3a4d3cb1a0e3/Bugle-250-No-one-is-madder-than-Obama....mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"38538335"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "38538335 (38538335)
[4]Found element "itunes:subtitle"
Element data: "...is about IT glitches with the launch of Obamacare."
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "42:43"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        ...is about IT glitches with the launch of Obamacare.  Plus why spying would have saved Jesus, Spain plans to jail all of the USA, church wangs and Vatican cricket.  Happy 250 Buglers!]]>'	Element data: "...is about IT glitches with the launch of Obamacare.  Plus why spying would have saved Jesus, Spain plans to jail all of the USA, church wangs and Vatican cricket.  Happy 250 Buglers!"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000061649925-mq3rs7-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"38538335"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/a63985ad-b511-4a5d-8df9-3a4d3cb1a0e3/Bugle-250-No-one-is-madder-than-Obama....mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "&#8230;is about IT glitches with the launch of Obamacare."
End of element "p".
P Data
P Data: Above epn is content:encoded
[5]Found element "p"
Element data: "Plus why spying would have saved Jesus, Spain plans to jail all of the USA, church wangs and Vatican cricket."
End of element "p".
P Data
P Data: Above epn is content:encoded
[5]Found element "p"
Element data: "Happy 250 Buglers!"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/gunWVAFJO8o"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/11/bugle-250-no-one-is-madder-than-obama/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/11514956"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 249 – America stands that little bit smaller"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sun, 13 Oct 2013 14:00:22 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/Hh2bo_3uqvo/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and John provide more evidence for the complete collapse of the USA, discuss the end of Sachin Tendulkar, reveal that Brazil is run by clowns and psychopaths and get some passive aggressive love/abuse in an email]]>'	Element data: "Andy and John provide more evidence for the complete collapse of the USA, discuss the end of Sachin Tendulkar, reveal that Brazil is run by clowns and psychopaths and get some passive aggressive love/abuse in an email"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/41545e26-6557-4b55-b61d-e230026bd77c/Bugle-249-America-stands-that-little-bit-smaller.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"33621429"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "33621429 (33621429)
[4]Found element "itunes:subtitle"
Element data: "Andy and John provide more evidence for the compl…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "37:30"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and John provide more evidence for the complete collapse of the USA, discuss the end of Sachin Tendulkar, reveal that Brazil is run by clowns and psychopaths and get some passive aggressive love/abuse in an email]]>'	Element data: "Andy and John provide more evidence for the complete collapse of the USA, discuss the end of Sachin Tendulkar, reveal that Brazil is run by clowns and psychopaths and get some passive aggressive love/abuse in an email"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000060030158-aiw03g-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"33621429"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/41545e26-6557-4b55-b61d-e230026bd77c/Bugle-249-America-stands-that-little-bit-smaller.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and John provide more evidence for the complete collapse of the USA, discuss the end of Sachin Tendulkar, reveal that Brazil is run by clowns and psychopaths and get some passive aggressive love/abuse in an email"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/Hh2bo_3uqvo"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/10/bugle-249-america-stands-that-little-bit-smaller/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/11382235"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 248 – Anarchy in the USA"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 04 Oct 2013 16:42:31 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/Eb6-rEv2b64/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and John have the latest on the collapse of civilisation in the US, as well as corruption updates from India and Italy]]>'	Element data: "Andy and John have the latest on the collapse of civilisation in the US, as well as corruption updates from India and Italy"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/fc40c6d9-3cfa-41fc-9123-e8acce16dbcf/Bugle-248-Anarchy-in-the-USA.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"43354121"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "43354121 (43354121)
[4]Found element "itunes:subtitle"
Element data: "Andy and John have the latest on the collapse of …"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "32:35"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and John have the latest on the collapse of civilisation in the US, as well as corruption updates from India and Italy]]>'	Element data: "Andy and John have the latest on the collapse of civilisation in the US, as well as corruption updates from India and Italy"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000059324247-2og6ay-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"43354121"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/fc40c6d9-3cfa-41fc-9123-e8acce16dbcf/Bugle-248-Anarchy-in-the-USA.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and John have the latest on the collapse of civilisation in the US, as well as corruption updates from India and Italy"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/Eb6-rEv2b64"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/10/bugle-248-anarchy-in-the-usa/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/11182342"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 247 – Mind The Gap!"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sun, 22 Sep 2013 20:58:11 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/ZPyDhqb77gk/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and John look at the disparity in wealth in the US, report from the Op-Ed wars, and are joined by a comfortably racist blast from the past]]>'	Element data: "Andy and John look at the disparity in wealth in the US, report from the Op-Ed wars, and are joined by a comfortably racist blast from the past"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/d9e749fd-9dad-402d-9d86-4076a1a43e23/Bugle-247-Mind-The-Gap.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"53311805"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "53311805 (53311805)
[4]Found element "itunes:subtitle"
Element data: "Andy and John look at the disparity in wealth in …"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "39:30"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and John look at the disparity in wealth in the US, report from the Op-Ed wars, and are joined by a comfortably racist blast from the past]]>'	Element data: "Andy and John look at the disparity in wealth in the US, report from the Op-Ed wars, and are joined by a comfortably racist blast from the past"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000058398453-j71p9c-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"53311805"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/d9e749fd-9dad-402d-9d86-4076a1a43e23/Bugle-247-Mind-The-Gap.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and John look at the disparity in wealth in the US, report from the Op-Ed wars, and are joined by a comfortably racist blast from the past"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/ZPyDhqb77gk"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/09/bugle-247-mind-the-gap/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/11027547"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 246 – Selling The Drama (And War and Guns And The Planet)"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 13 Sep 2013 21:25:28 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/HBkzemd9wA8/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Bugle 246 - Selling The Drama (And War and Guns And The Planet) by The Bugle]]>'	Element data: "Bugle 246 - Selling The Drama (And War and Guns And The Planet) by The Bugle"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/b056a8a6-a1b6-4596-b238-a0575db51819/Bugle-246-Selling-The-Drama-And-War-and-Guns-And-The-Planet.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"62752627"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "62752627 (62752627)
[4]Found element "itunes:subtitle"
Element data: "Bugle 246 - Selling The Drama (And War and Guns A…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "46:04"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Bugle 246 - Selling The Drama (And War and Guns And The Planet) by The Bugle]]>'	Element data: "Bugle 246 - Selling The Drama (And War and Guns And The Planet) by The Bugle"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/avatars-000036816294-7qogzv-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"62752627"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/b056a8a6-a1b6-4596-b238-a0575db51819/Bugle-246-Selling-The-Drama-And-War-and-Guns-And-The-Planet.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Bugle 246 &#8211; Selling The Drama (And War and Guns And The Planet) by The Bugle"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/HBkzemd9wA8"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/09/bugle-246-selling-the-drama-and-war-and-guns-and-the-planet/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/10915949"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 245 – Syria, too complicated for 5 year olds"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 06 Sep 2013 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/AWC5MzgCSa4/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Cheney, Pelosi and Kerry throw their opinions around on Syria, whilst the UK parliament withdraws from public like into a world of internet porn. Plus, Andy learns what 'twerking' is.]]>'	Element data: "Cheney, Pelosi and Kerry throw their opinions around on Syria, whilst the UK parliament withdraws from public like into a world of internet porn. Plus, Andy learns what 'twerking' is."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/5f04718a-5426-4ed4-8d78-86cb3ac85070/Bugle-245-Syria-too-complicated-for-5-year-olds.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"37487406"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "37487406 (37487406)
[4]Found element "itunes:subtitle"
Element data: "Cheney, Pelosi and Kerry throw their opinions aro…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "41:30"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Cheney, Pelosi and Kerry throw their opinions around on Syria, whilst the UK parliament withdraws from public like into a world of internet porn. Plus, Andy learns what 'twerking' is.]]>'	Element data: "Cheney, Pelosi and Kerry throw their opinions around on Syria, whilst the UK parliament withdraws from public like into a world of internet porn. Plus, Andy learns what 'twerking' is."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000057143022-h78dys-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"37487406"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/5f04718a-5426-4ed4-8d78-86cb3ac85070/Bugle-245-Syria-too-complicated-for-5-year-olds.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Cheney, Pelosi and Kerry throw their opinions around on Syria, whilst the UK parliament withdraws from public like into a world of internet porn. Plus, Andy learns what &#8216;twerking&#8217; is."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/AWC5MzgCSa4"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/09/bugle-245-syria-too-complicated-for-5-year-olds/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/10800303"
End of element "guid".
[4]Found element "title"
Element data: "Bugle Elbug Snug in a Rug, Doug"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 30 Aug 2013 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/JInw9FAHbTs/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        This is not a Bugle. Part 2.01]]>'	Element data: "This is not a Bugle. Part 2.01"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/0c76ca87-95ef-437e-94a9-4531e3dbfe6d/Bugle-Elbug-Snug-in-a-Rug-Doug.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"2581829"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "2581829 (2581829)
[4]Found element "itunes:subtitle"
Element data: "This is not a Bugle. Part 2.01"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "05:10"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        This is not a Bugle. Part 2.01]]>'	Element data: "This is not a Bugle. Part 2.01"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000056574236-r37vt6-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"2581829"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/0c76ca87-95ef-437e-94a9-4531e3dbfe6d/Bugle-Elbug-Snug-in-a-Rug-Doug.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "This is not a Bugle. Part 2.01"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/JInw9FAHbTs"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/08/bugle-elbug-snug-in-a-rug-doug/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/10471498"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 244 – Russian into battle"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 09 Aug 2013 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/1kB1XPhYESE/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        The Cold War is back - and this time it's colder. Deadly weapons are being used - like banning Pride marches, and the relentless use of puns. We live in dangerous times.]]>'	Element data: "The Cold War is back - and this time it's colder. Deadly weapons are being used - like banning Pride marches, and the relentless use of puns. We live in dangerous times."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/5105d053-22fa-4d96-9799-d007d56e7143/Bugle-244-Russian-into-battle.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"30743713"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "30743713 (30743713)
[4]Found element "itunes:subtitle"
Element data: "The Cold War is back - and this time it's colder.…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "34:30"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        The Cold War is back - and this time it's colder. Deadly weapons are being used - like banning Pride marches, and the relentless use of puns. We live in dangerous times.]]>'	Element data: "The Cold War is back - and this time it's colder. Deadly weapons are being used - like banning Pride marches, and the relentless use of puns. We live in dangerous times."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000054911434-ic9vjv-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"30743713"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/5105d053-22fa-4d96-9799-d007d56e7143/Bugle-244-Russian-into-battle.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "The Cold War is back &#8211; and this time it&#8217;s colder. Deadly weapons are being used &#8211; like banning Pride marches, and the relentless use of puns. We live in dangerous times."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/1kB1XPhYESE"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/08/bugle-244-russian-into-battle/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/10373015"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 243 – The gifts that keep giving"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 02 Aug 2013 17:16:16 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/cqAk9dIKdbY/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Robert Mugabe is going nowhere without a struggle, especially when he still gets 103% of the vote. Plus, Silvio Berlusconi is back in the news! Thanks Silvio!]]>'	Element data: "Robert Mugabe is going nowhere without a struggle, especially when he still gets 103% of the vote. Plus, Silvio Berlusconi is back in the news! Thanks Silvio!"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/32f3c14b-f717-4bc2-9776-0446ff645861/Bugle-243-The-gifts-that-keep-giving.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"31977868"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "31977868 (31977868)
[4]Found element "itunes:subtitle"
Element data: "Robert Mugabe is going nowhere without a struggle…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "35:45"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Robert Mugabe is going nowhere without a struggle, especially when he still gets 103% of the vote. Plus, Silvio Berlusconi is back in the news! Thanks Silvio!]]>'	Element data: "Robert Mugabe is going nowhere without a struggle, especially when he still gets 103% of the vote. Plus, Silvio Berlusconi is back in the news! Thanks Silvio!"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000054379492-l4zkbq-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"31977868"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/32f3c14b-f717-4bc2-9776-0446ff645861/Bugle-243-The-gifts-that-keep-giving.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Robert Mugabe is going nowhere without a struggle, especially when he still gets 103% of the vote. Plus, Silvio Berlusconi is back in the news! Thanks Silvio!"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/cqAk9dIKdbY"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/08/bugle-243-the-gifts-that-keep-giving/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/10269617"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 242 – Woman gives birth!"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 26 Jul 2013 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/kS6krKNhjKM/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        In an incredible story, a woman has had a child. In other news, a man has published his penis online and the coin of truth is proved right once again]]>'	Element data: "In an incredible story, a woman has had a child. In other news, a man has published his penis online and the coin of truth is proved right once again"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/59b2d943-d660-4ed7-a5e5-fc2b294ea8a4/Bugle-242-Woman-gives-birth.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"28945631"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "28945631 (28945631)
[4]Found element "itunes:subtitle"
Element data: "In an incredible story, a woman has had a child. …"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "32:38"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        In an incredible story, a woman has had a child. In other news, a man has published his penis online and the coin of truth is proved right once again]]>'	Element data: "In an incredible story, a woman has had a child. In other news, a man has published his penis online and the coin of truth is proved right once again"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000053821990-67zg7f-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"28945631"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/59b2d943-d660-4ed7-a5e5-fc2b294ea8a4/Bugle-242-Woman-gives-birth.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "In an incredible story, a woman has had a child. In other news, a man has published his penis online and the coin of truth is proved right once again"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/kS6krKNhjKM"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/07/bugle-242-woman-gives-birth/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/10175132"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 241 – Motown breaks down"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 19 Jul 2013 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/DOHlk_TBXT4/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        It's hot, Motown becomes no town and JK's growling]]>'	Element data: "It's hot, Motown becomes no town and JK's growling"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/3c1d604c-b5fa-45ee-bd77-4d353c28a3c7/Bugle-241-Motown-breaks-down.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"35794253"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "35794253 (35794253)
[4]Found element "itunes:subtitle"
Element data: "It's hot, Motown becomes no town and JK's growling"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "39:44"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        It's hot, Motown becomes no town and JK's growling]]>'	Element data: "It's hot, Motown becomes no town and JK's growling"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000053309047-jxrvfs-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"35794253"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/3c1d604c-b5fa-45ee-bd77-4d353c28a3c7/Bugle-241-Motown-breaks-down.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "It&#8217;s hot, Motown becomes no town and JK&#8217;s growling"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/DOHlk_TBXT4"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/07/bugle-241-motown-breaks-down/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/10140173"
End of element "guid".
[4]Found element "title"
Element data: "Bonus Bugle – The Story of Wills and Kate"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Wed, 17 Jul 2013 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/n8Mor3Vhnhw/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Soon to be a new entry at #3 in the British boss charts, it's a royal baby! In eager anticipation we deliver the story of Wills, Kate and the baby.]]>'	Element data: "Soon to be a new entry at #3 in the British boss charts, it's a royal baby! In eager anticipation we deliver the story of Wills, Kate and the baby."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/eab621be-b340-4b8a-8819-25c581942bcb/Bonus-Bugle-The-Story-of-Wills-and-Kate.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"37589036"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "37589036 (37589036)
[4]Found element "itunes:subtitle"
Element data: "Soon to be a new entry at #3 in the British boss …"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "41:38"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Soon to be a new entry at #3 in the British boss charts, it's a royal baby! In eager anticipation we deliver the story of Wills, Kate and the baby.]]>'	Element data: "Soon to be a new entry at #3 in the British boss charts, it's a royal baby! In eager anticipation we deliver the story of Wills, Kate and the baby."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000053116205-81tr7y-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"37589036"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/eab621be-b340-4b8a-8819-25c581942bcb/Bonus-Bugle-The-Story-of-Wills-and-Kate.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Soon to be a new entry at #3 in the British boss charts, it&#8217;s a royal baby! In eager anticipation we deliver the story of Wills, Kate and the baby."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/n8Mor3Vhnhw"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/07/bonus-bugle-the-story-of-wills-and-kate/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/10078996"
End of element "guid".
[4]Found element "title"
Element data: "Bugle Bulge Beluga Legume Bleurgh!"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 12 Jul 2013 19:04:12 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/touMaYAjbXs/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        This is not a Bugle. This is many Bugles.]]>'	Element data: "This is not a Bugle. This is many Bugles."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/912a7b0d-ed89-40c6-aa04-56c230e34aaa/Bugle-Bulge-Beluga-Legume-Bleurgh.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"2979333"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "2979333 (2979333)
[4]Found element "itunes:subtitle"
Element data: "This is not a Bugle. This is many Bugles."
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "05:35"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        This is not a Bugle. This is many Bugles.]]>'	Element data: "This is not a Bugle. This is many Bugles."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000052781561-o723ix-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"2979333"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/912a7b0d-ed89-40c6-aa04-56c230e34aaa/Bugle-Bulge-Beluga-Legume-Bleurgh.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "This is not a Bugle. This is many Bugles."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/touMaYAjbXs"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/07/bugle-bulge-beluga-legume-bleurgh/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/99813600"
End of element "guid".
[4]Found element "title"
Element data: "Bonus Bugle – Jet Skis, lawyers and donations"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 05 Jul 2013 17:25:48 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/WSVrgJ4luJo/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Some never heard before clips of The American, the legal aid row and donation queries from Buglers]]>'	Element data: "Some never heard before clips of The American, the legal aid row and donation queries from Buglers"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/e1686acd-9391-433c-8cf1-6740df62bdf0/Bonus-Bugle-Jet-Skis-lawyers-and-donations.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"17485154"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "17485154 (17485154)
[4]Found element "itunes:subtitle"
Element data: "Some never heard before clips of The American, th…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "20:42"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Some never heard before clips of The American, the legal aid row and donation queries from Buglers]]>'	Element data: "Some never heard before clips of The American, the legal aid row and donation queries from Buglers"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000052243631-c38p50-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"17485154"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/e1686acd-9391-433c-8cf1-6740df62bdf0/Bonus-Bugle-Jet-Skis-lawyers-and-donations.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Some never heard before clips of The American, the legal aid row and donation queries from Buglers"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/WSVrgJ4luJo"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/07/bonus-bugle-jet-skis-lawyers-and-donations/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/98864929"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 240 – Political Gooaaalllsss!!"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 28 Jun 2013 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/79s8YI1csfc/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Brazilian protesters find the top corner, Andy launches a new competition and The American returns.]]>'	Element data: "Brazilian protesters find the top corner, Andy launches a new competition and The American returns."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/7bfc3e02-4961-4f9d-93bb-75aef52b6aa0/Bugle-240-Political-Gooaaalllsss.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"36162908"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "36162908 (36162908)
[4]Found element "itunes:subtitle"
Element data: "Brazilian protesters find the top corner, Andy la…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "42:09"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Brazilian protesters find the top corner, Andy launches a new competition and The American returns.]]>'	Element data: "Brazilian protesters find the top corner, Andy launches a new competition and The American returns."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000051717068-7m1kbt-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"36162908"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/7bfc3e02-4961-4f9d-93bb-75aef52b6aa0/Bugle-240-Political-Gooaaalllsss.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Brazilian protesters find the top corner, Andy launches a new competition and The American returns."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/79s8YI1csfc"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/06/bugle-240-political-gooaaalllsss/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/97894088"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 239 – Goodness Gracious G8 Balls Of Tennis"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 21 Jun 2013 21:17:54 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/nIlKysu_kE0/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        A Summer On Murray Mound Beckons and the G8 Summit is the perfect opportunity to sample delicacies not normally found on one's plate.]]>'	Element data: "A Summer On Murray Mound Beckons and the G8 Summit is the perfect opportunity to sample delicacies not normally found on one's plate."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/92707286-1275-4da7-94ad-1245ff84490b/Bugle-239-Goodness-Gracious-G8-Balls-Of-Tennis.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"57370414"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "57370414 (57370414)
[4]Found element "itunes:subtitle"
Element data: "A Summer On Murray Mound Beckons and the G8 Summit is the perfect opportunity to sample delicacies not normally found on one's plate."
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "42:19"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        A Summer On Murray Mound Beckons and the G8 Summit is the perfect opportunity to sample delicacies not normally found on one's plate.]]>'	Element data: "A Summer On Murray Mound Beckons and the G8 Summit is the perfect opportunity to sample delicacies not normally found on one's plate."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000051715308-02lks1-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"57370414"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/92707286-1275-4da7-94ad-1245ff84490b/Bugle-239-Goodness-Gracious-G8-Balls-Of-Tennis.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "A Summer On Murray Mound Beckons and the G8 Summit is the perfect opportunity to sample delicacies not normally found on one&#8217;s plate."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/nIlKysu_kE0"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/06/bugle-239-goodness-gracious-g8-balls-of-tennis/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/96909137"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 238 – Inprismed"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 14 Jun 2013 19:48:31 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/57l_11ivL9Q/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and John look through the prism and toss the coin of truth. Is Andy a witch? Is John enjoying the Daily Show hot seat?]]>'	Element data: "Andy and John look through the prism and toss the coin of truth. Is Andy a witch? Is John enjoying the Daily Show hot seat?"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/1398d18a-c85c-4daf-aa99-4e3249c59f15/Bugle-238-Inprismed.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"48822042"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "48822042 (48822042)
[4]Found element "itunes:subtitle"
Element data: "Andy and John look through the prism and toss the…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "36:22"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and John look through the prism and toss the coin of truth. Is Andy a witch? Is John enjoying the Daily Show hot seat?]]>'	Element data: "Andy and John look through the prism and toss the coin of truth. Is Andy a witch? Is John enjoying the Daily Show hot seat?"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000050604174-t2rnmm-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"48822042"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/1398d18a-c85c-4daf-aa99-4e3249c59f15/Bugle-238-Inprismed.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and John look through the prism and toss the coin of truth. Is Andy a witch? Is John enjoying the Daily Show hot seat?"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/57l_11ivL9Q"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/06/bugle-238-inprismed/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/95902504"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 237 – Istanbul’s hit"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 07 Jun 2013 19:22:40 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/yrsbTx1obds/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Half way through the year and what countries are performing? Plus, what happens when world leaders get hammered together?]]>'	Element data: "Half way through the year and what countries are performing? Plus, what happens when world leaders get hammered together?"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/1683a121-8006-40ca-83b2-971033106203/Bugle-237-Istanbuls-hit.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"51582034"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "51582034 (51582034)
[4]Found element "itunes:subtitle"
Element data: "Half way through the year and what countries are …"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "38:17"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Half way through the year and what countries are performing? Plus, what happens when world leaders get hammered together?]]>'	Element data: "Half way through the year and what countries are performing? Plus, what happens when world leaders get hammered together?"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000050030675-ghz5is-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"51582034"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/1683a121-8006-40ca-83b2-971033106203/Bugle-237-Istanbuls-hit.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Half way through the year and what countries are performing? Plus, what happens when world leaders get hammered together?"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/yrsbTx1obds"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/06/bugle-237-istanbuls-hit/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/93710463"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 236 – Tennis racquet marries guinea pig"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 24 May 2013 17:46:17 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/-GvDhk8QMGU/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Society set to force appliances and pets to marry. Plus, food news - get a sick bag.]]>'	Element data: "Society set to force appliances and pets to marry. Plus, food news - get a sick bag."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/87e7f4fc-9776-4241-b152-b7a12801e01b/Bugle-236-Tennis-racquet-marries-guinea-pig.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"63242576"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "63242576 (63242576)
[4]Found element "itunes:subtitle"
Element data: "Society set to force appliances and pets to marry…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "46:23"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Society set to force appliances and pets to marry. Plus, food news - get a sick bag.]]>'	Element data: "Society set to force appliances and pets to marry. Plus, food news - get a sick bag."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000048868077-tel1er-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"63242576"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/87e7f4fc-9776-4241-b152-b7a12801e01b/Bugle-236-Tennis-racquet-marries-guinea-pig.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Society set to force appliances and pets to marry. Plus, food news &#8211; get a sick bag."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/-GvDhk8QMGU"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/05/bugle-236-tennis-racquet-marries-guinea-pig/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/92656152"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 235 – The long arm of the lorry"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 17 May 2013 17:01:58 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/Gei1ZD-24QU/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        What crazy democracy would put it's legal aid system in the hands of a haulage firm? What crazy democracy would elect a twice removed crook? Find the answers in this weeks Bugle!]]>'	Element data: "What crazy democracy would put it's legal aid system in the hands of a haulage firm? What crazy democracy would elect a twice removed crook? Find the answers in this weeks Bugle!"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/b79511df-9b0a-4d24-a6dc-00f9157bb567/Bugle-235-The-long-arm-of-the-lorry.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"40799407"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "40799407 (40799407)
[4]Found element "itunes:subtitle"
Element data: "What crazy democracy would put it's legal aid sys…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "44:59"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        What crazy democracy would put it's legal aid system in the hands of a haulage firm? What crazy democracy would elect a twice removed crook? Find the answers in this weeks Bugle!]]>'	Element data: "What crazy democracy would put it's legal aid system in the hands of a haulage firm? What crazy democracy would elect a twice removed crook? Find the answers in this weeks Bugle!"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000048280899-woh1mq-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"40799407"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/b79511df-9b0a-4d24-a6dc-00f9157bb567/Bugle-235-The-long-arm-of-the-lorry.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "What crazy democracy would put it&#8217;s legal aid system in the hands of a haulage firm? What crazy democracy would elect a twice removed crook? Find the answers in this weeks Bugle!"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/Gei1ZD-24QU"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/05/bugle-235-the-long-arm-of-the-lorry/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/91595525"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 234 – Nuns, guns and nutters"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 10 May 2013 18:03:37 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/R_AY-gLnmx0/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Who the hell are UKIP and what do they want? Is making guns an act of libertarianism and why nuns and nuclear don't mix]]>'	Element data: "Who the hell are UKIP and what do they want? Is making guns an act of libertarianism and why nuns and nuclear don't mix"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/4e44ff36-1f91-442d-a141-62554b58e080/Bugle-234-Nuns-guns-and-nutters.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"70602816"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "70602816 (70602816)
[4]Found element "itunes:subtitle"
Element data: "Who the hell are UKIP and what do they want? Is m…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "41:54"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Who the hell are UKIP and what do they want? Is making guns an act of libertarianism and why nuns and nuclear don't mix]]>'	Element data: "Who the hell are UKIP and what do they want? Is making guns an act of libertarianism and why nuns and nuclear don't mix"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000047696219-rmjmdl-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"70602816"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/4e44ff36-1f91-442d-a141-62554b58e080/Bugle-234-Nuns-guns-and-nutters.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Who the hell are UKIP and what do they want? Is making guns an act of libertarianism and why nuns and nuclear don&#8217;t mix"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/R_AY-gLnmx0"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/05/bugle-234-nuns-guns-and-nutters/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/90620964"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 233 – Baby got hack"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 03 May 2013 18:35:59 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/FFNvNrBc4sU/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Hacking, Afghanistan and Andy introduces his lobsters]]>'	Element data: "Hacking, Afghanistan and Andy introduces his lobsters"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/aafac160-6dbb-4a2e-8112-53d1cab11a18/Bugle-233-Baby-got-hack.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"35544381"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "35544381 (35544381)
[4]Found element "itunes:subtitle"
Element data: "Hacking, Afghanistan and Andy introduces his lobs…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "39:30"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Hacking, Afghanistan and Andy introduces his lobsters]]>'	Element data: "Hacking, Afghanistan and Andy introduces his lobsters"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000047127183-5yp3ju-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"35544381"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/aafac160-6dbb-4a2e-8112-53d1cab11a18/Bugle-233-Baby-got-hack.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Hacking, Afghanistan and Andy introduces his lobsters"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/FFNvNrBc4sU"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/05/bugle-233-baby-got-hack/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/89621342"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 232 – Mars, Merchandise and Mad Men!"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 26 Apr 2013 18:24:28 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/zUpTn59iuyQ/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and John, and about a million Buglers have noticed that there is a penis on Mars. Get your telescopes out. In other news, MERCH IS LIVE(!), and Chechnya's leader is a Hilary Swanker.]]>'	Element data: "Andy and John, and about a million Buglers have noticed that there is a penis on Mars. Get your telescopes out. In other news, MERCH IS LIVE(!), and Chechnya's leader is a Hilary Swanker."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/efbe56f0-addf-408a-af99-11e2fa459187/Bugle-232-Mars-Merchandise-and-Mad-Men.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"36388899"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "36388899 (36388899)
[4]Found element "itunes:subtitle"
Element data: "Andy and John, and about a million Buglers have n…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "40:21"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and John, and about a million Buglers have noticed that there is a penis on Mars. Get your telescopes out. In other news, MERCH IS LIVE(!), and Chechnya's leader is a Hilary Swanker.]]>'	Element data: "Andy and John, and about a million Buglers have noticed that there is a penis on Mars. Get your telescopes out. In other news, MERCH IS LIVE(!), and Chechnya's leader is a Hilary Swanker."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000046516215-i6v1zc-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"36388899"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/efbe56f0-addf-408a-af99-11e2fa459187/Bugle-232-Mars-Merchandise-and-Mad-Men.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and John, and about a million Buglers have noticed that there is a penis on Mars. Get your telescopes out. In other news, MERCH IS LIVE(!), and Chechnya&#8217;s leader is a Hilary Swanker."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/zUpTn59iuyQ"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/04/bugle-232-mars-merchandise-and-mad-men/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/88597454"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 231 – The Queen should play poker"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 19 Apr 2013 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/9JZTFrX1hYk/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and John mark the passing of Margaret Thatcher, discuss their Aussie race-hate controversy and try to make sense of the gun laws fudge. Plus - who will love longer, Andy or John? The answer is revealed this week.]]>'	Element data: "Andy and John mark the passing of Margaret Thatcher, discuss their Aussie race-hate controversy and try to make sense of the gun laws fudge. Plus - who will love longer, Andy or John? The answer is revealed this week."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/2bace81c-ed41-493b-a7e8-c3f2d67a2ab3/Bugle-231-The-Queen-should-play-poker.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"37127258"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "37127258 (37127258)
[4]Found element "itunes:subtitle"
Element data: "Andy and John mark the passing of Margaret Thatcher, discuss their Aussie race-hate controversy and try to make sense of the gun laws fudge."
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "41:09"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and John mark the passing of Margaret Thatcher, discuss their Aussie race-hate controversy and try to make sense of the gun laws fudge. Plus - who will love longer, Andy or John? The answer is revealed this week.]]>'	Element data: "Andy and John mark the passing of Margaret Thatcher, discuss their Aussie race-hate controversy and try to make sense of the gun laws fudge. Plus - who will love longer, Andy or John? The answer is revealed this week."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000045914111-v4yk41-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"37127258"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/2bace81c-ed41-493b-a7e8-c3f2d67a2ab3/Bugle-231-The-Queen-should-play-poker.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and John mark the passing of Margaret Thatcher, discuss their Aussie race-hate controversy and try to make sense of the gun laws fudge. Plus &#8211; who will love longer, Andy or John? The answer is revealed this week."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/9JZTFrX1hYk"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/04/bugle-231-the-queen-should-play-poker/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/87883159"
End of element "guid".
[4]Found element "title"
Element data: "The Bugle – The Baroness bows out"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sun, 14 Apr 2013 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/ZkITHamJHQ4/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        What's an appropriate way to give Margaret Thatcher a send off?

Not like this.]]>'	Element data: "What's an appropriate way to give Margaret Thatcher a send off?

Not like this."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/ebb6c246-8884-44cd-9d21-68ada22e43ea/The-Bugle-The-Baroness-bows-out.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"34266185"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "34266185 (34266185)
[4]Found element "itunes:subtitle"
Element data: "What's an appropriate way to give Margaret Thatcher a send off?"
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "38:10"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        What's an appropriate way to give Margaret Thatcher a send off?  Not like this.]]>'	Element data: "What's an appropriate way to give Margaret Thatcher a send off?  Not like this."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000045511964-gn5dug-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"34266185"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/ebb6c246-8884-44cd-9d21-68ada22e43ea/The-Bugle-The-Baroness-bows-out.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "What&#8217;s an appropriate way to give Margaret Thatcher a send off?"
End of element "p".
P Data
P Data: Above epn is content:encoded
[5]Found element "p"
Element data: "Not like this."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/ZkITHamJHQ4"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/04/the-bugle-the-baroness-bows-out/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/86527383"
End of element "guid".
[4]Found element "title"
Element data: "Bugle Q&amp;A – Andy Zaltor Zaltzman"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 05 Apr 2013 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/zX6S261ZS3o/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy Zaltzman answers your questions, with help from Producer Chris]]>'	Element data: "Andy Zaltzman answers your questions, with help from Producer Chris"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/b3bd2551-bd3a-48f8-b7d2-e52ac91c35ad/Bugle-QA-Andy-Zaltor-Zaltzman.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"16975641"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "16975641 (16975641)
[4]Found element "itunes:subtitle"
Element data: "Andy Zaltzman answers your questions, with help f…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "20:08"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy Zaltzman answers your questions, with help from Producer Chris]]>'	Element data: "Andy Zaltzman answers your questions, with help from Producer Chris"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000044750585-wrjoev-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"16975641"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/b3bd2551-bd3a-48f8-b7d2-e52ac91c35ad/Bugle-QA-Andy-Zaltor-Zaltzman.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy Zaltzman answers your questions, with help from Producer Chris"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/zX6S261ZS3o"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/04/bugle-qa-andy-zaltor-zaltzman/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/85458378"
End of element "guid".
[4]Found element "title"
Element data: "The Bugle – The worst bits of 2013 (so far)"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 29 Mar 2013 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/vfoDLxIbVVM/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Some amazing as-yet-unheard clips from recent recordings of The Bugle.]]>'	Element data: "Some amazing as-yet-unheard clips from recent recordings of The Bugle."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/5fa29031-05eb-4aa6-8df3-28e1d4d26c8a/The-Bugle-The-worst-bits-of-2013-so-far.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"19005250"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "19005250 (19005250)
[4]Found element "itunes:subtitle"
Element data: "Some amazing as-yet-unheard clips from recent rec…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "22:14"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Some amazing as-yet-unheard clips from recent recordings of The Bugle.]]>'	Element data: "Some amazing as-yet-unheard clips from recent recordings of The Bugle."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000044165583-nzjpfb-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"19005250"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/5fa29031-05eb-4aa6-8df3-28e1d4d26c8a/The-Bugle-The-worst-bits-of-2013-so-far.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Some amazing as-yet-unheard clips from recent recordings of The Bugle."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/vfoDLxIbVVM"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/03/the-bugle-the-worst-bits-of-2013-so-far/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/84450652"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 229 – Cyprus ready to go Mad Max"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 22 Mar 2013 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/B09HjuXoJjs/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        The latest from Cyprus, where Chris's parents have the economy in their hands, budget news from the UK and Barack Obama goes on holiday]]>'	Element data: "The latest from Cyprus, where Chris's parents have the economy in their hands, budget news from the UK and Barack Obama goes on holiday"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/6ea6db2e-32dd-4fc9-90ce-e9c15e032a1e/Bugle-229-Cyprus-ready-to-go-Mad-Max.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"38626344"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "38626344 (38626344)
[4]Found element "itunes:subtitle"
Element data: "The latest from Cyprus, where Chris's parents hav…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "42:41"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        The latest from Cyprus, where Chris's parents have the economy in their hands, budget news from the UK and Barack Obama goes on holiday]]>'	Element data: "The latest from Cyprus, where Chris's parents have the economy in their hands, budget news from the UK and Barack Obama goes on holiday"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000043609977-nscb4v-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"38626344"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/6ea6db2e-32dd-4fc9-90ce-e9c15e032a1e/Bugle-229-Cyprus-ready-to-go-Mad-Max.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "The latest from Cyprus, where Chris&#8217;s parents have the economy in their hands, budget news from the UK and Barack Obama goes on holiday"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/B09HjuXoJjs"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/03/bugle-229-cyprus-ready-to-go-mad-max/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/83410414"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 228 – Rome’s most eligible bachelor"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Thu, 14 Mar 2013 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/saxhw0R5zqU/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        We have a new pope and he is 76 years young! Andy and John welcome him. Plus, amazing phone news and dog TV]]>'	Element data: "We have a new pope and he is 76 years young! Andy and John welcome him. Plus, amazing phone news and dog TV"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/5bee4d82-37fb-4ba9-8591-f6fac19747e6/Bugle-228-Romes-most-eligible-bachelor.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"37554629"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "37554629 (37554629)
[4]Found element "itunes:subtitle"
Element data: "We have a new pope and he is 76 years young! Andy…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "40:45"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        We have a new pope and he is 76 years young! Andy and John welcome him. Plus, amazing phone news and dog TV]]>'	Element data: "We have a new pope and he is 76 years young! Andy and John welcome him. Plus, amazing phone news and dog TV"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000043493330-rpk1n4-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"37554629"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/5bee4d82-37fb-4ba9-8591-f6fac19747e6/Bugle-228-Romes-most-eligible-bachelor.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "We have a new pope and he is 76 years young! Andy and John welcome him. Plus, amazing phone news and dog TV"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/saxhw0R5zqU"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/03/bugle-228-romes-most-eligible-bachelor/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/82376141"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 227 – Farewell Bush’s Muse"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 08 Mar 2013 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/b6czW_-Z2Ow/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and John mark the passing of Hugo Chavez, look into the baffling Italian elections and discuss what John needs to do when he hosts the Daily Show]]>'	Element data: "Andy and John mark the passing of Hugo Chavez, look into the baffling Italian elections and discuss what John needs to do when he hosts the Daily Show"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/5e799a10-dfd7-460d-8d47-be9e188be783/Bugle-227-Farewell-Bushs-Muse.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"39122811"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "39122811 (39122811)
[4]Found element "itunes:subtitle"
Element data: "Andy and John mark the passing of Hugo Chavez, lo…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "42:23"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and John mark the passing of Hugo Chavez, look into the baffling Italian elections and discuss what John needs to do when he hosts the Daily Show]]>'	Element data: "Andy and John mark the passing of Hugo Chavez, look into the baffling Italian elections and discuss what John needs to do when he hosts the Daily Show"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000043493351-81dtna-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"39122811"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/5e799a10-dfd7-460d-8d47-be9e188be783/Bugle-227-Farewell-Bushs-Muse.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and John mark the passing of Hugo Chavez, look into the baffling Italian elections and discuss what John needs to do when he hosts the Daily Show"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/b6czW_-Z2Ow"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/03/bugle-227-farewell-bushs-muse/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/81372342"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 226 – Salvo For Mali"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 01 Mar 2013 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/m7UGImzJ67Q/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        The world acts late on Mali. So does The Bugle. Also, the latest Pope and Mars news. Plus, the Harlem Globetrotters put their lives in their own hands]]>'	Element data: "The world acts late on Mali. So does The Bugle. Also, the latest Pope and Mars news. Plus, the Harlem Globetrotters put their lives in their own hands"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/378a3ba6-397e-484c-af43-c64b50f9876d/Bugle-226-Salvo-For-Mali.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"41263753"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "41263753 (41263753)
[4]Found element "itunes:subtitle"
Element data: "The world acts late on Mali. So does The Bugle. A…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "45:28"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        The world acts late on Mali. So does The Bugle. Also, the latest Pope and Mars news. Plus, the Harlem Globetrotters put their lives in their own hands]]>'	Element data: "The world acts late on Mali. So does The Bugle. Also, the latest Pope and Mars news. Plus, the Harlem Globetrotters put their lives in their own hands"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000043493379-7rnoki-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"41263753"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/378a3ba6-397e-484c-af43-c64b50f9876d/Bugle-226-Salvo-For-Mali.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "The world acts late on Mali. So does The Bugle. Also, the latest Pope and Mars news. Plus, the Harlem Globetrotters put their lives in their own hands"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/m7UGImzJ67Q"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/03/bugle-226-salvo-for-mali/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/80380005"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 225 – Waffles are forever"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 22 Feb 2013 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/qNsaV9q2OsY/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and John provide a crime update and reveal a few unexpected law changes.]]>'	Element data: "Andy and John provide a crime update and reveal a few unexpected law changes."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/c8467f27-1c9f-4fb7-8697-89356a61845a/Bugle-225-Waffles-are-forever.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"40148585"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "40148585 (40148585)
[4]Found element "itunes:subtitle"
Element data: "Andy and John provide a crime update and reveal a…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "43:28"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and John provide a crime update and reveal a few unexpected law changes.]]>'	Element data: "Andy and John provide a crime update and reveal a few unexpected law changes."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000043493400-sfulov-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"40148585"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/c8467f27-1c9f-4fb7-8697-89356a61845a/Bugle-225-Waffles-are-forever.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and John provide a crime update and reveal a few unexpected law changes."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/qNsaV9q2OsY"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/02/bugle-225-waffles-are-forever/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/79403211"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 224 – Papal Proton Packs"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 15 Feb 2013 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/RFIBBNs37fk/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Don't fire, he's not dead! Plus it's year of the snake, Iranian monkeys duped into space and the Iron Sheik cuts loose.]]>'	Element data: "Don't fire, he's not dead! Plus it's year of the snake, Iranian monkeys duped into space and the Iron Sheik cuts loose."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/60bdfce2-d980-4e9b-8048-49df2a3237cc/Bugle-224-Papal-Proton-Packs.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"42059085"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "42059085 (42059085)
[4]Found element "itunes:subtitle"
Element data: "Don't fire, he's not dead! Plus it's year of the …"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "46:15"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Don't fire, he's not dead! Plus it's year of the snake, Iranian monkeys duped into space and the Iron Sheik cuts loose.]]>'	Element data: "Don't fire, he's not dead! Plus it's year of the snake, Iranian monkeys duped into space and the Iron Sheik cuts loose."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000043493435-t4gsw2-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"42059085"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/60bdfce2-d980-4e9b-8048-49df2a3237cc/Bugle-224-Papal-Proton-Packs.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Don&#8217;t fire, he&#8217;s not dead! Plus it&#8217;s year of the snake, Iranian monkeys duped into space and the Iron Sheik cuts loose."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/RFIBBNs37fk"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/02/bugle-224-papal-proton-packs/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/78410784"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 223 – Invasion of the Asylugrants"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 08 Feb 2013 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/KbrxCCVseSk/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and John provide the latest immigration news from each side of the Atlantic, present some car park news and get an email about cats.]]>'	Element data: "Andy and John provide the latest immigration news from each side of the Atlantic, present some car park news and get an email about cats."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/a7f4bced-f25c-4f06-a50d-6004f7b678be/Bugle-223-Invasion-of-the-Asylugrants.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"40840328"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "40840328 (40840328)
[4]Found element "itunes:subtitle"
Element data: "Andy and John provide the latest immigration news…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "45:01"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and John provide the latest immigration news from each side of the Atlantic, present some car park news and get an email about cats.]]>'	Element data: "Andy and John provide the latest immigration news from each side of the Atlantic, present some car park news and get an email about cats."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000043493670-faxs6o-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"40840328"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/a7f4bced-f25c-4f06-a50d-6004f7b678be/Bugle-223-Invasion-of-the-Asylugrants.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and John provide the latest immigration news from each side of the Atlantic, present some car park news and get an email about cats."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/KbrxCCVseSk"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/02/bugle-223-invasion-of-the-asylugrants/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/77717162"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 222 – Halfrica"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sun, 03 Feb 2013 22:22:52 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/eVZJn7WxxUM/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and John provide a special update on Africa. A Mali section is not included for technical reasons, but we assure you it was above average in quality.]]>'	Element data: "Andy and John provide a special update on Africa. A Mali section is not included for technical reasons, but we assure you it was above average in quality."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/e7bae5bc-9b7e-4424-99d4-98d9906b7dec/Bugle-222-Halfrica.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"28773844"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "28773844 (28773844)
[4]Found element "itunes:subtitle"
Element data: "Andy and John provide a special update on Africa.…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "32:27"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and John provide a special update on Africa. A Mali section is not included for technical reasons, but we assure you it was above average in quality.]]>'	Element data: "Andy and John provide a special update on Africa. A Mali section is not included for technical reasons, but we assure you it was above average in quality."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000043493825-tfmxow-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"28773844"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/e7bae5bc-9b7e-4424-99d4-98d9906b7dec/Bugle-222-Halfrica.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and John provide a special update on Africa. A Mali section is not included for technical reasons, but we assure you it was above average in quality."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/eVZJn7WxxUM"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/02/bugle-222-halfrica/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/76447349"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 221 – Do EU really love Us?"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 25 Jan 2013 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/M5z6xebkzM4/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Britain throws another strop with on/off life partner, the EU. Plus - A new/old president, news about lies and a Superbowl preview. Sort of.]]>'	Element data: "Britain throws another strop with on/off life partner, the EU. Plus - A new/old president, news about lies and a Superbowl preview. Sort of."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/a94abd22-bd25-4b6f-adf4-e00426139997/Bugle-221-Do-EU-really-love-Us_.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"39329283"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "39329283 (39329283)
[4]Found element "itunes:subtitle"
Element data: "Britain throws another strop with on/off life par…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "42:36"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Britain throws another strop with on/off life partner, the EU. Plus - A new/old president, news about lies and a Superbowl preview. Sort of.]]>'	Element data: "Britain throws another strop with on/off life partner, the EU. Plus - A new/old president, news about lies and a Superbowl preview. Sort of."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000043493857-ewra1k-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"39329283"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/a94abd22-bd25-4b6f-adf4-e00426139997/Bugle-221-Do-EU-really-love-Us_.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Britain throws another strop with on/off life partner, the EU. Plus &#8211; A new/old president, news about lies and a Superbowl preview. Sort of."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/M5z6xebkzM4"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/01/bugle-221-do-eu-really-love-us/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/75688125"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 220 – The Cheat Hits The Fan"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sun, 20 Jan 2013 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/VEprSHlUDhY/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        The latest on Lance Armstrong, fake footballers wives, gun control and the contents of your burgers]]>'	Element data: "The latest on Lance Armstrong, fake footballers wives, gun control and the contents of your burgers"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/16a2df59-af40-4c68-b129-33e96a3c8d6b/Bugle-220-The-Cheat-Hits-The-Fan.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"33575657"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "33575657 (33575657)
[4]Found element "itunes:subtitle"
Element data: "The latest on Lance Armstrong, fake footballers w…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "36:37"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        The latest on Lance Armstrong, fake footballers wives, gun control and the contents of your burgers]]>'	Element data: "The latest on Lance Armstrong, fake footballers wives, gun control and the contents of your burgers"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000040255604-loyjw1-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"33575657"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/16a2df59-af40-4c68-b129-33e96a3c8d6b/Bugle-220-The-Cheat-Hits-The-Fan.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "The latest on Lance Armstrong, fake footballers wives, gun control and the contents of your burgers"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/VEprSHlUDhY"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/01/bugle-220-the-cheat-hits-the-fan/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/74548461"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 219 – 5th versus 1st"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 11 Jan 2013 19:56:52 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/vVUSs9E5mNI/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        The US and UK governments are half way through their runs, North Korea is totally mental, Apple reveal latest product and Andy, John and Chris are lusted after. Oh Yeah!]]>'	Element data: "The US and UK governments are half way through their runs, North Korea is totally mental, Apple reveal latest product and Andy, John and Chris are lusted after. Oh Yeah!"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/3f300312-14c1-4caf-9e04-ceaabace265b/Bugle-219-5th-versus-1st.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"39135768"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "39135768 (39135768)
[4]Found element "itunes:subtitle"
Element data: "The US and UK governments are half way through th…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "42:24"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        The US and UK governments are half way through their runs, North Korea is totally mental, Apple reveal latest product and Andy, John and Chris are lusted after. Oh Yeah!]]>'	Element data: "The US and UK governments are half way through their runs, North Korea is totally mental, Apple reveal latest product and Andy, John and Chris are lusted after. Oh Yeah!"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000040255564-32g0gg-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"39135768"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/3f300312-14c1-4caf-9e04-ceaabace265b/Bugle-219-5th-versus-1st.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "The US and UK governments are half way through their runs, North Korea is totally mental, Apple reveal latest product and Andy, John and Chris are lusted after. Oh Yeah!"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/vVUSs9E5mNI"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/01/bugle-219-5th-versus-1st/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/73632997"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 218 – Cliff Diving"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 04 Jan 2013 18:31:25 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/DczC8aJu8s8/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        In the 1st Bugle of 2013 the US going cliff diving, the Germans get angry, Mohamed Morsi gets dissed and 'Old Crownhead' gives her annual speech.]]>'	Element data: "In the 1st Bugle of 2013 the US going cliff diving, the Germans get angry, Mohamed Morsi gets dissed and 'Old Crownhead' gives her annual speech."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/24748353-4ffd-4385-b297-a010c418acbf/Bugle-218-Cliff-Diving.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"39598564"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "39598564 (39598564)
[4]Found element "itunes:subtitle"
Element data: "In the 1st Bugle of 2013 the US going cliff divin…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "43:44"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        In the 1st Bugle of 2013 the US going cliff diving, the Germans get angry, Mohamed Morsi gets dissed and 'Old Crownhead' gives her annual speech.]]>'	Element data: "In the 1st Bugle of 2013 the US going cliff diving, the Germans get angry, Mohamed Morsi gets dissed and 'Old Crownhead' gives her annual speech."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000040255627-y85ksf-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"39598564"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/24748353-4ffd-4385-b297-a010c418acbf/Bugle-218-Cliff-Diving.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "In the 1st Bugle of 2013 the US going cliff diving, the Germans get angry, Mohamed Morsi gets dissed and &#8216;Old Crownhead&#8217; gives her annual speech."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/DczC8aJu8s8"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2013/01/bugle-218-cliff-diving/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/72935824"
End of element "guid".
[4]Found element "title"
Element data: "The Bugle – The Complete 2012 – Part 2"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sat, 29 Dec 2012 13:03:56 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/ORQTnKJEorQ/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        The 2nd installment of our highlights of 2012. What a year! GOLD FOR 2012!]]>'	Element data: "The 2nd installment of our highlights of 2012. What a year! GOLD FOR 2012!"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/acf9a886-b330-44b3-855b-dae945b7ba5e/The-Bugle-The-Complete-2012-Part-2.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"36424943"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "36424943 (36424943)
[4]Found element "itunes:subtitle"
Element data: "The 2nd installment of our highlights of 2012. Wh…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "40:25"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        The 2nd installment of our highlights of 2012. What a year! GOLD FOR 2012!]]>'	Element data: "The 2nd installment of our highlights of 2012. What a year! GOLD FOR 2012!"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000040255658-p2x5bq-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"36424943"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/acf9a886-b330-44b3-855b-dae945b7ba5e/The-Bugle-The-Complete-2012-Part-2.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "The 2nd installment of our highlights of 2012. What a year! GOLD FOR 2012!"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/ORQTnKJEorQ"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/12/the-bugle-the-complete-2012-part-2/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/72090684"
End of element "guid".
[4]Found element "title"
Element data: "The Bugle – The complete 2012 – Part 1"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 21 Dec 2012 15:31:31 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/SFbiaxqRRqY/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        The Bugle celebrates the 1st half of 2012, and reveals the new logo.]]>'	Element data: "The Bugle celebrates the 1st half of 2012, and reveals the new logo."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/2151b293-fa5e-430e-aadc-b78fac084e94/The-Bugle-The-complete-2012-Part-1.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"43200143"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "43200143 (43200143)
[4]Found element "itunes:subtitle"
Element data: "The Bugle celebrates the 1st half of 2012, and re…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "47:28"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        The Bugle celebrates the 1st half of 2012, and reveals the new logo.]]>'	Element data: "The Bugle celebrates the 1st half of 2012, and reveals the new logo."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000040255736-p8jjga-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"43200143"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/2151b293-fa5e-430e-aadc-b78fac084e94/The-Bugle-The-complete-2012-Part-1.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "The Bugle celebrates the 1st half of 2012, and reveals the new logo."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/SFbiaxqRRqY"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/12/the-bugle-the-complete-2012-part-1/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/71246857"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 217 – Silvio’s Christmas Gift"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 14 Dec 2012 18:44:34 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/Y5o6qBkHkuk/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        In the final full Bugle of 2012 The Pope joins Twitter, census reveals extent of Islamic invasion, Silvio returns and Andy teaches India how to fight.]]>'	Element data: "In the final full Bugle of 2012 The Pope joins Twitter, census reveals extent of Islamic invasion, Silvio returns and Andy teaches India how to fight."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/11f6f357-52ee-44de-9ea5-0da9451ea92f/Bugle-217-Silvios-Christmas-Gift.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"42488874"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "42488874 (42488874)
[4]Found element "itunes:subtitle"
Element data: "In the final full Bugle of 2012 The Pope joins Tw…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "46:38"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        In the final full Bugle of 2012 The Pope joins Twitter, census reveals extent of Islamic invasion, Silvio returns and Andy teaches India how to fight.]]>'	Element data: "In the final full Bugle of 2012 The Pope joins Twitter, census reveals extent of Islamic invasion, Silvio returns and Andy teaches India how to fight."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000036216902-91mk7y-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"42488874"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/11f6f357-52ee-44de-9ea5-0da9451ea92f/Bugle-217-Silvios-Christmas-Gift.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "In the final full Bugle of 2012 The Pope joins Twitter, census reveals extent of Islamic invasion, Silvio returns and Andy teaches India how to fight."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/Y5o6qBkHkuk"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/12/bugle-217-silvios-christmas-gift/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/70378774"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 216 – We’re having a baby!"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 07 Dec 2012 21:02:47 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/dMcV0Rj2vqs/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Nothing else matters in the world as "We're Having A Baby!"

Kate of the Royals and that William are not the only ones expectant as the planet gets a massive case of baby brain.

This Bugle was created in five different time zones, spanning 13.5 Earth hours as John records amongst the stars in Los Angeles and Andy chows down on some choice bovine cuts in Calcutta.]]>'	Element data: "Nothing else matters in the world as "We're Having A Baby!"

Kate of the Royals and that William are not the only ones expectant as the planet gets a massive case of baby brain.

This Bugle was created in five different time zones, spanning 13.5 Earth hours as John records amongst the stars in Los Angeles and Andy chows down on some choice bovine cuts in Calcutta."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/7a0dd931-a3bf-42f7-acf2-5e2dbae7f070/Bugle-216-Were-having-a-baby.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"31297651"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "31297651 (31297651)
[4]Found element "itunes:subtitle"
Element data: "Nothing else matters in the world as "We're Having A Baby!""
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "24:13"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Nothing else matters in the world as "We're Having A Baby!"  Kate of the Royals and that William are not the only ones expectant as the planet gets a massive case of baby brain.  This Bugle was created in five different time zones, spanning 13.5 Earth hours as John records amongst the stars in Los Angeles and Andy chows down on some choice bovine cuts in Calcutta.]]>'	Element data: "Nothing else matters in the world as "We're Having A Baby!"  Kate of the Royals and that William are not the only ones expectant as the planet gets a massive case of baby brain.  This Bugle was created in five different time zones, spanning 13.5 Earth hours as John records amongst the stars in Los Angeles and Andy chows down on some choice bovine cuts in Calcutta."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000035725701-4r1myj-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"31297651"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/7a0dd931-a3bf-42f7-acf2-5e2dbae7f070/Bugle-216-Were-having-a-baby.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Nothing else matters in the world as &#8220;We&#8217;re Having A Baby!&#8221;"
End of element "p".
P Data
P Data: Above epn is content:encoded
[5]Found element "p"
Element data: "Kate of the Royals and that William are not the only ones expectant as the planet gets a massive case of baby brain."
End of element "p".
P Data
P Data: Above epn is content:encoded
[5]Found element "p"
Element data: "This Bugle was created in five different time zones, spanning 13.5 Earth hours as John records amongst the stars in Los Angeles and Andy chows down on some choice bovine cuts in Calcutta."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/dMcV0Rj2vqs"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/12/bugle-216-were-having-a-baby/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/69478204"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 215 – Let’s Nuke The Moon!"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 30 Nov 2012 19:36:43 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/dhIsd0aaf60/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and John explore the American plans to blow up the moon, continued trouble in the middle east, a crime free NYC and they meet THE Indian.]]>'	Element data: "Andy and John explore the American plans to blow up the moon, continued trouble in the middle east, a crime free NYC and they meet THE Indian."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/2e09cee5-4895-48a7-99be-709ce174a2fa/Bugle-215-Lets-Nuke-The-Moon.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"37948466"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "37948466 (37948466)
[4]Found element "itunes:subtitle"
Element data: "Andy and John explore the American plans to blow …"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "42:01"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and John explore the American plans to blow up the moon, continued trouble in the middle east, a crime free NYC and they meet THE Indian.]]>'	Element data: "Andy and John explore the American plans to blow up the moon, continued trouble in the middle east, a crime free NYC and they meet THE Indian."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000035239806-1id571-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"37948466"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/2e09cee5-4895-48a7-99be-709ce174a2fa/Bugle-215-Lets-Nuke-The-Moon.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and John explore the American plans to blow up the moon, continued trouble in the middle east, a crime free NYC and they meet THE Indian."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/dhIsd0aaf60"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/11/bugle-215-lets-nuke-the-moon/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/68552082"
End of element "guid".
[4]Found element "title"
Element data: "The Bugle – The Producer Chris Podcast"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 23 Nov 2012 16:34:26 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/zhQZKTMzC-8/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        An audio hurricane for a visual world. Bugle outtakes, Bugler interviews, triathlon and a bit of Producer Ped. And a puppy.]]>'	Element data: "An audio hurricane for a visual world. Bugle outtakes, Bugler interviews, triathlon and a bit of Producer Ped. And a puppy."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/74df4d79-97e0-49a6-a193-6933e7183961/The-Bugle-The-Producer-Chris-Podcast.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"25664763"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "25664763 (25664763)
[4]Found element "itunes:subtitle"
Element data: "An audio hurricane for a visual world. Bugle outt…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "29:06"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        An audio hurricane for a visual world. Bugle outtakes, Bugler interviews, triathlon and a bit of Producer Ped. And a puppy.]]>'	Element data: "An audio hurricane for a visual world. Bugle outtakes, Bugler interviews, triathlon and a bit of Producer Ped. And a puppy."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000034768427-v92682-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"25664763"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/74df4d79-97e0-49a6-a193-6933e7183961/The-Bugle-The-Producer-Chris-Podcast.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "An audio hurricane for a visual world. Bugle outtakes, Bugler interviews, triathlon and a bit of Producer Ped. And a puppy."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/zhQZKTMzC-8"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/11/the-bugle-the-producer-chris-podcast/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/67679692"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 214 – A Few Bad Men"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 16 Nov 2012 19:20:54 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/vkV9QyEMgpI/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        CTFD and GTFU Buglers! News from scandals in the US and the UK as well as secession news from Austin Texas]]>'	Element data: "CTFD and GTFU Buglers! News from scandals in the US and the UK as well as secession news from Austin Texas"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/c515618a-81f3-44a6-b18d-a5b2b0c9448f/Bugle-214-A-Few-Bad-Men.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"39386204"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "39386204 (39386204)
[4]Found element "itunes:subtitle"
Element data: "CTFD and GTFU Buglers! News from scandals in the …"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "43:30"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        CTFD and GTFU Buglers! News from scandals in the US and the UK as well as secession  news from Austin Texas]]>'	Element data: "CTFD and GTFU Buglers! News from scandals in the US and the UK as well as secession  news from Austin Texas"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000034326072-52ajb1-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"39386204"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/c515618a-81f3-44a6-b18d-a5b2b0c9448f/Bugle-214-A-Few-Bad-Men.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "CTFD and GTFU Buglers! News from scandals in the US and the UK as well as secession news from Austin Texas"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/vkV9QyEMgpI"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/11/bugle-214-a-few-bad-men/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/66789819"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 213 – Free At Last!"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 09 Nov 2012 20:43:26 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/TE3KQZi5ZoU/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Massive coffee news, T shirt cannons, and some election news.]]>'	Element data: "Massive coffee news, T shirt cannons, and some election news."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/88420b13-da9c-40a1-8480-7f2b301f51ce/Bugle-213-Free-At-Last.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"42599633"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "42599633 (42599633)
[4]Found element "itunes:subtitle"
Element data: "Massive coffee news, T shirt cannons, and some el…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "46:45"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Massive coffee news, T shirt cannons, and some election news.]]>'	Element data: "Massive coffee news, T shirt cannons, and some election news."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000033876424-ax2hyv-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"42599633"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/88420b13-da9c-40a1-8480-7f2b301f51ce/Bugle-213-Free-At-Last.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Massive coffee news, T shirt cannons, and some election news."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/TE3KQZi5ZoU"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/11/bugle-213-free-at-last/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/65870887"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 212 – Wind of change"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 02 Nov 2012 19:45:43 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/0NN3ZKHjNOU/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        New York takes Chicago's title, Berlusconi is a crook, and (finally) a daredevil feature.]]>'	Element data: "New York takes Chicago's title, Berlusconi is a crook, and (finally) a daredevil feature."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/86de52da-1153-4530-bc8d-269d2c11419d/Bugle-212-Wind-of-change.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"43950895"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "43950895 (43950895)
[4]Found element "itunes:subtitle"
Element data: "New York takes Chicago's title, Berlusconi is a c…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "48:09"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        New York takes Chicago's title, Berlusconi is a crook, and (finally) a daredevil feature.]]>'	Element data: "New York takes Chicago's title, Berlusconi is a crook, and (finally) a daredevil feature."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000033426030-e8ijn8-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"43950895"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/86de52da-1153-4530-bc8d-269d2c11419d/Bugle-212-Wind-of-change.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "New York takes Chicago&#8217;s title, Berlusconi is a crook, and (finally) a daredevil feature."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/0NN3ZKHjNOU"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/11/bugle-212-wind-of-change/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/64903067"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 211 – Electoral Labour"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 26 Oct 2012 18:27:06 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/TYNTKBNnyiI/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Election news from the USA, not dead news from Brazil, economy news from Britain and commodity news from Jay Z and Beyonce.]]>'	Element data: "Election news from the USA, not dead news from Brazil, economy news from Britain and commodity news from Jay Z and Beyonce."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/53b461aa-61b0-42d8-b941-4a2aa5fa7f80/Bugle-211-Electoral-Labour.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"37818275"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "37818275 (37818275)
[4]Found element "itunes:subtitle"
Element data: "Election news from the USA, not dead news from Br…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "41:46"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Election news from the USA, not dead news from Brazil, economy news from Britain and commodity news from Jay Z and Beyonce.]]>'	Element data: "Election news from the USA, not dead news from Brazil, economy news from Britain and commodity news from Jay Z and Beyonce."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000032935119-upr733-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"37818275"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/53b461aa-61b0-42d8-b941-4a2aa5fa7f80/Bugle-211-Electoral-Labour.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Election news from the USA, not dead news from Brazil, economy news from Britain and commodity news from Jay Z and Beyonce."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/TYNTKBNnyiI"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/10/bugle-211-electoral-labour/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/64051770"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 210 – Punch up for President!"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 19 Oct 2012 20:49:43 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/FZOjLvzCUW4/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        The battle to be US president descends to one level above/below boxing match. In other news, Scotland slides away, war crimes news and Bugler attempts to beat Chris to title of The Bugle's worst distance runner.]]>'	Element data: "The battle to be US president descends to one level above/below boxing match. In other news, Scotland slides away, war crimes news and Bugler attempts to beat Chris to title of The Bugle's worst distance runner."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/69a6fe7a-4483-4156-ab66-a5d64f7a12c4/Bugle-210-Punch-up-for-President.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"41236250"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "41236250 (41236250)
[4]Found element "itunes:subtitle"
Element data: "The battle to be US president descends to one lev…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "45:20"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        The battle to be US president descends to one level above/below boxing match. In other news, Scotland slides away, war crimes news and Bugler attempts to beat Chris to title of The Bugle's worst distance runner.]]>'	Element data: "The battle to be US president descends to one level above/below boxing match. In other news, Scotland slides away, war crimes news and Bugler attempts to beat Chris to title of The Bugle's worst distance runner."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000032502965-hih56n-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"41236250"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/69a6fe7a-4483-4156-ab66-a5d64f7a12c4/Bugle-210-Punch-up-for-President.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "The battle to be US president descends to one level above/below boxing match. In other news, Scotland slides away, war crimes news and Bugler attempts to beat Chris to title of The Bugle&#8217;s worst distance runner."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/FZOjLvzCUW4"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/10/bugle-210-punch-up-for-president/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/63425799"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 209 – 5th Birthday Edition"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sun, 14 Oct 2012 21:40:31 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/XaLFasrupKA/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Happy Bugle birthday everybody! To celebrate we present a Brass Balls special...]]>'	Element data: "Happy Bugle birthday everybody! To celebrate we present a Brass Balls special..."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/c16cd117-5f76-420d-9cbd-0e3b3daede5b/Bugle-209-5th-Birthday-Edition.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"36265083"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "36265083 (36265083)
[4]Found element "itunes:subtitle"
Element data: "Happy Bugle birthday everybody! To celebrate we p…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "40:09"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Happy Bugle birthday everybody! To celebrate we present a Brass Balls special...]]>'	Element data: "Happy Bugle birthday everybody! To celebrate we present a Brass Balls special..."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000032183338-5kvmdk-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"36265083"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/c16cd117-5f76-420d-9cbd-0e3b3daede5b/Bugle-209-5th-Birthday-Edition.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Happy Bugle birthday everybody! To celebrate we present a Brass Balls special&#8230;"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/XaLFasrupKA"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/10/bugle-209-5th-birthday-edition/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/62369989"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 208 – A Kama Sutra approach to the truth"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 05 Oct 2012 23:37:42 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/Ktfwj4t_2Xs/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Romney v Obama. Oh dear. Plus, snakes - the paracetamol of the animal world!]]>'	Element data: "Romney v Obama. Oh dear. Plus, snakes - the paracetamol of the animal world!"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/26f1c5ec-ba5e-4729-a6e2-83e4f5e0b183/Bugle-208-A-Kama-Sutra-approach-to-the-truth.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"36051048"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "36051048 (36051048)
[4]Found element "itunes:subtitle"
Element data: "Romney v Obama. Oh dear. Plus, snakes - the parac…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "39:56"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Romney v Obama. Oh dear. Plus, snakes - the paracetamol of the animal world!]]>'	Element data: "Romney v Obama. Oh dear. Plus, snakes - the paracetamol of the animal world!"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000031636437-aibyvq-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"36051048"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/26f1c5ec-ba5e-4729-a6e2-83e4f5e0b183/Bugle-208-A-Kama-Sutra-approach-to-the-truth.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Romney v Obama. Oh dear. Plus, snakes &#8211; the paracetamol of the animal world!"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/Ktfwj4t_2Xs"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/10/bugle-208-a-kama-sutra-approach-to-the-truth/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/61513252"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 207 – UN-believable"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 28 Sep 2012 19:10:57 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/4GNZtAlDDJU/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and John have the latest from the leaders pow wow at the UN, preview the Anglican elections (really) and reveal your best suggestions for a name for a fake horse]]>'	Element data: "Andy and John have the latest from the leaders pow wow at the UN, preview the Anglican elections (really) and reveal your best suggestions for a name for a fake horse"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/8e36f9bc-c1cc-4832-8865-52915f598a31/Bugle-207-UN-believable.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"41094562"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "41094562 (41094562)
[4]Found element "itunes:subtitle"
Element data: "Andy and John have the latest from the leaders po…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "45:11"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and John have the latest from the leaders pow wow at the UN, preview the Anglican elections (really) and reveal your best suggestions for a name for a fake horse]]>'	Element data: "Andy and John have the latest from the leaders pow wow at the UN, preview the Anglican elections (really) and reveal your best suggestions for a name for a fake horse"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000031191075-e534gm-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"41094562"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/8e36f9bc-c1cc-4832-8865-52915f598a31/Bugle-207-UN-believable.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and John have the latest from the leaders pow wow at the UN, preview the Anglican elections (really) and reveal your best suggestions for a name for a fake horse"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/4GNZtAlDDJU"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/09/bugle-207-un-believable/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/60685381"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 206 – The President is not a gremlin"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 21 Sep 2012 18:35:56 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/GMAcFYdxBUg/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and John provide the latest from Democrapalooza, offer the latest smart phone reviews, reveal what a vicar should never sing at a funeral, place lies into categories and discuss the latest waparazzi news]]>'	Element data: "Andy and John provide the latest from Democrapalooza, offer the latest smart phone reviews, reveal what a vicar should never sing at a funeral, place lies into categories and discuss the latest waparazzi news"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/8021999b-c86c-4997-b06e-1d35f47f04f6/Bugle-206-The-President-is-not-a-gremlin.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"41764968"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "41764968 (41764968)
[4]Found element "itunes:subtitle"
Element data: "Andy and John provide the latest from Democrapalo…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "45:53"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and John provide the latest from Democrapalooza, offer the latest smart phone reviews, reveal what a vicar should never sing at a funeral, place lies into categories and discuss the latest waparazzi news]]>'	Element data: "Andy and John provide the latest from Democrapalooza, offer the latest smart phone reviews, reveal what a vicar should never sing at a funeral, place lies into categories and discuss the latest waparazzi news"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000030750381-kpz2bi-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"41764968"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/8021999b-c86c-4997-b06e-1d35f47f04f6/Bugle-206-The-President-is-not-a-gremlin.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and John provide the latest from Democrapalooza, offer the latest smart phone reviews, reveal what a vicar should never sing at a funeral, place lies into categories and discuss the latest waparazzi news"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/GMAcFYdxBUg"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/09/bugle-206-the-president-is-not-a-gremlin/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/56676235"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 205 – The Trojan Horse"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 17 Aug 2012 21:48:41 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/OY_2ywMUE1g/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and John recover from the Olympics by diving into the US elections. Apparently they happen later this year]]>'	Element data: "Andy and John recover from the Olympics by diving into the US elections. Apparently they happen later this year"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/3ed923ac-1ce6-452c-b5b6-4c64353fdc1b/Bugle-205-The-Trojan-Horse.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"39331192"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "39331192 (39331192)
[4]Found element "itunes:subtitle"
Element data: "Andy and John recover from the Olympics by diving…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "43:21"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and John recover from the Olympics by diving into the US elections. Apparently they happen later this year]]>'	Element data: "Andy and John recover from the Olympics by diving into the US elections. Apparently they happen later this year"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000028657428-ccz90g-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"39331192"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/3ed923ac-1ce6-452c-b5b6-4c64353fdc1b/Bugle-205-The-Trojan-Horse.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and John recover from the Olympics by diving into the US elections. Apparently they happen later this year"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/OY_2ywMUE1g"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/08/bugle-205-the-trojan-horse/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/55889865"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 204 – What the Feck"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 10 Aug 2012 21:39:51 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/jpmF-uPic8s/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and John prepare for life post Olympics, paying tribute to the greatest diver of all time. In other news, Madonna starts a Pussy Riot]]>'	Element data: "Andy and John prepare for life post Olympics, paying tribute to the greatest diver of all time. In other news, Madonna starts a Pussy Riot"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/a95a6d27-3cf2-4b78-85a1-06e531937464/Bugle-204-What-the-Feck.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"36529484"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "36529484 (36529484)
[4]Found element "itunes:subtitle"
Element data: "Andy and John prepare for life post Olympics, pay…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "40:32"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and John prepare for life post Olympics, paying tribute to the greatest diver of all time. In other news, Madonna starts a Pussy Riot]]>'	Element data: "Andy and John prepare for life post Olympics, paying tribute to the greatest diver of all time. In other news, Madonna starts a Pussy Riot"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000028249169-kg5pzp-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"36529484"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/a95a6d27-3cf2-4b78-85a1-06e531937464/Bugle-204-What-the-Feck.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and John prepare for life post Olympics, paying tribute to the greatest diver of all time. In other news, Madonna starts a Pussy Riot"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/jpmF-uPic8s"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/08/bugle-204-what-the-feck/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/55103662"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 203 – No medals for Syria"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 03 Aug 2012 20:21:31 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/uAyOLzvX72s/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        This Bugle sounds like what a Bugle would sound like if Andy and John had spent the last watching the Olympics and nothing less.]]>'	Element data: "This Bugle sounds like what a Bugle would sound like if Andy and John had spent the last watching the Olympics and nothing less."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/30f99a1d-2ca9-43d6-bc71-b8e5f058396e/Bugle-203-No-medals-for-Syria.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"62578617"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "62578617 (62578617)
[4]Found element "itunes:subtitle"
Element data: "This Bugle sounds like what a Bugle would sound l…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "45:56"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        This Bugle sounds like what a Bugle would sound like if Andy and John had spent the last watching the Olympics and nothing less.]]>'	Element data: "This Bugle sounds like what a Bugle would sound like if Andy and John had spent the last watching the Olympics and nothing less."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000027842880-gk5aco-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"62578617"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/30f99a1d-2ca9-43d6-bc71-b8e5f058396e/Bugle-203-No-medals-for-Syria.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "This Bugle sounds like what a Bugle would sound like if Andy and John had spent the last watching the Olympics and nothing less."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/uAyOLzvX72s"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/08/bugle-203-no-medals-for-syria/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/54320701"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 202 – Sport!"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 27 Jul 2012 20:49:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/j9wxkRlnK2Y/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        It's London! It's 2012! That means one thing - SPORT! Oh, and more on the Romneyshambles and North Korea]]>'	Element data: "It's London! It's 2012! That means one thing - SPORT! Oh, and more on the Romneyshambles and North Korea"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/16fea358-c5f5-49b2-abed-7d1b90cbe14e/Bugle-202-Sport.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"40682888"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "40682888 (40682888)
[4]Found element "itunes:subtitle"
Element data: "It's London! It's 2012! That means one thing - SP…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "44:52"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        It's London! It's 2012! That means one thing - SPORT! Oh, and more on the Romneyshambles and North Korea]]>'	Element data: "It's London! It's 2012! That means one thing - SPORT! Oh, and more on the Romneyshambles and North Korea"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000027438185-wpcfq0-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"40682888"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/16fea358-c5f5-49b2-abed-7d1b90cbe14e/Bugle-202-Sport.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "It&#8217;s London! It&#8217;s 2012! That means one thing &#8211; SPORT! Oh, and more on the Romneyshambles and North Korea"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/j9wxkRlnK2Y"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/07/bugle-202-sport/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/53552729"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 201 – Dirty bankers"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 20 Jul 2012 21:59:46 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/neUd9-PtNHA/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Bankers are bad, mermaids don't exist and the Olympics are near.]]>'	Element data: "Bankers are bad, mermaids don't exist and the Olympics are near."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/be80c417-5618-4ac6-a15c-7a134f0f8c32/Bugle-201-Dirty-bankers.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"38401233"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "38401233 (38401233)
[4]Found element "itunes:subtitle"
Element data: "Bankers are bad, mermaids don't exist and the Oly…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "42:22"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Bankers are bad, mermaids don't exist and the Olympics are near.]]>'	Element data: "Bankers are bad, mermaids don't exist and the Olympics are near."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000027037089-vf2eol-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"38401233"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/be80c417-5618-4ac6-a15c-7a134f0f8c32/Bugle-201-Dirty-bankers.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Bankers are bad, mermaids don&#8217;t exist and the Olympics are near."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/neUd9-PtNHA"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/07/bugle-201-dirty-bankers/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/52753907"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 200 – The horn dog returneth!"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 13 Jul 2012 19:24:47 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/OOgCTd5ydf4/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        The Bugle celebrates it's 200th edition with the return of two old favourites. Also in the news, evil bankers are making us learn boring things, and Kim Jong Un reveals his virility. Plus, should we fire missiles at the rain?]]>'	Element data: "The Bugle celebrates it's 200th edition with the return of two old favourites. Also in the news, evil bankers are making us learn boring things, and Kim Jong Un reveals his virility. Plus, should we fire missiles at the rain?"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/cb3fb028-746c-470b-be6f-584ce33687e1/Bugle-200-The-horn-dog-returneth.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"46049020"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "46049020 (46049020)
[4]Found element "itunes:subtitle"
Element data: "The Bugle celebrates it's 200th edition with the …"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "50:27"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        The Bugle celebrates it's 200th edition with the return of two old favourites. Also in the news, evil bankers are making us learn boring things, and Kim Jong Un reveals his virility. Plus, should we fire missiles at the rain?]]>'	Element data: "The Bugle celebrates it's 200th edition with the return of two old favourites. Also in the news, evil bankers are making us learn boring things, and Kim Jong Un reveals his virility. Plus, should we fire missiles at the rain?"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000026620148-n2p9cw-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"46049020"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/cb3fb028-746c-470b-be6f-584ce33687e1/Bugle-200-The-horn-dog-returneth.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "The Bugle celebrates it&#8217;s 200th edition with the return of two old favourites. Also in the news, evil bankers are making us learn boring things, and Kim Jong Un reveals his virility. Plus, should we fire missiles at the rain?"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/OOgCTd5ydf4"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/07/bugle-200-the-horn-dog-returneth/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/51987759"
End of element "guid".
[4]Found element "title"
Element data: "The Bugle – Andy Zaltzman Speaks"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 06 Jul 2012 17:19:52 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/PpYqHLE9724/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        With the 200th Bugle just a week away, Andy Zaltzman takes his turn to take listener questions. Producer Chris asks the questions, excellently.]]>'	Element data: "With the 200th Bugle just a week away, Andy Zaltzman takes his turn to take listener questions. Producer Chris asks the questions, excellently."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/08d84e6a-94ff-4818-bb45-9be9ea6dc25f/The-Bugle-Andy-Zaltzman-Speaks.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"14526099"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "14526099 (14526099)
[4]Found element "itunes:subtitle"
Element data: "With the 200th Bugle just a week away, Andy Zaltz…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "17:27"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        With the 200th Bugle just a week away, Andy Zaltzman takes his turn to take listener questions. Producer Chris asks the questions, excellently.]]>'	Element data: "With the 200th Bugle just a week away, Andy Zaltzman takes his turn to take listener questions. Producer Chris asks the questions, excellently."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000026222958-t5jaf3-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"14526099"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/08d84e6a-94ff-4818-bb45-9be9ea6dc25f/The-Bugle-Andy-Zaltzman-Speaks.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "With the 200th Bugle just a week away, Andy Zaltzman takes his turn to take listener questions. Producer Chris asks the questions, excellently."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/PpYqHLE9724"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/07/the-bugle-andy-zaltzman-speaks/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/51258124"
End of element "guid".
[4]Found element "title"
Element data: "The Bugle – John Oliver Speaks"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 29 Jun 2012 14:39:48 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/v6SvQ8VRxNQ/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        As The Bugle prepares to celebrate a fine double century, producer Chris puts some listener questions to John]]>'	Element data: "As The Bugle prepares to celebrate a fine double century, producer Chris puts some listener questions to John"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/b2570f41-0eae-4b74-84a1-9cd78fd73620/The-Bugle-John-Oliver-Speaks.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"17106605"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "17106605 (17106605)
[4]Found element "itunes:subtitle"
Element data: "As The Bugle prepares to celebrate a fine double …"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "14:20"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        As The Bugle prepares to celebrate a fine double century, producer Chris puts some listener questions to John]]>'	Element data: "As The Bugle prepares to celebrate a fine double century, producer Chris puts some listener questions to John"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000025847172-wp8645-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"17106605"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/b2570f41-0eae-4b74-84a1-9cd78fd73620/The-Bugle-John-Oliver-Speaks.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "As The Bugle prepares to celebrate a fine double century, producer Chris puts some listener questions to John"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/v6SvQ8VRxNQ"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/06/the-bugle-john-oliver-speaks/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/50543290"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 199 – This is an ex-president!"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 22 Jun 2012 18:31:50 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/ntwZVo5fEvM/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and John bring the latest from Egypt where democracy and the health of it's former leader are teetering on the edge. In other news, wealthy Brits are treating tax as a voluntary act of philanthropy, a Syrian has big brass balls and the US gets in knots over knitting]]>'	Element data: "Andy and John bring the latest from Egypt where democracy and the health of it's former leader are teetering on the edge. In other news, wealthy Brits are treating tax as a voluntary act of philanthropy, a Syrian has big brass balls and the US gets in knots over knitting"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/3d8cabc2-cbd6-49c8-ad01-0db76fc8445a/Bugle-199-This-is-an-ex-president.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"43631105"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "43631105 (43631105)
[4]Found element "itunes:subtitle"
Element data: "Andy and John bring the latest from Egypt where d…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "47:46"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and John bring the latest from Egypt where democracy and the health of it's former leader are teetering on the edge. In other news, wealthy Brits are treating tax as a voluntary act of philanthropy, a Syrian has big brass balls and the US gets in knots over knitting]]>'	Element data: "Andy and John bring the latest from Egypt where democracy and the health of it's former leader are teetering on the edge. In other news, wealthy Brits are treating tax as a voluntary act of philanthropy, a Syrian has big brass balls and the US gets in knots over knitting"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000025480624-k7ataw-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"43631105"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/3d8cabc2-cbd6-49c8-ad01-0db76fc8445a/Bugle-199-This-is-an-ex-president.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and John bring the latest from Egypt where democracy and the health of it&#8217;s former leader are teetering on the edge. In other news, wealthy Brits are treating tax as a voluntary act of philanthropy, a Syrian has big brass balls and the US gets in knots over knitting"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/ntwZVo5fEvM"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/06/bugle-199-this-is-an-ex-president/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/49789720"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 198 – Warm up and melt down"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 15 Jun 2012 15:46:57 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/ro2FJX-ql3I/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        The world prepares for another half-arsed attempt to save itself, sheep are unleased on London 2012, Elvis is alive, and Andy gives the most complete analysis of the Eurozone crisis yet,]]>'	Element data: "The world prepares for another half-arsed attempt to save itself, sheep are unleased on London 2012, Elvis is alive, and Andy gives the most complete analysis of the Eurozone crisis yet,"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/80990d00-6ffc-409a-bad0-3ac2e7e076f2/Bugle-198-Warm-up-and-melt-down.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"36972179"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "36972179 (36972179)
[4]Found element "itunes:subtitle"
Element data: "The world prepares for another half-arsed attempt…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "40:50"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        The world prepares for another half-arsed attempt to save itself, sheep are unleased on London 2012, Elvis is alive, and Andy gives the most complete analysis of the Eurozone crisis yet,]]>'	Element data: "The world prepares for another half-arsed attempt to save itself, sheep are unleased on London 2012, Elvis is alive, and Andy gives the most complete analysis of the Eurozone crisis yet,"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000025096131-7cvsky-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"36972179"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/80990d00-6ffc-409a-bad0-3ac2e7e076f2/Bugle-198-Warm-up-and-melt-down.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "The world prepares for another half-arsed attempt to save itself, sheep are unleased on London 2012, Elvis is alive, and Andy gives the most complete analysis of the Eurozone crisis yet,"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/ro2FJX-ql3I"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/06/bugle-198-warm-up-and-melt-down/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/49072365"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 197 – Singing in the Reign"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 08 Jun 2012 19:35:34 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/RE_w7nAVkAo/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        A reviewbilee of the Queen's festivities. Plus, in other news; killer terrorist furniture causes chaos and Euro 2012 begins to a chorus of jeers and pessimism.]]>'	Element data: "A reviewbilee of the Queen's festivities. Plus, in other news; killer terrorist furniture causes chaos and Euro 2012 begins to a chorus of jeers and pessimism."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/814948c7-3f80-4e8b-8e38-fd1d83703373/Bugle-197-Singing-in-the-Reign.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"37393064"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "37393064 (37393064)
[4]Found element "itunes:subtitle"
Element data: "A reviewbilee of the Queen's festivities. Plus, i…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "41:16"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        A reviewbilee of the Queen's festivities. Plus, in other news; killer terrorist furniture causes chaos and Euro 2012 begins to a chorus of jeers and pessimism.]]>'	Element data: "A reviewbilee of the Queen's festivities. Plus, in other news; killer terrorist furniture causes chaos and Euro 2012 begins to a chorus of jeers and pessimism."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000024729568-l8ky3p-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"37393064"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/814948c7-3f80-4e8b-8e38-fd1d83703373/Bugle-197-Singing-in-the-Reign.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "A reviewbilee of the Queen&#8217;s festivities. Plus, in other news; killer terrorist furniture causes chaos and Euro 2012 begins to a chorus of jeers and pessimism."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/RE_w7nAVkAo"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/06/bugle-197-singing-in-the-reign/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/48319391"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 196 – Jubilee Special"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 01 Jun 2012 20:46:51 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/8s9cONiiZFE/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        The Bugle celebrates 60 years of the Q-Unit. In other news, Obama's kill list, the UN is unimpressed with Syria and doctoring the pension contributions.]]>'	Element data: "The Bugle celebrates 60 years of the Q-Unit. In other news, Obama's kill list, the UN is unimpressed with Syria and doctoring the pension contributions."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/bfd344ce-58dc-4cdd-8e83-3071c2d622da/Bugle-196-Jubilee-Special.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"39144313"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "39144313 (39144313)
[4]Found element "itunes:subtitle"
Element data: "The Bugle celebrates 60 years of the Q-Unit. In o…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "43:06"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        The Bugle celebrates 60 years of the Q-Unit. In other news, Obama's kill list, the UN is unimpressed with Syria and doctoring the pension contributions.]]>'	Element data: "The Bugle celebrates 60 years of the Q-Unit. In other news, Obama's kill list, the UN is unimpressed with Syria and doctoring the pension contributions."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000024337620-ig8f5w-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"39144313"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/bfd344ce-58dc-4cdd-8e83-3071c2d622da/Bugle-196-Jubilee-Special.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "The Bugle celebrates 60 years of the Q-Unit. In other news, Obama&#8217;s kill list, the UN is unimpressed with Syria and doctoring the pension contributions."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/8s9cONiiZFE"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/06/bugle-196-jubilee-special/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/47562754"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 195 – A drop of Reagan’s Blood"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 25 May 2012 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/8PxS4qsEyJA/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        The latest news from the Egyptian elections, hosting it's 1st democratic election in 7000 years, and from London 2012, where there are many missiles on buildings.]]>'	Element data: "The latest news from the Egyptian elections, hosting it's 1st democratic election in 7000 years, and from London 2012, where there are many missiles on buildings."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/4e5d27da-fb29-4cc6-94b9-1e08c7df6c4e/Bugle-195-A-drop-of-Reagans-Blood.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"36332197"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "36332197 (36332197)
[4]Found element "itunes:subtitle"
Element data: "The latest news from the Egyptian elections, host…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "40:10"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        The latest news from the Egyptian elections, hosting it's 1st democratic election in 7000 years, and  from London 2012, where there are many missiles on buildings.]]>'	Element data: "The latest news from the Egyptian elections, hosting it's 1st democratic election in 7000 years, and  from London 2012, where there are many missiles on buildings."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000023946754-mxd4mt-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"36332197"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/4e5d27da-fb29-4cc6-94b9-1e08c7df6c4e/Bugle-195-A-drop-of-Reagans-Blood.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "The latest news from the Egyptian elections, hosting it&#8217;s 1st democratic election in 7000 years, and from London 2012, where there are many missiles on buildings."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/8PxS4qsEyJA"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/05/bugle-195-a-drop-of-reagans-blood/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/46582256"
End of element "guid".
[4]Found element "title"
Element data: "The Bugle – 194a – Too Good For Context"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Wed, 16 May 2012 16:22:45 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/W4aifY0K7vM/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Some amazing clips from recent shows, in the wrong order]]>'	Element data: "Some amazing clips from recent shows, in the wrong order"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/8c97c25a-f96d-4ed4-9e64-e886f7cd9904/The-Bugle-194a-Too-Good-For-Context.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"26049652"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "26049652 (26049652)
[4]Found element "itunes:subtitle"
Element data: "Some amazing clips from recent shows, in the wron…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "29:27"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Some amazing clips from recent shows, in the wrong order]]>'	Element data: "Some amazing clips from recent shows, in the wrong order"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000023438349-spucps-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"26049652"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/8c97c25a-f96d-4ed4-9e64-e886f7cd9904/The-Bugle-194a-Too-Good-For-Context.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Some amazing clips from recent shows, in the wrong order"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/W4aifY0K7vM"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/05/the-bugle-194a-too-good-for-context/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/46127395"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 194 – Global Election Round Up"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 11 May 2012 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/ztCC7Mgfm0s/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        So what's been happening at the ballot box in Mexico, Russia, Greece and France? The Bugle investigates. Plus, Obama shows Cameron how to inspire.]]>'	Element data: "So what's been happening at the ballot box in Mexico, Russia, Greece and France? The Bugle investigates. Plus, Obama shows Cameron how to inspire."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/870c7ca9-8916-40bb-b83f-f3940da74461/Bugle-194-Global-Election-Round-Up.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"44716308"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "44716308 (44716308)
[4]Found element "itunes:subtitle"
Element data: "So what's been happening at the ballot box in Mex…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "48:54"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        So what's been happening at the ballot box in Mexico, Russia, Greece and France? The Bugle investigates. Plus, Obama shows Cameron how to inspire.]]>'	Element data: "So what's been happening at the ballot box in Mexico, Russia, Greece and France? The Bugle investigates. Plus, Obama shows Cameron how to inspire."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000023202132-vdf0si-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"44716308"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/870c7ca9-8916-40bb-b83f-f3940da74461/Bugle-194-Global-Election-Round-Up.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "So what&#8217;s been happening at the ballot box in Mexico, Russia, Greece and France? The Bugle investigates. Plus, Obama shows Cameron how to inspire."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/ztCC7Mgfm0s"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/05/bugle-194-global-election-round-up/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/45327588"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 193 – Happy Deathiversary!"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 04 May 2012 20:49:55 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/8JlrTEoPgiQ/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Osama Bin Laden's death commemoration special! Plus Gingrich promises holograms and 32% of the people of Britain have spoken.]]>'	Element data: "Osama Bin Laden's death commemoration special! Plus Gingrich promises holograms and 32% of the people of Britain have spoken."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/2c4035a7-e2ad-4506-a6bd-b815be9452dc/Bugle-193-Happy-Deathiversary.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"35447760"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "35447760 (35447760)
[4]Found element "itunes:subtitle"
Element data: "Osama Bin Laden's death commemoration special! Pl…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "39:15"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Osama Bin Laden's death commemoration special! Plus Gingrich promises holograms and 32% of the people of Britain have spoken.]]>'	Element data: "Osama Bin Laden's death commemoration special! Plus Gingrich promises holograms and 32% of the people of Britain have spoken."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000022790321-cqfcg1-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"35447760"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/2c4035a7-e2ad-4506-a6bd-b815be9452dc/Bugle-193-Happy-Deathiversary.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Osama Bin Laden&#8217;s death commemoration special! Plus Gingrich promises holograms and 32% of the people of Britain have spoken."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/8JlrTEoPgiQ"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/05/bugle-193-happy-deathiversary/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/44570260"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 192 – Uncle Rupert is the real victim"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 27 Apr 2012 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/BnA4wZFTXWI/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Kindly Uncle Rupert meets Lord Leveson, France goes to the polls, Newt makes a statement and Israel and Palestine become penpals.

And this is how a Bugler cooks...http://thebuglepodcast.com/?p=317]]>'	Element data: "Kindly Uncle Rupert meets Lord Leveson, France goes to the polls, Newt makes a statement and Israel and Palestine become penpals.

And this is how a Bugler cooks...http://thebuglepodcast.com/?p=317"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/6b8e6ae6-cdd2-4627-94a0-a6a394ecc575/Bugle-192-Uncle-Rupert-is-the-real-victim.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"39915448"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "39915448 (39915448)
[4]Found element "itunes:subtitle"
Element data: "Kindly Uncle Rupert meets Lord Leveson, France goes to the polls, Newt makes a statement and Israel and Palestine become penpals."
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "43:54"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Kindly Uncle Rupert meets Lord Leveson, France goes to the polls, Newt makes a statement and Israel and Palestine become pencils.  And this is how a Bugler cooks...  http://thebuglepodcast.com/?p=317]]>'	Element data: "Kindly Uncle Rupert meets Lord Leveson, France goes to the polls, Newt makes a statement and Israel and Palestine become pencils.  And this is how a Bugler cooks...  http://thebuglepodcast.com/?p=317"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000022403880-56qa60-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"39915448"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/6b8e6ae6-cdd2-4627-94a0-a6a394ecc575/Bugle-192-Uncle-Rupert-is-the-real-victim.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Kindly Uncle Rupert meets Lord Leveson, France goes to the polls, Newt makes a statement and Israel and Palestine become penpals."
End of element "p".
P Data
P Data: Above epn is content:encoded
[5]Found element "p"
Element data: "And this is how a Bugler cooks&#8230;http://thebuglepodcast.com/?p=317"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/BnA4wZFTXWI"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/04/bugle-192-uncle-rupert-is-the-real-victim/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/43808745"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 191 – A secret servicing"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 20 Apr 2012 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/zg6UN15sIP8/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Sex scandal special! Plus, penguin eats newt, town proposes shocking name change and producer Chris is set to win the London Mararthon. Support him here: http://uk.virginmoneygiving.com/HackneyEmpire]]>'	Element data: "Sex scandal special! Plus, penguin eats newt, town proposes shocking name change and producer Chris is set to win the London Mararthon. Support him here: http://uk.virginmoneygiving.com/HackneyEmpire"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/191c7247-1a14-4c98-be46-66f6237cdf58/Bugle-191-A-secret-servicing.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"39744503"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "39744503 (39744503)
[4]Found element "itunes:subtitle"
Element data: "Sex scandal special! Plus, penguin eats newt, tow…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "43:43"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Sex scandal special! Plus, penguin eats newt, town proposes shocking name change and producer Chris is set to win the London Mararthon. Support him here: http://uk.virginmoneygiving.com/HackneyEmpire]]>'	Element data: "Sex scandal special! Plus, penguin eats newt, town proposes shocking name change and producer Chris is set to win the London Mararthon. Support him here: http://uk.virginmoneygiving.com/HackneyEmpire"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000021997911-6j67fq-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"39744503"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/191c7247-1a14-4c98-be46-66f6237cdf58/Bugle-191-A-secret-servicing.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Sex scandal special! Plus, penguin eats newt, town proposes shocking name change and producer Chris is set to win the London Mararthon. Support him here: http://uk.virginmoneygiving.com/HackneyEmpire"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/zg6UN15sIP8"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/04/bugle-191-a-secret-servicing/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/43031326"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 190 – Santorum splashes out"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 13 Apr 2012 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/MySFvr2te9M/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        The Republican race to win the right to lose hots up. Plus a Titanic celebration and rowing about rowing. http://thebuglepodcast.com/]]>'	Element data: "The Republican race to win the right to lose hots up. Plus a Titanic celebration and rowing about rowing. http://thebuglepodcast.com/"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/f9cff0d2-4f2f-48a4-b0fb-7edb33b52ad1/Bugle-190-Santorum-splashes-out.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"41220568"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "41220568 (41220568)
[4]Found element "itunes:subtitle"
Element data: "The Republican race to win the right to lose hots…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "45:16"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        The Republican race to win the right to lose hots up. Plus a Titanic celebration and rowing about rowing. http://thebuglepodcast.com/]]>'	Element data: "The Republican race to win the right to lose hots up. Plus a Titanic celebration and rowing about rowing. http://thebuglepodcast.com/"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000021599801-tkcqlx-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"41220568"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/f9cff0d2-4f2f-48a4-b0fb-7edb33b52ad1/Bugle-190-Santorum-splashes-out.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "The Republican race to win the right to lose hots up. Plus a Titanic celebration and rowing about rowing. http://thebuglepodcast.com/"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/MySFvr2te9M"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/04/bugle-190-santorum-splashes-out/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/42274394"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 189 – ‘Like eating Bill Cosby’"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 06 Apr 2012 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/mvgeBpoUda8/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Andy and John finally deliver an Antarctic special, plus Chinese art news, and a new season in the US version of Rounders. Recorded in a special location.]]>'	Element data: "Andy and John finally deliver an Antarctic special, plus Chinese art news, and a new season in the US version of Rounders. Recorded in a special location."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/62772298-199e-4f0e-b817-f91fb917332c/Bugle-189-Like-eating-Bill-Cosby.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"42576044"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "42576044 (42576044)
[4]Found element "itunes:subtitle"
Element data: "Andy and John finally deliver an Antarctic specia…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "46:40"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Andy and John finally deliver an Antarctic special, plus Chinese art news, and a new season in the US version of Rounders. Recorded in a special location.]]>'	Element data: "Andy and John finally deliver an Antarctic special, plus Chinese art news, and a new season in the US version of Rounders. Recorded in a special location."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000021207109-c5icb5-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"42576044"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/62772298-199e-4f0e-b817-f91fb917332c/Bugle-189-Like-eating-Bill-Cosby.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Andy and John finally deliver an Antarctic special, plus Chinese art news, and a new season in the US version of Rounders. Recorded in a special location."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/mvgeBpoUda8"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/04/bugle-189-like-eating-bill-cosby/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/41497650"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 188 – Gentlemen, start your engines!"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 30 Mar 2012 22:08:29 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/idjkiYcSD-s/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        It's panic stations at the fuel pumps, as the public waste money that could be more wisely invested in a meal with the Prime Minister or funding a Republican candidate campaign. Failing that, a tepid working class pasty.]]>'	Element data: "It's panic stations at the fuel pumps, as the public waste money that could be more wisely invested in a meal with the Prime Minister or funding a Republican candidate campaign. Failing that, a tepid working class pasty."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/f21b8d68-4a84-48c0-9d37-8d9dd359158f/Bugle-188-Gentlemen-start-your-engines.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"34571444"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "34571444 (34571444)
[4]Found element "itunes:subtitle"
Element data: "It's panic stations at the fuel pumps, as the pub…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "38:30"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        It's panic stations at the fuel pumps, as the public waste money that could be more wisely invested in a meal with the Prime Minister or funding a Republican candidate campaign. Failing that, a tepid working class pasty.]]>'	Element data: "It's panic stations at the fuel pumps, as the public waste money that could be more wisely invested in a meal with the Prime Minister or funding a Republican candidate campaign. Failing that, a tepid working class pasty."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000020814552-1c30ea-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"34571444"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/f21b8d68-4a84-48c0-9d37-8d9dd359158f/Bugle-188-Gentlemen-start-your-engines.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "It&#8217;s panic stations at the fuel pumps, as the public waste money that could be more wisely invested in a meal with the Prime Minister or funding a Republican candidate campaign. Failing that, a tepid working class pasty."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/idjkiYcSD-s"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/03/bugle-188-gentlemen-start-your-engines/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/40729581"
End of element "guid".
[4]Found element "title"
Element data: "The Bugle Q&amp;A, vol 1"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 23 Mar 2012 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/vBbB8Ocj2gE/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        A listener generated Q&A. If it's bad, it's your fault http://thebuglepodcast.com/]]>'	Element data: "A listener generated Q&A. If it's bad, it's your fault http://thebuglepodcast.com/"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/faf2e47e-a7f0-4b74-9f05-dda9d0e27ad0/The-Bugle-QA-vol-1.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"19629619"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "19629619 (19629619)
[4]Found element "itunes:subtitle"
Element data: "A listener generated Q&amp;A. If it's bad, it's your …"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "16:04"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        A listener generated Q&A. If it's bad, it's your fault http://thebuglepodcast.com/]]>'	Element data: "A listener generated Q&A. If it's bad, it's your fault http://thebuglepodcast.com/"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000020429963-o25903-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"19629619"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/faf2e47e-a7f0-4b74-9f05-dda9d0e27ad0/The-Bugle-QA-vol-1.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "A listener generated Q&amp;A. If it&#8217;s bad, it&#8217;s your fault http://thebuglepodcast.com/"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/vBbB8Ocj2gE"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/03/the-bugle-qa-vol-1/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/39986878"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 187 – The President’s Playlist"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 16 Mar 2012 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/xSYQrMVgPJs/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Assad's account gets hacked, anonymous Brit visits the US and ugly dog dies. Visit http://thebuglepodcast.com/]]>'	Element data: "Assad's account gets hacked, anonymous Brit visits the US and ugly dog dies. Visit http://thebuglepodcast.com/"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/81a42792-87ac-417f-a031-b5fcdead67bc/Bugle-187-The-Presidents-Playlist.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"41236019"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "41236019 (41236019)
[4]Found element "itunes:subtitle"
Element data: "Assad's account gets hacked, anonymous Brit visit…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "45:22"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Assad's account gets hacked, anonymous Brit visits the US and ugly dog dies. Visit http://thebuglepodcast.com/]]>'	Element data: "Assad's account gets hacked, anonymous Brit visits the US and ugly dog dies. Visit http://thebuglepodcast.com/"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000020058050-jce2tz-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"41236019"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/81a42792-87ac-417f-a031-b5fcdead67bc/Bugle-187-The-Presidents-Playlist.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Assad&#8217;s account gets hacked, anonymous Brit visits the US and ugly dog dies. Visit http://thebuglepodcast.com/"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/xSYQrMVgPJs"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/03/bugle-187-the-presidents-playlist/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/39259321"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 186 – An Insult to Civic Society"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 09 Mar 2012 22:50:21 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/g_XxCMj_FLk/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Together in New York! Andy and John round up the latest global election news and take an unorthodox mathematics test. http://thebuglepodcast.com/]]>'	Element data: "Together in New York! Andy and John round up the latest global election news and take an unorthodox mathematics test. http://thebuglepodcast.com/"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/83883d90-600d-4f51-8f8a-67a99e0e11e2/Bugle-186-An-Insult-to-Civic-Society.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"41728555"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "41728555 (41728555)
[4]Found element "itunes:subtitle"
Element data: "Together in New York! Andy and John round up the …"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "45:47"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Together in New York! Andy and John round up the latest global election news and take an unorthodox mathematics test. http://thebuglepodcast.com/]]>'	Element data: "Together in New York! Andy and John round up the latest global election news and take an unorthodox mathematics test. http://thebuglepodcast.com/"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000019690089-e51hmk-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"41728555"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/83883d90-600d-4f51-8f8a-67a99e0e11e2/Bugle-186-An-Insult-to-Civic-Society.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Together in New York! Andy and John round up the latest global election news and take an unorthodox mathematics test. http://thebuglepodcast.com/"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/g_XxCMj_FLk"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/03/bugle-186-an-insult-to-civic-society/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/38496207"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 185 – Burning Rings Of Steel"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 02 Mar 2012 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/ZZR6KzlEbVc/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        How is London getting on with the Olympics? How wet is Angela Merkel? What have News International been up to? http://thebuglepodcast.com/]]>'	Element data: "How is London getting on with the Olympics? How wet is Angela Merkel? What have News International been up to? http://thebuglepodcast.com/"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/95882c22-1927-4f47-a2a5-34407db7b518/Bugle-185-Burning-Rings-Of-Steel.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"38823537"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "38823537 (38823537)
[4]Found element "itunes:subtitle"
Element data: "How is London getting on with the Olympics? How w…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "42:46"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        How is London getting on with the Olympics? How wet is Angela Merkel? What have News International been up to? http://thebuglepodcast.com/]]>'	Element data: "How is London getting on with the Olympics? How wet is Angela Merkel? What have News International been up to? http://thebuglepodcast.com/"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000019306119-chejje-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"38823537"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/95882c22-1927-4f47-a2a5-34407db7b518/Bugle-185-Burning-Rings-Of-Steel.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "How is London getting on with the Olympics? How wet is Angela Merkel? What have News International been up to? http://thebuglepodcast.com/"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/ZZR6KzlEbVc"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/03/bugle-185-burning-rings-of-steel/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/37723693"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 184 – Wangderlust"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 24 Feb 2012 21:20:21 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/mwy3gLDrtKg/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Following the Lady Special, now The Bugle presents a Man Special. Except the latest hot news on the 'Y' chromosome, and other droobler based stories.]]>'	Element data: "Following the Lady Special, now The Bugle presents a Man Special. Except the latest hot news on the 'Y' chromosome, and other droobler based stories."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/0a9bc1d6-74f2-4d72-a4ab-6e8ce0fa3a30/Bugle-184-Wangderlust.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"34585632"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "34585632 (34585632)
[4]Found element "itunes:subtitle"
Element data: "Following the Lady Special, now The Bugle present…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "38:21"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Following the Lady Special, now The Bugle presents a Man Special. Except the latest hot news on the 'Y' chromosome, and other droobler based stories.]]>'	Element data: "Following the Lady Special, now The Bugle presents a Man Special. Except the latest hot news on the 'Y' chromosome, and other droobler based stories."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000018928344-bt5xma-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"34585632"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/0a9bc1d6-74f2-4d72-a4ab-6e8ce0fa3a30/Bugle-184-Wangderlust.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Following the Lady Special, now The Bugle presents a Man Special. Except the latest hot news on the &#8216;Y&#8217; chromosome, and other droobler based stories."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/mwy3gLDrtKg"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/02/bugle-184-wangderlust/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/36988351"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 183 – Bugle Lady Special"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sat, 18 Feb 2012 00:54:32 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/j0SUySLUpoA/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        It's been a bad week if you are of the opposite gender to Andy and John, so The Bugle shows some sisterly solidarity.

May contain mentions of the Taleban, and Rick Santorum]]>'	Element data: "It's been a bad week if you are of the opposite gender to Andy and John, so The Bugle shows some sisterly solidarity.

May contain mentions of the Taleban, and Rick Santorum"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/e89cf527-aba7-4faf-8204-0e8f48150326/Bugle-183-Bugle-Lady-Special.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"38892702"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "38892702 (38892702)
[4]Found element "itunes:subtitle"
Element data: "It's been a bad week if you are of the opposite gender to Andy and John, so The Bugle shows some sisterly solidarity."
End of element "itunes:subtitle".
[4]Found element "itunes:duration"
Element data: "42:50"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        It's been a bad week if you are of the opposite gender to Andy and John, so The Bugle shows some sisterly solidarity.  May contain mentions of the Taleban, and Rick Santorum]]>'	Element data: "It's been a bad week if you are of the opposite gender to Andy and John, so The Bugle shows some sisterly solidarity.  May contain mentions of the Taleban, and Rick Santorum"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000018550188-esz54u-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"38892702"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/e89cf527-aba7-4faf-8204-0e8f48150326/Bugle-183-Bugle-Lady-Special.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "It&#8217;s been a bad week if you are of the opposite gender to Andy and John, so The Bugle shows some sisterly solidarity."
End of element "p".
P Data
P Data: Above epn is content:encoded
[5]Found element "p"
Element data: "May contain mentions of the Taleban, and Rick Santorum"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/j0SUySLUpoA"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/02/bugle-183-bugle-lady-special/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/36226670"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 182 – Stockpiling Humanity"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Sat, 11 Feb 2012 01:22:07 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/loQO3R5XBJ0/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Maldiviacs revolt, Capello quits, Syria sinks, and Dickens dives.]]>'	Element data: "Maldiviacs revolt, Capello quits, Syria sinks, and Dickens dives."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/9017f0c7-6e84-49ba-ba0a-59190101fc37/Bugle-182-Stockpiling-Humanity.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"37496162"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "37496162 (37496162)
[4]Found element "itunes:subtitle"
Element data: "Maldiviacs revolt, Capello quits, Syria sinks, an…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "41:23"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Maldiviacs revolt, Capello quits, Syria sinks, and Dickens dives.]]>'	Element data: "Maldiviacs revolt, Capello quits, Syria sinks, and Dickens dives."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000018169007-8da3eo-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"37496162"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/9017f0c7-6e84-49ba-ba0a-59190101fc37/Bugle-182-Stockpiling-Humanity.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Maldiviacs revolt, Capello quits, Syria sinks, and Dickens dives."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/loQO3R5XBJ0"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/02/bugle-182-stockpiling-humanity/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/35476039"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 181 – A Knight’s Fail"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 03 Feb 2012 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/v5rtEHQq0Ak/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Syria slips further, Mitt the Mighty, and Sir Fred is dead. Well, not dead, just Fred.]]>'	Element data: "Syria slips further, Mitt the Mighty, and Sir Fred is dead. Well, not dead, just Fred."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/37aae521-2cab-422c-aa62-401ae81493ad/Bugle-181-A-Knights-Fail.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"35491541"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "35491541 (35491541)
[4]Found element "itunes:subtitle"
Element data: "Syria slips further, Mitt the Mighty, and Sir Fre…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "39:07"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Syria slips further, Mitt the Mighty, and Sir Fred is dead. Well, not dead, just Fred.]]>'	Element data: "Syria slips further, Mitt the Mighty, and Sir Fred is dead. Well, not dead, just Fred."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000017797905-olbvyi-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"35491541"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/37aae521-2cab-422c-aa62-401ae81493ad/Bugle-181-A-Knights-Fail.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Syria slips further, Mitt the Mighty, and Sir Fred is dead. Well, not dead, just Fred."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/v5rtEHQq0Ak"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/02/bugle-181-a-knights-fail/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/34759678"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 180 – The truth about lies"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 27 Jan 2012 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/fLIuV0bYFgA/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Lies, damn lies and cricket statistics. Plus, a round up of presidential news, what's driving Canada over the edge, and the battle for Saddam's butt cheek.]]>'	Element data: "Lies, damn lies and cricket statistics. Plus, a round up of presidential news, what's driving Canada over the edge, and the battle for Saddam's butt cheek."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/6bd97b6b-b3c8-4709-827a-056df4be06a7/Bugle-180-The-truth-about-lies.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"42126000"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "42126000 (42126000)
[4]Found element "itunes:subtitle"
Element data: "Lies, damn lies and cricket statistics. Plus, a r…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "46:12"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Lies, damn lies and cricket statistics. Plus, a round up of presidential news, what's driving Canada over the edge, and the battle for Saddam's butt cheek.]]>'	Element data: "Lies, damn lies and cricket statistics. Plus, a round up of presidential news, what's driving Canada over the edge, and the battle for Saddam's butt cheek."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000017445441-hbzh9g-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"42126000"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/6bd97b6b-b3c8-4709-827a-056df4be06a7/Bugle-180-The-truth-about-lies.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Lies, damn lies and cricket statistics. Plus, a round up of presidential news, what&#8217;s driving Canada over the edge, and the battle for Saddam&#8217;s butt cheek."
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/fLIuV0bYFgA"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/01/bugle-180-the-truth-about-lies/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/34019569"
End of element "guid".
[4]Found element "title"
Element data: "Bugle 179 – Playas gon play"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Fri, 20 Jan 2012 00:00:00 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/dNYXEtx4UTw/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        This week - oh PIPA, Republican't candidates and Craptain Italia. Remember to #savethebugle at http://www.thebuglepodcast.com]]>'	Element data: "This week - oh PIPA, Republican't candidates and Craptain Italia. Remember to #savethebugle at http://www.thebuglepodcast.com"
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/a37e2c6b-a6d6-4a3c-bfaf-1a5f9cbcb72c/Bugle-179-Playas-gon-play.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"42266672"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "42266672 (42266672)
[4]Found element "itunes:subtitle"
Element data: "This week - oh PIPA, Republican't candidates and …"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "46:21"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        This week - oh PIPA, Republican't candidates and Craptain Italia. Remember to #savethebugle at http://www.thebuglepodcast.com]]>'	Element data: "This week - oh PIPA, Republican't candidates and Craptain Italia. Remember to #savethebugle at http://www.thebuglepodcast.com"
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000017079411-pgm0ii-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"42266672"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/a37e2c6b-a6d6-4a3c-bfaf-1a5f9cbcb72c/Bugle-179-Playas-gon-play.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "This week &#8211; oh PIPA, Republican&#8217;t candidates and Craptain Italia. Remember to #savethebugle at http://www.thebuglepodcast.com"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/dNYXEtx4UTw"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/01/bugle-179-playas-gon-play/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
[3]Found element "item"
Found element "guid"[4]
Attribute [of 'guid'] 'isPermaLink' = '"false"'
Element data: "tag:soundcloud,2010:tracks/33658533"
End of element "guid".
[4]Found element "title"
Element data: "Hello Buglers!"
End of element "title".
	TITLE
[4]Found element "pubDate"
Element data: "Tue, 17 Jan 2012 10:46:54 -0000"
End of element "pubDate".
[4]Found element "link"
Element data: "http://feedproxy.google.com/~r/thebuglefeed/~3/RMNCiVB1Ppw/"
End of element "link".
	LINK
[4]Found element "description"
Fixing ']]>'	'
        Hello Buglers, if this has turned up in your iTunes folder or similar device for downloading then it means the changeover has worked...]]>'	Element data: "Hello Buglers, if this has turned up in your iTunes folder or similar device for downloading then it means the changeover has worked..."
End of element "description".
Found element "enclosure"[4]
Attribute [of 'enclosure'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/27a95ada-feb3-4ef3-9d4c-6ac9de330923/Hello-Buglers.mp3"'
Attribute [of 'enclosure'] 'type' = '"audio/mpeg"'
Attribute [of 'enclosure'] 'length' = '"5364728"'
End of element "enclosure".
STAG: 'enclosure'
Enclosure Length: "5364728 (5364728)
[4]Found element "itunes:subtitle"
Element data: "Hello Buglers, if this has turned up in your iTun…"
End of element "itunes:subtitle".
[4]Found element "itunes:explicit"
Element data: "yes"
End of element "itunes:explicit".
[4]Found element "itunes:duration"
Element data: "04:40"
End of element "itunes:duration".
[4]Found element "category"
Fixing ']]>'	'
        Podcast]]>'	Element data: "Podcast"
End of element "category".
CAT category, Podcast
Item Category 'Podcast' ((null))
[4]Found element "itunes:author"
Element data: "The Bugle"
End of element "itunes:author".
[4]Found element "itunes:summary"
Fixing ']]>'	'
        Hello Buglers, if this has turned up in your iTunes folder or similar device for downloading then it means the changeover has worked...]]>'	Element data: "Hello Buglers, if this has turned up in your iTunes folder or similar device for downloading then it means the changeover has worked..."
End of element "itunes:summary".
Found element "itunes:image"[4]
Attribute [of 'itunes:image'] 'href' = '"http://i1.sndcdn.com/artworks-000016901180-o3gii8-original.jpg"'
End of element "itunes:image".
STAG: 'itunes:image'
Found element "media:content"[4]
Attribute [of 'media:content'] 'fileSize' = '"5364728"'
Attribute [of 'media:content'] 'type' = '"audio/mpeg"'
Attribute [of 'media:content'] 'url' = '"https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/27a95ada-feb3-4ef3-9d4c-6ac9de330923/Hello-Buglers.mp3"'
End of element "media:content".
STAG: 'media:content'
[4]Found element "content:encoded"
[5]Found element "p"
Element data: "Hello Buglers, if this has turned up in your iTunes folder or similar device for downloading then it means the changeover has worked&#8230;"
End of element "p".
P Data
P Data: Above epn is content:encoded
Found element "img"[5]
Attribute [of 'img'] 'src' = '"http://feeds.feedburner.com/~r/thebuglefeed/~4/RMNCiVB1Ppw"'
Attribute [of 'img'] 'height' = '"1"'
Attribute [of 'img'] 'width' = '"1"'
Attribute [of 'img'] 'alt' = '""'
End of element "img".
STAG: 'img'
Fixing ']]>'	']]>'	Element data: ""
End of element "content:encoded".
[4]Found element "feedburner:origLink"
Element data: "http://bugle.prx.org/2012/01/hello-buglers/"
End of element "feedburner:origLink".
Element data: ""
End of element "item".
	ITEM
Element data: ""
End of element "channel".
	CHANNEL
Element data: ""
End of element "rss".
	RSS
File:
RSS Version: 2.0
Channel 1 - The Bugle:
  Link: http://thebuglepodcast.com/
  Description: It’s the trans-global satiricast that leaves no hot potato unbuttered. Andy Zaltzman breaks down the news with comedians from across the world including Wyatt Cenac, Hari Kondabolu, John Oliver, Nish Kumar, Anuvab Pal and his sister Helen.
  Language: en
  Copyright: 2016, All Rights Reserved
  Managing Editor: 'prxwpadmin@prx.org (The Bugle)'
  Webmaster: prxhelp@prx.org (PRX)
  Publication Date: Fri (Fri, 31/3/2017 19:7:53 -0000 (0:0))
  Last Build Date: Fri, 31 Mar 2017 19:15:45 -0000 (Fri, 31/3/2017 19:15:45 -0000 (0:0))
  Generator: PRX Feeder v1.0.0
  Documentation: http://blogs.law.harvard.edu/tech/rss
  Time To Live: 60
  Image: https://f.prxu.org/thebugle/images/e7c3bb8a-2c67-4db2-819c-b7dcb1b72d5f/bugle_zag-300.png (The Bugle) --> http://thebuglepodcast.com/
    Width: 300
    Height: 300
  Categories:
  Items:
    Item 1 - Bonus Bugle – Too Much News #1
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/oSo5_BL1QVA/
      Description: Some recent moments that missed the final cut - including the definitive verdict on the 'bleeps'
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/ad4199ff-a6b3-40e8-a086-7a2e9cbe5a91/bugle4022a_wp.mp3", 32503850 Bytes, "audio/mpeg"
      GUID: http://bugle.prx.org/?p=623 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 2 - Bugle 4022 – Not Scared, Bored
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/yd_eIvnpbb4/
      Description: Andy and Nish on the response to the London terror attacks, Trump's failed bill, the happiness index and Scotland's confused position.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/538ae651-e966-4b4c-9b5f-2c03b3275ae2/bugle4022_wp.mp3", 47508167 Bytes, "audio/mpeg"
      GUID: http://bugle.prx.org/?p=619 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 3 - Bugle 4021 – Geertcha
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/tMfipdr5Szc/
      Description: Andy and Hari Kondabolu discuss the 'good' news from the Netherlands, the rantings of Steve king, Trump's tax return and a penis-on-roof shortage.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/951d2ce1-2435-41e1-ac51-f5375d90715c/bugle4021_wp.mp3", 41731971 Bytes, "audio/mpeg"
      GUID: http://bugle.prx.org/?p=616 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 4 - Bugle 4020 – Gender War
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/O8ZgNnRJ2qo/
      Description: Which is the better sex, why can't same sex couples commit adultery, how did Russia break infinity and why has the news gone (literally) down a rabbit hole?
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/1aea73ff-ec84-427a-a3ae-03889ac60877/bugle4020_wp.mp3", 44521848 Bytes, "audio/mpeg"
      GUID: http://bugle.prx.org/?p=612 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 5 - Bugle 4019 – Donkey
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/7wEdwv2SC7U/
      Description: Andy is joined by Wyatt Cenac to review Donald Trump's attempts to sound like a president, plus new billionaires want to be president and an in depth look into the latest fad - sleep.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/ddeed579-b323-451d-81f1-a15cc4f97139/bugle4019_wp.mp3", 34603677 Bytes, "audio/mpeg"
      GUID: http://bugle.prx.org/?p=609 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 6 - Bugle 4018 – Fashion &amp; Fascism
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/TTvZZ-S1oRY/
      Description: Amnesty has a report out, this is not good news for anyone
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/fb2a0fb1-8e5e-4860-b030-ca0e19eb351e/bugle4018_wp.mp3", 42809887 Bytes, "audio/mpeg"
      GUID: http://bugle.prx.org/?p=604 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 7 - Bugle 4017 – Evolution special
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/ncjn-IKqw54/
      Description: What are we doing to prolong humankind? Not much AND too much.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/75251e1c-f117-407f-be69-cf18992d884f/bugle4017_wp.mp3", 40647784 Bytes, "audio/mpeg"
      GUID: http://bugle.prx.org/?p=600 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 8 - Bugle 4016 – Terrorists eat cauliflowers
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/ZPuI1ttdaMA/
      Description: Are you a terrorist? It's no longer simply 'yes' or 'no', and don't ask Donald.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/738ba557-a9d2-4791-aedd-86c8a32e3497/bugle4016_wp.mp3", 44406073 Bytes, "audio/mpeg"
      GUID: http://bugle.prx.org/?p=596 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 9 - Bugle 4015 – Tolerance is just laziness
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/XWkiVcQC6lI/
      Description: Lord Gaga, Lady Gaga, salad shortages and Superbowl
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/775aa66e-b1cb-4247-8d3e-73dd8321a5d1/bugle4015_wp.mp3", 41824340 Bytes, "audio/mpeg"
      GUID: http://bugle.prx.org/?p=592 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 10 - Bugle 4014 – How bad can it get in a week?
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/P4sezdESAYk/
      Description: One Week Into the Trump Administration. Hard to talk about much else.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/2fa6e5be-b8a7-4d02-bd61-7b2fe39cb557/170127-Bugle-Mixdown.mp3", 39359650 Bytes, "audio/mpeg"
      GUID: http://bugle.prx.org/?p=588 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 11 - Bugle 4013 – American Carnage
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/RwOF80fqrZc/
      Description: Trump inauguration: Andy and Hari try to make sense of what just happened
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/f4f64418-20d9-4969-819f-50f6bcfa9dd1/bugle4013_wp.mp3", 31165962 Bytes, "audio/mpeg"
      GUID: http://bugle.prx.org/?p=584 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 12 - Bugle 4012 – Bashfulness and Shame
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/J6tYH0v6F64/
      Description: Is Trump any worse than Catherine the Great? Should Andy start consulting for Mexico, and how much should a Chinese football team play for a total novice?
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/313bf702-f784-4fd7-87d2-b8fd54685909/bugle4012_wp2.mp3", 112652539 Bytes, "audio/mpeg"
      GUID: http://bugle.prx.org/?p=578 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 13 - Bugle 4011 – George W Bush Nostalgia
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/0WLfQMM2aYo/
      Description: Brexit resignations, Trump tantrums and MASSIVE CHICKEN NEWS
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/25b340b4-232e-4f4e-93d7-fe66e446dcb6/Bugle4011_wp.mp3", 44146939 Bytes, "audio/mpeg"
      GUID: http://bugle.prx.org/?p=575 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 14 - Bugle 4010 – Christmas special!
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/k_6-zUuIJHA/
      Description: Some Christmas tales from The Bugle
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/4809bbe7-343f-4579-b34e-55cf2ad47a58/bugle4010_wp.mp3", 38953796 Bytes, "audio/mpeg"
      GUID: http://bugle.prx.org/?p=571 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 15 - Bugle 4009 – Trump, Turkey &amp; Trains
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/qihbYBUe4-o/
      Description: Andy and Anuvab Pal discuss the latest actions from the world's new crop of mad despots.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/e9f2a4c5-2b38-4734-9817-4c0ed63bb827/bugle4009_wp.mp3", 45124545 Bytes, "audio/mpeg"
      GUID: http://bugle.prx.org/?p=566 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 16 - Bugle 4008 – Citation Needed
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/mnf0Q5b9XIc/
      Description: Andy and Nish report on the latest experiments with democracy in Europe
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/0ccf6d67-ea90-4aab-9b34-c281a274d044/bugle2008_wp.mp3", 43606100 Bytes, "audio/mpeg"
      GUID: http://bugle.prx.org/?p=562 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 17 - Bugle 4007 – Mid Atlantica
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/inlzr8sC0ns/
      Description: Andy is joined by Wyatt Cenac to look at the latest developments either side of the Atlantic, plus Fidel Castro and buckets of gold.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/8e0be3a1-b335-4d58-a08b-6ee7b22f395d/Bugle4007_wp.mp3", 42488477 Bytes, "audio/mpeg"
      GUID: http://bugle.prx.org/?p=558 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 18 - Bugle 4006 – Zaltzman Showdown
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/WNQMM2kJa10/
      Description: Helen Zalzman joins Andy to talk Tony Blair, recounts and Donald Trump.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/304a2a4c-c8a4-4cbb-8daf-dc830014955f/Bugle4006.mp3", 43721648 Bytes, "audio/mpeg"
      GUID: http://bugle.prx.org/?p=549 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 19 - Bugle 4005 – Who Do I Bribe?
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/3dl04z_LJlA/
      Description: In a break from Brexit and electogeddon, The Bugle turns it's eyes on India
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/7d51095f-9f1d-4008-9b0e-8dff39afb02d/bugle4005_WP-1.mp3", 41643363 Bytes, "audio/mpeg"
      GUID: http://bugle.prx.org/?p=541 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 20 - Bugle 4004 – ZERO DT
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/S8HFSjqXLYs/
      Description: Andy and Hari Kondabolu try and fail to make sense of the US Presidential election.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/97c75cee-ff23-4260-a749-bcae1e5dd59c/bugle4004_wp.mp3", 40366498 Bytes, "audio/mpeg"
      GUID: http://bugle.prx.org/?p=536 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 21 - Bugle 4003 – Vote Rochelle
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/bPN8nJLhKJQ/
      Description: Andy is joined by Wyatt Cenac to discuss the final days of the US elections
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/7d4bbc38-6c94-4853-92e3-abc637cfadf6/bugle4003_wp.mp3", 37567007 Bytes, "audio/mpeg"
      GUID: http://bugle.prx.org/?p=532 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 22 - Bugle 4002 – Where’s MY Knighthood?
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/naLPhLFhzws/
      Description: Britain post-Brexit, the refugee crisis and the Chicago Cubs
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/b56f9c14-a367-4301-ba63-9645ac76a82e/BUGLE4002_WP.mp3", 40320940 Bytes, "audio/mpeg"
      GUID: http://bugle.prx.org/?p=527 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 23 - Bugle 4001 – Tony The Tiger RIP
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/2OLQ6zeVWqQ/
      Description: US Elections, pumpkins and Finland
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/0e61c214-4539-40cf-aaf0-943279232d70/BUGLE4001_WP.mp3", 39301538 Bytes, "audio/mpeg"
      GUID: http://bugle.prx.org/?p=524 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 24 - Buglemas Eve – A Preview
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/LXAkBbCQ4P0/
      Description: The Bugle is back on 24th October
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/decf6d4c-cdeb-40eb-8223-80b571a57742/FINALPREVIEW.mp3", 25437414 Bytes, "audio/mpeg"
      GUID: http://bugle.prx.org/?p=518 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 25 - A Bugle update
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/oMhTOMNcVxo/
      Description: An update on the NEW NEW Bugle...
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/f96723e0-c107-4e1c-ab22-bdf5fadc4dec/A-Bugle-update.mp3", 25040437 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/28319916 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 26 - VIB – Very Important Bugle
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/WIDLWbWj9ww/
      Description: A very important Bugle
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/1a8eebca-e2b9-4cbf-afab-e90bddbd3eaa/VIB-Very-Important-Bugle.mp3", 17271401 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/26723701 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 27 - Bugle 294 – The Chainsaw of Futuristic Justice
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/QGc95pQo9AM/
      Description: We're back and we left it to buglers to pick the topics - Trump, Brexit, Bacon and Leicester City are top of your list. #Bugle2016
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/aae137a4-4fc7-4971-b40f-e0264bc03fce/Bugle-294-The-Chainsaw-of-Futuristic-Justice.mp3", 75748280 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/25135543 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 28 - Bugle 293 – Slow cook democracy
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/NEqgh8f2ADM/
      Description: Andy and John look at the runners and riders for the US elections and have a look at the chaos at FIFA
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/ad1bbf01-90d3-446f-84e5-f77d938eed16/Bugle-293-Slow-cook-democracy.mp3", 29717138 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/20785470 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 29 - Bugle 292 – A career defining election
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/G79Y4EmKxEA/
      Description: What have you done Britain? What have you done?
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/b40442e9-70b6-4a03-8bd8-d3fe864f5307/Bugle-292-A-career-defining-election.mp3", 23602291 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/20455208 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 30 - Bugle 291- Resistible force versus movable object
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/975-a30bgg0/
      Description: John celebrates being on the same list as Kim Jong Un and Vladimir Putin and The Bugle gives it's take on the British election campaign so far.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/f7364ad0-ab17-4f57-b2db-b9f8cf7b9204/Bugle-291-Resistible-force-versus-movable-object.mp3", 26956995 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/20239676 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 31 - Bugle 290 – Love Letters
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/zWzotTN6WKo/
      Description: It's a letters special, featuring Spain, Iran and worried Buglers.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/24eb90b0-1d30-4c42-9228-2b26a776fce6/Bugle-290-Love-Letters.mp3", 28981069 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/19570329 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 32 - Bugle 289 – Turbo Russia
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/b3sWnQHPkas/
      Description: Russia becomes a parody of itself, says John Oliver and Andy Zaltzman
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/733a3bc8-798f-49c6-b59c-5c54ed30c009/Bugle-289-Turbo-Russia.mp3", 26707792 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/19456714 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 33 - Bugle 288 – Bear Sick
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/emHTheHm7vI/
      Description: Polar Bears are having a bad time. Here's how bad...
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/b904eff0-506d-46b8-86c7-5f51b8e90ce6/Bugle-288-Bear-Sick.mp3", 22788151 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/19338511 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 34 - Bugle 287 – Ecuadoh!
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/BueTw_9x1m4/
      Description: John has the latest on his beef with Ecuador, and a Ukraine update.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/7f7aed7e-daa1-40da-9741-edad896a3384/Bugle-287-Ecuadoh.mp3", 24530219 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/19213396 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 35 - Bugle 286 – Greekonomics
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/F57wbWU2SQw/
      Description: Greece elects a new leader and Europe freaks out.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/7d9d29c6-a6f7-41e1-9a5a-9c693a2c091d/Bugle-286-Greekonomics.mp3", 28857700 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/18868078 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 36 - Bugle 285 – Where’s Bono?
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/liN29jFkzHU/
      Description: World leaders head to Davos, but the big question has to be asked... where's Bono?

You can donate to Michelle's fund here: www.gofundme.com/this-is-michelle
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/193f2a45-663e-403c-bf84-d0a930a427bf/Bugle-285-Wheres-Bono_.mp3", 33108926 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/18761783 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 37 - Bugle 284 – Too Hot For Print
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/sM8tz0FfdE0/
      Description: http://www.gofundme.com/this-is-michelle
Unity March, Oscars, Birmingham, Orthodox censors.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/3e0cf077-e289-4793-9d3b-c10e6d256d9a/Bugle-284-Too-Hot-For-Print.mp3", 59060175 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/18627606 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 38 - Bugle 283 – #JeSuisCharlie
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/Z8zAeGMkgHE/
      Description: A show dedicated to all the people of the world who aren't arseholes. Happy 2015!
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/1fb580eb-ce04-4c84-ada2-f85f8ccdbdad/Bugle-283-JeSuisCharlie.mp3", 29511476 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/18526969 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 39 - Bugle 282 – Twas the Dick before Christmas
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/_b2mliFRem0/
      Description: Finally, Andy and John put the best of the worst against eachother in a battle of international dickery
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/4b42cc24-23e6-4660-bc31-cb84d2daaa96/Bugle-282-Twas-the-Dick-before-Christmas.mp3", 37705604 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/18214605 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 40 - Bugle 281 – One star review
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/IM3YLKBS_jk/
      Description: Andy and John discuss the latest on the CIA and their 'aggressive quizzing'.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/a5d8d86f-a8ee-4405-8ae1-0c097b5d59fa/Bugle-281-One-star-review.mp3", 36516050 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/18122438 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 41 - The Bugle 280 – On the wAI out
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/jgZYVOYmU-8/
      Description: Robots are taking over, and we have an exclusive interview
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/8c48fc6a-9bc3-44b9-98b6-5ff105510887/The-Bugle-280-On-the-wAI-out.mp3", 32422961 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/18023892 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 42 - Bugle 279 – Chills, thrills and Blatter aches
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/YztOacPVPv8/
      Description: It's cold in Buffalo, almost as cold as the hearts of Vlad and Sepp. Plus, dick news and Norwegian Dead Guy day.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/d0793913-07ec-479c-8eb3-9705e7a24730/Bugle-279-Chills-thrills-and-Blatter-aches.mp3", 35058262 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/17802100 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 43 - Bugle 278 – SpaceCats: The Search For Merch
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/_tezCRUasfg/
      Description: Space Exploration! Rihanna! Vintage BBC Recordings! All words that are connected to this podcast in some way.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/4d46fff5-279a-4f4d-bdb2-eb7c272022e7/Bugle-278-SpaceCats_-The-Search-For-Merch.mp3", 92314076 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/17695778 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 44 - Bugle 277 – Wow! Why?
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/AVHiLGtAKjs/
      Description: Andy and John celebrate daredevils of the world. Warning, this show is one of 'those' ones, with the 'moments'.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/1d26b797-e0fe-4f9c-8993-931b33a14ac6/Bugle-277-Wow-Why_.mp3", 29133248 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/17566463 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 45 - Bugle 276 – Calypso bad
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/uZ_pPOck1SY/
      Description: What's happening in Britain? Why are white men singing reggae songs about immigration?
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/3a098085-9d22-4af3-9998-421d02d10aa0/Bugle-276-Calypso-bad.mp3", 29320053 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/17351041 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 46 - Bugle 275 The Ebola Tombola
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/Y1FpPXC4Lrg/
      Description: While Ebola continues to be quite a nuisance, Brazil weighs up the importance of footballers as an election draws nearer and The Bugle leaks some smoking hot media featuring your favourite celebrities recorded au naturale.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/6a0f6768-f4a3-4de5-a5e1-785b73145a62/Bugle-275-The-Ebola-Tombola.mp3", 66299662 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/17153271 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 47 - Bugle 274 – Beard means business
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/onBicx4f_ag/
      Description: The world meets again to discuss the environment, and this time it has beards! Famous people with beards!
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/44ed8456-8653-4362-97ad-a340682df041/Bugle-274-Beard-means-business.mp3", 24974141 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/16933518 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 48 - Bugle 273 – Season 2!
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/J2KjxvXfydw/
      Description: The Bugle is back and not a moment too soon! Scotland, what have you become?
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/64913c36-ac0a-48e4-89ce-e2787a5d9103/Bugle-273-Season-2.mp3", 29698712 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/16831425 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 49 - Bugle 272 – WORLD CUP!
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/_09W3d9dolE/
      Description: The news is: There is no news! WORLD CUP!
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/efe21d7b-4f4c-4803-a028-cbb0e5661720/Bugle-272-WORLD-CUP.mp3", 30502769 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/15409795 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 50 - Bugle 271 – Abdicupdate
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/yeKyQHZ5jPQ/
      Description: Andy and John discuss the unexpected retirements of a batch of royal monarchs, and why THE QUEEN won't be following
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/a9fd9440-a9a8-4b6f-a71b-736f58e7ad74/Bugle-271-Abdicupdate.mp3", 29641492 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/15297915 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 51 - Bugle 270 – Fruitcakes and Loonies
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/H-GSKJql7kU/
      Description: Farage and Le Pen lead the charge to bring Europe back to the good old days, assuming bloody and broken is considered good. Plus, wasp news, and the outcome of the Zaltzman v Oliver Pool Championships
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/88b1860b-a3c0-43fe-a6f3-32317a39a21b/Bugle-270-Fruitcakes-and-Loonies.mp3", 26866340 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/15198910 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 52 - The Bugle – Maychive II
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/IQiE2vOVcNs/
      Description: Some stuff that happened in May, before this May (but since 2007).
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/7e687efd-8807-4989-8484-798ee0f95f2e/The-Bugle-Maychive-II.mp3", 37898227 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/15149435 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 53 - Bugle 269 – Fiddlesticks to Russia
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/0HSqDb91D_s/
      Description: Don't tell Vladimir Putin what you think of him, it could be a £40 fine. Plus, why are Brazilian football fans scared?
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/dd23dae9-b981-429e-a9a1-c34be72f5e4d/Bugle-269-Fiddlesticks-to-Russia.mp3", 24293422 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/14970305 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 54 - Bugle 268 BrokeSadleBack Mountain
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/k44z9pmgN1I/
      Description: There's gold at the bottom of the ocean and a mountain for sale. Let's team up.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/c281ab0f-0ccb-4d0f-a892-d65a8bc507ca/Bugle-268-BrokeSadleBack-Mountain.mp3", 67628802 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/14859519 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 55 - Maychive
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/EhE6QiL-tPY/
      Description: This week in history, according to The Bugle
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/fcabb859-54b6-43ec-9f48-2bdcdb1dcd93/Maychive.mp3", 37057615 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/14783738 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 56 - Bugle 267 Gaining My Religion
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/ynJyLTrIH-U/
      Description: Andy and John talk life expectancy and religion. Perfectly normal when approaching a birthday.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/f60b8ea8-eb9d-4fcb-8ef0-5707d78768a6/Bugle-267-Gaining-My-Religion.mp3", 60938733 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/14535119 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 57 - Bugle 266 – Flip Modi Squad
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/GkZKbI6vghk/
      Description: Andy and John focus on the elections in India, at least someone in the west is. Plus, Baby King news!
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/5ab07697-ed35-4a5d-ae47-295bdfcb85a6/Bugle-266-Flip-Modi-Squad.mp3", 32533760 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/14423029 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 58 - Bugle 265 – Cup ’em and Cough
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/NJgJa6pljII/
      Description: Child presents solution to environmental crisis - cash savings!
Plus, an in depth report to the world's most sensational news story.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/f7cf8e55-6ac8-46a9-9f61-205059cf79d9/Bugle-265-Cup-em-and-Cough.mp3", 38790226 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/14308762 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 59 - Bugle 264 – Making nothing out of something
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/D9ulWZQfMrU/
      Description: Andy and John discuss the global news reaction to some horrific stories
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/6c48fb7f-bef9-45b8-8204-23eed3946c0e/Bugle-264-Making-nothing-out-of-something.mp3", 31125223 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/14189457 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 60 - Bugle 263 – Giant Chicken Coops versus Terror
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/NK7gddu6nCk/
      Description: Former British colony opposes Russian incursion into Crimea, Jacob Zuma perfects his security measures and cricketer penis story explained
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/fa77d962-21ab-4488-bdf0-5c3b0bc1da9a/Bugle-263-Giant-Chicken-Coops-versus-Terror.mp3", 39344878 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/14072540 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 61 - The Bugle – Marchive
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/QAgIio4Imhk/
      Description: A look back at the month of March, including multiple Pope news (it is near Easter afterall), some sex scandals and a bit of Syria
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/3089c9b9-7203-4c0b-958a-cebbc108d466/The-Bugle-Marchive.mp3", 39423543 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/13971862 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 62 - Bugle 262 – Insane in the Ukraine
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/qhuJr5HwWUU/
      Description: Russia marches into Ukraine whilst the west tuts, the pope brings something back from the dead and massive virus discovered in ice.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/0c550fa8-61dd-40f6-9e4a-b81dbcc8cfd1/Bugle-262-Insane-in-the-Ukraine.mp3", 41729111 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/13841744 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 63 - Bugle 261 – Crimea River
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/mOvAJfz2AWQ/
      Description: This week: Ukraine, Penises on walls, Skywhales and movie sequel to Gravity.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/55ca9b49-251c-455e-9d99-891c73c72650/Bugle-261-Crimea-River.mp3", 47150159 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/13726748 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 64 - Bugle 260 – International Love Triangle
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/CVA4XUVwo70/
      Description: Hollande woos another mistress, World Cup winners make better dates and is George Clooney a Nazi?
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/2748accf-9f4f-4ea4-bb88-ba8111664991/Bugle-260-International-Love-Triangle.mp3", 43259746 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/13482778 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 65 - Bugle 259 – Sochi Special
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/2JKc36wF-Sw/
      Description: Andy and John report on the latest from Sochi - where Vlad Putin should be celebrating just how amazingly gay the Olympics are, rather than getting all homophobic. Plus! Massive wooden penis found on car! And pigs faces - too shocking for publication!
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/765c32b4-502b-40fd-9838-29dfcdd6ab24/Bugle-259-Sochi-Special.mp3", 60633931 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/13357476 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 66 - Bonus Bugle – A Twitter Q&amp;A
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/dKjWMmcnNss/
      Description: Andy answers your Twitter questions
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/7c14ce38-9d6a-40a6-b910-026e6fb8d15a/Bonus-Bugle-A-Twitter-QA.mp3", 21241832 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/13250217 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 67 - Bugle 258 – Nazis versus Terrorists
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/NoFTkJJnSgY/
      Description: Andy and John focus on two major meetings in Switzerland and British plans to form a police state. Plus - exclusive interview with Frankel!
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/8a79bd25-9a83-40f1-b8a2-063f62ced4e0/Bugle-258-Nazis-versus-Terrorists.mp3", 57726714 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/13119604 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 68 - Bugle 257 – Dancefloor Diplomacy
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/NVD9Ohh5g1U/
      Description: Andy and John analyse the latest from Thailand, Syria, Sudan and France. Plus: animal news!
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/e1f4831b-dc8d-4fc5-99ec-3ad3a9aa6d05/Bugle-257-Dancefloor-Diplomacy.mp3", 56402568 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/13005779 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 69 - Bugle 256 – Troubled Bridge Over Boiling Water
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/NsYHVCxAYs8/
      Description: John Describes what happens when it gets a bit Parky, Andy Laments England's Ashes performance and Round One of the first inter Bugle championship match up takes place.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/85e179b4-3000-40bb-a4ba-a3c0b16878c6/Bugle-256-Troubled-Bridge-Over-Boiling-Water.mp3", 51584200 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/12903943 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 70 - Bugle 255
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/fg-R8k6QVhU/
      Description: Andy and John learn what the French get up to on New Year's Eve and offer some predictions for the new year. Plus the good ship SS Zaltzman is launched.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/ffd79f0f-b02c-4922-9bfe-c3d5734f55b1/Bugle-255.mp3", 36474730 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/12774906 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 71 - TheBugle review of the year: 2013
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/NEXijZHgnnw/
      Description: Andy Zaltzman introduces a look back at some of the biggest headlines of the last 12 months. May include births, deaths, political misjudgements, and inappropriate behaviour at a funeral (for the 2nd consecutive year).
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/94d2c224-ed8e-4710-bcf2-36845ae3efd5/TheBugle-review-of-the-year_-2013.mp3", 38750190 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/12699321 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 72 - Bugle 254 – Christmas Special!
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/VcC9zRp6_bc/
      Description: The latest from London's Scroogiest councils, Santacon 2013 and how a US president might enjoy Christmas day (or not).
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/a9700333-085c-454a-bf30-19adbf2a045a/Bugle-254-Christmas-Special.mp3", 33273986 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/12577095 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 73 - Bugle 253 – Lenin in a Dress
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/7zJm7az2vyU/
      Description: So what do the worlds leaders make of the wealth gap? It's Boris Johnson v The Pope!

Plus, the police stuff the queen's nuts in their mouths and pigs react to the sale of their seed.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/3edaa08f-af1c-4edc-8415-a93694cd8b15/Bugle-253-Lenin-in-a-Dress.mp3", 37599509 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/12468362 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 74 - Bugle 252 – (Product from) Pigs Might Fly (Off The Shelves)
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/jUEeAfGZ_mo/
      Description: A new challenger arrives for toughest world leader, Britain seeks to be a world leader in a new market, And the Bugle mourns a great man.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/81c1bf6c-2272-4a41-b6d4-495599e5e737/Bugle-252-Product-from-Pigs-Might-Fly-Off-The-Shelves.mp3", 58581560 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/12359379 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 75 - Bonus Bugle – Bugle requests
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/7L9y3Qk176U/
      Description: Andy introduces some Bugle highlights, as requested on Twitter
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/ddc2d381-d835-41f5-8190-c88de1313839/Bonus-Bugle-Bugle-requests.mp3", 29025534 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/12142480 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 76 - Bugle 251 – Nailing the truth to the floor
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/E51GvunuFH8/
      Description: A man in Russia has nailed his testicles to Russia, the British conservative party has hidden the internet, and The Bugle raids BBC Radio 1.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/9741be62-ccd4-40cf-91be-681324738126/Bugle-251-Nailing-the-truth-to-the-floor.mp3", 30721193 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/12029637 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 77 - Bugle 250 – No one is madder than Obama…
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/gunWVAFJO8o/
      Description: ...is about IT glitches with the launch of Obamacare.

Plus why spying would have saved Jesus, Spain plans to jail all of the USA, church wangs and Vatican cricket.

Happy 250 Buglers!
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/a63985ad-b511-4a5d-8df9-3a4d3cb1a0e3/Bugle-250-No-one-is-madder-than-Obama....mp3", 38538335 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/11813345 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 78 - Bugle 249 – America stands that little bit smaller
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/Hh2bo_3uqvo/
      Description: Andy and John provide more evidence for the complete collapse of the USA, discuss the end of Sachin Tendulkar, reveal that Brazil is run by clowns and psychopaths and get some passive aggressive love/abuse in an email
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/41545e26-6557-4b55-b61d-e230026bd77c/Bugle-249-America-stands-that-little-bit-smaller.mp3", 33621429 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/11514956 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 79 - Bugle 248 – Anarchy in the USA
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/Eb6-rEv2b64/
      Description: Andy and John have the latest on the collapse of civilisation in the US, as well as corruption updates from India and Italy
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/fc40c6d9-3cfa-41fc-9123-e8acce16dbcf/Bugle-248-Anarchy-in-the-USA.mp3", 43354121 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/11382235 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 80 - Bugle 247 – Mind The Gap!
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/ZPyDhqb77gk/
      Description: Andy and John look at the disparity in wealth in the US, report from the Op-Ed wars, and are joined by a comfortably racist blast from the past
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/d9e749fd-9dad-402d-9d86-4076a1a43e23/Bugle-247-Mind-The-Gap.mp3", 53311805 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/11182342 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 81 - Bugle 246 – Selling The Drama (And War and Guns And The Planet)
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/HBkzemd9wA8/
      Description: Bugle 246 - Selling The Drama (And War and Guns And The Planet) by The Bugle
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/b056a8a6-a1b6-4596-b238-a0575db51819/Bugle-246-Selling-The-Drama-And-War-and-Guns-And-The-Planet.mp3", 62752627 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/11027547 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 82 - Bugle 245 – Syria, too complicated for 5 year olds
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/AWC5MzgCSa4/
      Description: Cheney, Pelosi and Kerry throw their opinions around on Syria, whilst the UK parliament withdraws from public like into a world of internet porn. Plus, Andy learns what 'twerking' is.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/5f04718a-5426-4ed4-8d78-86cb3ac85070/Bugle-245-Syria-too-complicated-for-5-year-olds.mp3", 37487406 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/10915949 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 83 - Bugle Elbug Snug in a Rug, Doug
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/JInw9FAHbTs/
      Description: This is not a Bugle. Part 2.01
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/0c76ca87-95ef-437e-94a9-4531e3dbfe6d/Bugle-Elbug-Snug-in-a-Rug-Doug.mp3", 2581829 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/10800303 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 84 - Bugle 244 – Russian into battle
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/1kB1XPhYESE/
      Description: The Cold War is back - and this time it's colder. Deadly weapons are being used - like banning Pride marches, and the relentless use of puns. We live in dangerous times.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/5105d053-22fa-4d96-9799-d007d56e7143/Bugle-244-Russian-into-battle.mp3", 30743713 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/10471498 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 85 - Bugle 243 – The gifts that keep giving
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/cqAk9dIKdbY/
      Description: Robert Mugabe is going nowhere without a struggle, especially when he still gets 103% of the vote. Plus, Silvio Berlusconi is back in the news! Thanks Silvio!
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/32f3c14b-f717-4bc2-9776-0446ff645861/Bugle-243-The-gifts-that-keep-giving.mp3", 31977868 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/10373015 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 86 - Bugle 242 – Woman gives birth!
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/kS6krKNhjKM/
      Description: In an incredible story, a woman has had a child. In other news, a man has published his penis online and the coin of truth is proved right once again
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/59b2d943-d660-4ed7-a5e5-fc2b294ea8a4/Bugle-242-Woman-gives-birth.mp3", 28945631 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/10269617 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 87 - Bugle 241 – Motown breaks down
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/DOHlk_TBXT4/
      Description: It's hot, Motown becomes no town and JK's growling
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/3c1d604c-b5fa-45ee-bd77-4d353c28a3c7/Bugle-241-Motown-breaks-down.mp3", 35794253 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/10175132 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 88 - Bonus Bugle – The Story of Wills and Kate
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/n8Mor3Vhnhw/
      Description: Soon to be a new entry at #3 in the British boss charts, it's a royal baby! In eager anticipation we deliver the story of Wills, Kate and the baby.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/eab621be-b340-4b8a-8819-25c581942bcb/Bonus-Bugle-The-Story-of-Wills-and-Kate.mp3", 37589036 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/10140173 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 89 - Bugle Bulge Beluga Legume Bleurgh!
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/touMaYAjbXs/
      Description: This is not a Bugle. This is many Bugles.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/912a7b0d-ed89-40c6-aa04-56c230e34aaa/Bugle-Bulge-Beluga-Legume-Bleurgh.mp3", 2979333 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/10078996 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 90 - Bonus Bugle – Jet Skis, lawyers and donations
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/WSVrgJ4luJo/
      Description: Some never heard before clips of The American, the legal aid row and donation queries from Buglers
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/e1686acd-9391-433c-8cf1-6740df62bdf0/Bonus-Bugle-Jet-Skis-lawyers-and-donations.mp3", 17485154 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/99813600 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 91 - Bugle 240 – Political Gooaaalllsss!!
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/79s8YI1csfc/
      Description: Brazilian protesters find the top corner, Andy launches a new competition and The American returns.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/7bfc3e02-4961-4f9d-93bb-75aef52b6aa0/Bugle-240-Political-Gooaaalllsss.mp3", 36162908 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/98864929 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 92 - Bugle 239 – Goodness Gracious G8 Balls Of Tennis
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/nIlKysu_kE0/
      Description: A Summer On Murray Mound Beckons and the G8 Summit is the perfect opportunity to sample delicacies not normally found on one's plate.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/92707286-1275-4da7-94ad-1245ff84490b/Bugle-239-Goodness-Gracious-G8-Balls-Of-Tennis.mp3", 57370414 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/97894088 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 93 - Bugle 238 – Inprismed
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/57l_11ivL9Q/
      Description: Andy and John look through the prism and toss the coin of truth. Is Andy a witch? Is John enjoying the Daily Show hot seat?
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/1398d18a-c85c-4daf-aa99-4e3249c59f15/Bugle-238-Inprismed.mp3", 48822042 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/96909137 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 94 - Bugle 237 – Istanbul’s hit
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/yrsbTx1obds/
      Description: Half way through the year and what countries are performing? Plus, what happens when world leaders get hammered together?
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/1683a121-8006-40ca-83b2-971033106203/Bugle-237-Istanbuls-hit.mp3", 51582034 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/95902504 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 95 - Bugle 236 – Tennis racquet marries guinea pig
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/-GvDhk8QMGU/
      Description: Society set to force appliances and pets to marry. Plus, food news - get a sick bag.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/87e7f4fc-9776-4241-b152-b7a12801e01b/Bugle-236-Tennis-racquet-marries-guinea-pig.mp3", 63242576 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/93710463 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 96 - Bugle 235 – The long arm of the lorry
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/Gei1ZD-24QU/
      Description: What crazy democracy would put it's legal aid system in the hands of a haulage firm? What crazy democracy would elect a twice removed crook? Find the answers in this weeks Bugle!
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/b79511df-9b0a-4d24-a6dc-00f9157bb567/Bugle-235-The-long-arm-of-the-lorry.mp3", 40799407 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/92656152 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 97 - Bugle 234 – Nuns, guns and nutters
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/R_AY-gLnmx0/
      Description: Who the hell are UKIP and what do they want? Is making guns an act of libertarianism and why nuns and nuclear don't mix
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/4e44ff36-1f91-442d-a141-62554b58e080/Bugle-234-Nuns-guns-and-nutters.mp3", 70602816 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/91595525 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 98 - Bugle 233 – Baby got hack
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/FFNvNrBc4sU/
      Description: Hacking, Afghanistan and Andy introduces his lobsters
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/aafac160-6dbb-4a2e-8112-53d1cab11a18/Bugle-233-Baby-got-hack.mp3", 35544381 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/90620964 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 99 - Bugle 232 – Mars, Merchandise and Mad Men!
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/zUpTn59iuyQ/
      Description: Andy and John, and about a million Buglers have noticed that there is a penis on Mars. Get your telescopes out. In other news, MERCH IS LIVE(!), and Chechnya's leader is a Hilary Swanker.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/efbe56f0-addf-408a-af99-11e2fa459187/Bugle-232-Mars-Merchandise-and-Mad-Men.mp3", 36388899 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/89621342 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 100 - Bugle 231 – The Queen should play poker
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/9JZTFrX1hYk/
      Description: Andy and John mark the passing of Margaret Thatcher, discuss their Aussie race-hate controversy and try to make sense of the gun laws fudge. Plus - who will love longer, Andy or John? The answer is revealed this week.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/2bace81c-ed41-493b-a7e8-c3f2d67a2ab3/Bugle-231-The-Queen-should-play-poker.mp3", 37127258 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/88597454 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 101 - The Bugle – The Baroness bows out
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/ZkITHamJHQ4/
      Description: What's an appropriate way to give Margaret Thatcher a send off?

Not like this.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/ebb6c246-8884-44cd-9d21-68ada22e43ea/The-Bugle-The-Baroness-bows-out.mp3", 34266185 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/87883159 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 102 - Bugle Q&amp;A – Andy Zaltor Zaltzman
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/zX6S261ZS3o/
      Description: Andy Zaltzman answers your questions, with help from Producer Chris
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/b3bd2551-bd3a-48f8-b7d2-e52ac91c35ad/Bugle-QA-Andy-Zaltor-Zaltzman.mp3", 16975641 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/86527383 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 103 - The Bugle – The worst bits of 2013 (so far)
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/vfoDLxIbVVM/
      Description: Some amazing as-yet-unheard clips from recent recordings of The Bugle.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/5fa29031-05eb-4aa6-8df3-28e1d4d26c8a/The-Bugle-The-worst-bits-of-2013-so-far.mp3", 19005250 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/85458378 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 104 - Bugle 229 – Cyprus ready to go Mad Max
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/B09HjuXoJjs/
      Description: The latest from Cyprus, where Chris's parents have the economy in their hands, budget news from the UK and Barack Obama goes on holiday
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/6ea6db2e-32dd-4fc9-90ce-e9c15e032a1e/Bugle-229-Cyprus-ready-to-go-Mad-Max.mp3", 38626344 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/84450652 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 105 - Bugle 228 – Rome’s most eligible bachelor
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/saxhw0R5zqU/
      Description: We have a new pope and he is 76 years young! Andy and John welcome him. Plus, amazing phone news and dog TV
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/5bee4d82-37fb-4ba9-8591-f6fac19747e6/Bugle-228-Romes-most-eligible-bachelor.mp3", 37554629 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/83410414 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 106 - Bugle 227 – Farewell Bush’s Muse
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/b6czW_-Z2Ow/
      Description: Andy and John mark the passing of Hugo Chavez, look into the baffling Italian elections and discuss what John needs to do when he hosts the Daily Show
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/5e799a10-dfd7-460d-8d47-be9e188be783/Bugle-227-Farewell-Bushs-Muse.mp3", 39122811 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/82376141 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 107 - Bugle 226 – Salvo For Mali
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/m7UGImzJ67Q/
      Description: The world acts late on Mali. So does The Bugle. Also, the latest Pope and Mars news. Plus, the Harlem Globetrotters put their lives in their own hands
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/378a3ba6-397e-484c-af43-c64b50f9876d/Bugle-226-Salvo-For-Mali.mp3", 41263753 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/81372342 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 108 - Bugle 225 – Waffles are forever
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/qNsaV9q2OsY/
      Description: Andy and John provide a crime update and reveal a few unexpected law changes.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/c8467f27-1c9f-4fb7-8697-89356a61845a/Bugle-225-Waffles-are-forever.mp3", 40148585 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/80380005 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 109 - Bugle 224 – Papal Proton Packs
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/RFIBBNs37fk/
      Description: Don't fire, he's not dead! Plus it's year of the snake, Iranian monkeys duped into space and the Iron Sheik cuts loose.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/60bdfce2-d980-4e9b-8048-49df2a3237cc/Bugle-224-Papal-Proton-Packs.mp3", 42059085 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/79403211 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 110 - Bugle 223 – Invasion of the Asylugrants
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/KbrxCCVseSk/
      Description: Andy and John provide the latest immigration news from each side of the Atlantic, present some car park news and get an email about cats.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/a7f4bced-f25c-4f06-a50d-6004f7b678be/Bugle-223-Invasion-of-the-Asylugrants.mp3", 40840328 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/78410784 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 111 - Bugle 222 – Halfrica
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/eVZJn7WxxUM/
      Description: Andy and John provide a special update on Africa. A Mali section is not included for technical reasons, but we assure you it was above average in quality.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/e7bae5bc-9b7e-4424-99d4-98d9906b7dec/Bugle-222-Halfrica.mp3", 28773844 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/77717162 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 112 - Bugle 221 – Do EU really love Us?
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/M5z6xebkzM4/
      Description: Britain throws another strop with on/off life partner, the EU. Plus - A new/old president, news about lies and a Superbowl preview. Sort of.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/a94abd22-bd25-4b6f-adf4-e00426139997/Bugle-221-Do-EU-really-love-Us_.mp3", 39329283 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/76447349 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 113 - Bugle 220 – The Cheat Hits The Fan
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/VEprSHlUDhY/
      Description: The latest on Lance Armstrong, fake footballers wives, gun control and the contents of your burgers
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/16a2df59-af40-4c68-b129-33e96a3c8d6b/Bugle-220-The-Cheat-Hits-The-Fan.mp3", 33575657 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/75688125 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 114 - Bugle 219 – 5th versus 1st
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/vVUSs9E5mNI/
      Description: The US and UK governments are half way through their runs, North Korea is totally mental, Apple reveal latest product and Andy, John and Chris are lusted after. Oh Yeah!
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/3f300312-14c1-4caf-9e04-ceaabace265b/Bugle-219-5th-versus-1st.mp3", 39135768 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/74548461 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 115 - Bugle 218 – Cliff Diving
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/DczC8aJu8s8/
      Description: In the 1st Bugle of 2013 the US going cliff diving, the Germans get angry, Mohamed Morsi gets dissed and 'Old Crownhead' gives her annual speech.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/24748353-4ffd-4385-b297-a010c418acbf/Bugle-218-Cliff-Diving.mp3", 39598564 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/73632997 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 116 - The Bugle – The Complete 2012 – Part 2
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/ORQTnKJEorQ/
      Description: The 2nd installment of our highlights of 2012. What a year! GOLD FOR 2012!
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/acf9a886-b330-44b3-855b-dae945b7ba5e/The-Bugle-The-Complete-2012-Part-2.mp3", 36424943 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/72935824 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 117 - The Bugle – The complete 2012 – Part 1
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/SFbiaxqRRqY/
      Description: The Bugle celebrates the 1st half of 2012, and reveals the new logo.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/2151b293-fa5e-430e-aadc-b78fac084e94/The-Bugle-The-complete-2012-Part-1.mp3", 43200143 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/72090684 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 118 - Bugle 217 – Silvio’s Christmas Gift
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/Y5o6qBkHkuk/
      Description: In the final full Bugle of 2012 The Pope joins Twitter, census reveals extent of Islamic invasion, Silvio returns and Andy teaches India how to fight.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/11f6f357-52ee-44de-9ea5-0da9451ea92f/Bugle-217-Silvios-Christmas-Gift.mp3", 42488874 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/71246857 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 119 - Bugle 216 – We’re having a baby!
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/dMcV0Rj2vqs/
      Description: Nothing else matters in the world as "We're Having A Baby!"

Kate of the Royals and that William are not the only ones expectant as the planet gets a massive case of baby brain.

This Bugle was created in five different time zones, spanning 13.5 Earth hours as John records amongst the stars in Los Angeles and Andy chows down on some choice bovine cuts in Calcutta.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/7a0dd931-a3bf-42f7-acf2-5e2dbae7f070/Bugle-216-Were-having-a-baby.mp3", 31297651 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/70378774 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 120 - Bugle 215 – Let’s Nuke The Moon!
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/dhIsd0aaf60/
      Description: Andy and John explore the American plans to blow up the moon, continued trouble in the middle east, a crime free NYC and they meet THE Indian.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/2e09cee5-4895-48a7-99be-709ce174a2fa/Bugle-215-Lets-Nuke-The-Moon.mp3", 37948466 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/69478204 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 121 - The Bugle – The Producer Chris Podcast
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/zhQZKTMzC-8/
      Description: An audio hurricane for a visual world. Bugle outtakes, Bugler interviews, triathlon and a bit of Producer Ped. And a puppy.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/74df4d79-97e0-49a6-a193-6933e7183961/The-Bugle-The-Producer-Chris-Podcast.mp3", 25664763 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/68552082 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 122 - Bugle 214 – A Few Bad Men
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/vkV9QyEMgpI/
      Description: CTFD and GTFU Buglers! News from scandals in the US and the UK as well as secession news from Austin Texas
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/c515618a-81f3-44a6-b18d-a5b2b0c9448f/Bugle-214-A-Few-Bad-Men.mp3", 39386204 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/67679692 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 123 - Bugle 213 – Free At Last!
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/TE3KQZi5ZoU/
      Description: Massive coffee news, T shirt cannons, and some election news.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/88420b13-da9c-40a1-8480-7f2b301f51ce/Bugle-213-Free-At-Last.mp3", 42599633 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/66789819 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 124 - Bugle 212 – Wind of change
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/0NN3ZKHjNOU/
      Description: New York takes Chicago's title, Berlusconi is a crook, and (finally) a daredevil feature.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/86de52da-1153-4530-bc8d-269d2c11419d/Bugle-212-Wind-of-change.mp3", 43950895 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/65870887 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 125 - Bugle 211 – Electoral Labour
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/TYNTKBNnyiI/
      Description: Election news from the USA, not dead news from Brazil, economy news from Britain and commodity news from Jay Z and Beyonce.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/53b461aa-61b0-42d8-b941-4a2aa5fa7f80/Bugle-211-Electoral-Labour.mp3", 37818275 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/64903067 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 126 - Bugle 210 – Punch up for President!
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/FZOjLvzCUW4/
      Description: The battle to be US president descends to one level above/below boxing match. In other news, Scotland slides away, war crimes news and Bugler attempts to beat Chris to title of The Bugle's worst distance runner.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/69a6fe7a-4483-4156-ab66-a5d64f7a12c4/Bugle-210-Punch-up-for-President.mp3", 41236250 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/64051770 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 127 - Bugle 209 – 5th Birthday Edition
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/XaLFasrupKA/
      Description: Happy Bugle birthday everybody! To celebrate we present a Brass Balls special...
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/c16cd117-5f76-420d-9cbd-0e3b3daede5b/Bugle-209-5th-Birthday-Edition.mp3", 36265083 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/63425799 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 128 - Bugle 208 – A Kama Sutra approach to the truth
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/Ktfwj4t_2Xs/
      Description: Romney v Obama. Oh dear. Plus, snakes - the paracetamol of the animal world!
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/26f1c5ec-ba5e-4729-a6e2-83e4f5e0b183/Bugle-208-A-Kama-Sutra-approach-to-the-truth.mp3", 36051048 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/62369989 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 129 - Bugle 207 – UN-believable
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/4GNZtAlDDJU/
      Description: Andy and John have the latest from the leaders pow wow at the UN, preview the Anglican elections (really) and reveal your best suggestions for a name for a fake horse
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/8e36f9bc-c1cc-4832-8865-52915f598a31/Bugle-207-UN-believable.mp3", 41094562 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/61513252 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 130 - Bugle 206 – The President is not a gremlin
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/GMAcFYdxBUg/
      Description: Andy and John provide the latest from Democrapalooza, offer the latest smart phone reviews, reveal what a vicar should never sing at a funeral, place lies into categories and discuss the latest waparazzi news
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/8021999b-c86c-4997-b06e-1d35f47f04f6/Bugle-206-The-President-is-not-a-gremlin.mp3", 41764968 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/60685381 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 131 - Bugle 205 – The Trojan Horse
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/OY_2ywMUE1g/
      Description: Andy and John recover from the Olympics by diving into the US elections. Apparently they happen later this year
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/3ed923ac-1ce6-452c-b5b6-4c64353fdc1b/Bugle-205-The-Trojan-Horse.mp3", 39331192 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/56676235 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 132 - Bugle 204 – What the Feck
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/jpmF-uPic8s/
      Description: Andy and John prepare for life post Olympics, paying tribute to the greatest diver of all time. In other news, Madonna starts a Pussy Riot
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/a95a6d27-3cf2-4b78-85a1-06e531937464/Bugle-204-What-the-Feck.mp3", 36529484 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/55889865 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 133 - Bugle 203 – No medals for Syria
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/uAyOLzvX72s/
      Description: This Bugle sounds like what a Bugle would sound like if Andy and John had spent the last watching the Olympics and nothing less.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/30f99a1d-2ca9-43d6-bc71-b8e5f058396e/Bugle-203-No-medals-for-Syria.mp3", 62578617 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/55103662 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 134 - Bugle 202 – Sport!
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/j9wxkRlnK2Y/
      Description: It's London! It's 2012! That means one thing - SPORT! Oh, and more on the Romneyshambles and North Korea
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/16fea358-c5f5-49b2-abed-7d1b90cbe14e/Bugle-202-Sport.mp3", 40682888 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/54320701 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 135 - Bugle 201 – Dirty bankers
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/neUd9-PtNHA/
      Description: Bankers are bad, mermaids don't exist and the Olympics are near.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/be80c417-5618-4ac6-a15c-7a134f0f8c32/Bugle-201-Dirty-bankers.mp3", 38401233 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/53552729 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 136 - Bugle 200 – The horn dog returneth!
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/OOgCTd5ydf4/
      Description: The Bugle celebrates it's 200th edition with the return of two old favourites. Also in the news, evil bankers are making us learn boring things, and Kim Jong Un reveals his virility. Plus, should we fire missiles at the rain?
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/cb3fb028-746c-470b-be6f-584ce33687e1/Bugle-200-The-horn-dog-returneth.mp3", 46049020 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/52753907 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 137 - The Bugle – Andy Zaltzman Speaks
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/PpYqHLE9724/
      Description: With the 200th Bugle just a week away, Andy Zaltzman takes his turn to take listener questions. Producer Chris asks the questions, excellently.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/08d84e6a-94ff-4818-bb45-9be9ea6dc25f/The-Bugle-Andy-Zaltzman-Speaks.mp3", 14526099 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/51987759 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 138 - The Bugle – John Oliver Speaks
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/v6SvQ8VRxNQ/
      Description: As The Bugle prepares to celebrate a fine double century, producer Chris puts some listener questions to John
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/b2570f41-0eae-4b74-84a1-9cd78fd73620/The-Bugle-John-Oliver-Speaks.mp3", 17106605 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/51258124 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 139 - Bugle 199 – This is an ex-president!
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/ntwZVo5fEvM/
      Description: Andy and John bring the latest from Egypt where democracy and the health of it's former leader are teetering on the edge. In other news, wealthy Brits are treating tax as a voluntary act of philanthropy, a Syrian has big brass balls and the US gets in knots over knitting
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/3d8cabc2-cbd6-49c8-ad01-0db76fc8445a/Bugle-199-This-is-an-ex-president.mp3", 43631105 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/50543290 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 140 - Bugle 198 – Warm up and melt down
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/ro2FJX-ql3I/
      Description: The world prepares for another half-arsed attempt to save itself, sheep are unleased on London 2012, Elvis is alive, and Andy gives the most complete analysis of the Eurozone crisis yet,
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/80990d00-6ffc-409a-bad0-3ac2e7e076f2/Bugle-198-Warm-up-and-melt-down.mp3", 36972179 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/49789720 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 141 - Bugle 197 – Singing in the Reign
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/RE_w7nAVkAo/
      Description: A reviewbilee of the Queen's festivities. Plus, in other news; killer terrorist furniture causes chaos and Euro 2012 begins to a chorus of jeers and pessimism.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/814948c7-3f80-4e8b-8e38-fd1d83703373/Bugle-197-Singing-in-the-Reign.mp3", 37393064 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/49072365 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 142 - Bugle 196 – Jubilee Special
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/8s9cONiiZFE/
      Description: The Bugle celebrates 60 years of the Q-Unit. In other news, Obama's kill list, the UN is unimpressed with Syria and doctoring the pension contributions.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/bfd344ce-58dc-4cdd-8e83-3071c2d622da/Bugle-196-Jubilee-Special.mp3", 39144313 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/48319391 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 143 - Bugle 195 – A drop of Reagan’s Blood
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/8PxS4qsEyJA/
      Description: The latest news from the Egyptian elections, hosting it's 1st democratic election in 7000 years, and from London 2012, where there are many missiles on buildings.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/4e5d27da-fb29-4cc6-94b9-1e08c7df6c4e/Bugle-195-A-drop-of-Reagans-Blood.mp3", 36332197 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/47562754 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 144 - The Bugle – 194a – Too Good For Context
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/W4aifY0K7vM/
      Description: Some amazing clips from recent shows, in the wrong order
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/8c97c25a-f96d-4ed4-9e64-e886f7cd9904/The-Bugle-194a-Too-Good-For-Context.mp3", 26049652 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/46582256 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 145 - Bugle 194 – Global Election Round Up
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/ztCC7Mgfm0s/
      Description: So what's been happening at the ballot box in Mexico, Russia, Greece and France? The Bugle investigates. Plus, Obama shows Cameron how to inspire.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/870c7ca9-8916-40bb-b83f-f3940da74461/Bugle-194-Global-Election-Round-Up.mp3", 44716308 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/46127395 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 146 - Bugle 193 – Happy Deathiversary!
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/8JlrTEoPgiQ/
      Description: Osama Bin Laden's death commemoration special! Plus Gingrich promises holograms and 32% of the people of Britain have spoken.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/2c4035a7-e2ad-4506-a6bd-b815be9452dc/Bugle-193-Happy-Deathiversary.mp3", 35447760 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/45327588 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 147 - Bugle 192 – Uncle Rupert is the real victim
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/BnA4wZFTXWI/
      Description: Kindly Uncle Rupert meets Lord Leveson, France goes to the polls, Newt makes a statement and Israel and Palestine become penpals.

And this is how a Bugler cooks...http://thebuglepodcast.com/?p=317
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/6b8e6ae6-cdd2-4627-94a0-a6a394ecc575/Bugle-192-Uncle-Rupert-is-the-real-victim.mp3", 39915448 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/44570260 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 148 - Bugle 191 – A secret servicing
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/zg6UN15sIP8/
      Description: Sex scandal special! Plus, penguin eats newt, town proposes shocking name change and producer Chris is set to win the London Mararthon. Support him here: http://uk.virginmoneygiving.com/HackneyEmpire
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/191c7247-1a14-4c98-be46-66f6237cdf58/Bugle-191-A-secret-servicing.mp3", 39744503 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/43808745 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 149 - Bugle 190 – Santorum splashes out
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/MySFvr2te9M/
      Description: The Republican race to win the right to lose hots up. Plus a Titanic celebration and rowing about rowing. http://thebuglepodcast.com/
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/f9cff0d2-4f2f-48a4-b0fb-7edb33b52ad1/Bugle-190-Santorum-splashes-out.mp3", 41220568 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/43031326 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 150 - Bugle 189 – ‘Like eating Bill Cosby’
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/mvgeBpoUda8/
      Description: Andy and John finally deliver an Antarctic special, plus Chinese art news, and a new season in the US version of Rounders. Recorded in a special location.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/62772298-199e-4f0e-b817-f91fb917332c/Bugle-189-Like-eating-Bill-Cosby.mp3", 42576044 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/42274394 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 151 - Bugle 188 – Gentlemen, start your engines!
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/idjkiYcSD-s/
      Description: It's panic stations at the fuel pumps, as the public waste money that could be more wisely invested in a meal with the Prime Minister or funding a Republican candidate campaign. Failing that, a tepid working class pasty.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/f21b8d68-4a84-48c0-9d37-8d9dd359158f/Bugle-188-Gentlemen-start-your-engines.mp3", 34571444 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/41497650 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 152 - The Bugle Q&amp;A, vol 1
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/vBbB8Ocj2gE/
      Description: A listener generated Q&A. If it's bad, it's your fault http://thebuglepodcast.com/
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/faf2e47e-a7f0-4b74-9f05-dda9d0e27ad0/The-Bugle-QA-vol-1.mp3", 19629619 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/40729581 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 153 - Bugle 187 – The President’s Playlist
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/xSYQrMVgPJs/
      Description: Assad's account gets hacked, anonymous Brit visits the US and ugly dog dies. Visit http://thebuglepodcast.com/
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/81a42792-87ac-417f-a031-b5fcdead67bc/Bugle-187-The-Presidents-Playlist.mp3", 41236019 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/39986878 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 154 - Bugle 186 – An Insult to Civic Society
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/g_XxCMj_FLk/
      Description: Together in New York! Andy and John round up the latest global election news and take an unorthodox mathematics test. http://thebuglepodcast.com/
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/83883d90-600d-4f51-8f8a-67a99e0e11e2/Bugle-186-An-Insult-to-Civic-Society.mp3", 41728555 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/39259321 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 155 - Bugle 185 – Burning Rings Of Steel
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/ZZR6KzlEbVc/
      Description: How is London getting on with the Olympics? How wet is Angela Merkel? What have News International been up to? http://thebuglepodcast.com/
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/95882c22-1927-4f47-a2a5-34407db7b518/Bugle-185-Burning-Rings-Of-Steel.mp3", 38823537 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/38496207 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 156 - Bugle 184 – Wangderlust
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/mwy3gLDrtKg/
      Description: Following the Lady Special, now The Bugle presents a Man Special. Except the latest hot news on the 'Y' chromosome, and other droobler based stories.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/0a9bc1d6-74f2-4d72-a4ab-6e8ce0fa3a30/Bugle-184-Wangderlust.mp3", 34585632 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/37723693 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 157 - Bugle 183 – Bugle Lady Special
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/j0SUySLUpoA/
      Description: It's been a bad week if you are of the opposite gender to Andy and John, so The Bugle shows some sisterly solidarity.

May contain mentions of the Taleban, and Rick Santorum
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/e89cf527-aba7-4faf-8204-0e8f48150326/Bugle-183-Bugle-Lady-Special.mp3", 38892702 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/36988351 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 158 - Bugle 182 – Stockpiling Humanity
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/loQO3R5XBJ0/
      Description: Maldiviacs revolt, Capello quits, Syria sinks, and Dickens dives.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/9017f0c7-6e84-49ba-ba0a-59190101fc37/Bugle-182-Stockpiling-Humanity.mp3", 37496162 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/36226670 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 159 - Bugle 181 – A Knight’s Fail
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/v5rtEHQq0Ak/
      Description: Syria slips further, Mitt the Mighty, and Sir Fred is dead. Well, not dead, just Fred.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/37aae521-2cab-422c-aa62-401ae81493ad/Bugle-181-A-Knights-Fail.mp3", 35491541 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/35476039 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 160 - Bugle 180 – The truth about lies
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/fLIuV0bYFgA/
      Description: Lies, damn lies and cricket statistics. Plus, a round up of presidential news, what's driving Canada over the edge, and the battle for Saddam's butt cheek.
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/6bd97b6b-b3c8-4709-827a-056df4be06a7/Bugle-180-The-truth-about-lies.mp3", 42126000 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/34759678 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 161 - Bugle 179 – Playas gon play
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/dNYXEtx4UTw/
      Description: This week - oh PIPA, Republican't candidates and Craptain Italia. Remember to #savethebugle at http://www.thebuglepodcast.com
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/a37e2c6b-a6d6-4a3c-bfaf-1a5f9cbcb72c/Bugle-179-Playas-gon-play.mp3", 42266672 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/34019569 (Not Permalink!)
      Categories:
      *  Podcast
    --
    Item 162 - Hello Buglers!
      Link: http://feedproxy.google.com/~r/thebuglefeed/~3/RMNCiVB1Ppw/
      Description: Hello Buglers, if this has turned up in your iTunes folder or similar device for downloading then it means the changeover has worked...
      Enclosure: "https://www.podtrac.com/pts/redirect.mp3/media.blubrry.com/the_bugle/dovetail.prxu.org/thebugle/27a95ada-feb3-4ef3-9d4c-6ac9de330923/Hello-Buglers.mp3", 5364728 Bytes, "audio/mpeg"
      GUID: tag:soundcloud,2010:tracks/33658533 (Not Permalink!)
      Categories:
      *  Podcast
    --

```
