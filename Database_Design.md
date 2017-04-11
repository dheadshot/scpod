# scPOD Database Design

## Table: Channel

Field Name | Data Type | Allow Null | Key | Default Value | Constraints | Notes
---------- | --------- | ---------- | --- | ------------- | ----------- | -----
Channel_ID | INTEGER   | NO         | Primary | NULL    | AUTOINCREMENT | Reference ID
Channel_URL | TEXT     | NO         | NO  | NULL          | UNIQUE      | URL of RSS Feed
Title      | TEXT      | NO         | NO  | NULL          |             | Channel Title from RSS
Link       | TEXT      | YES        | NO  | NULL          |             | Channel Link from RSS
Description | TEXT     | YES        | NO  | NULL          |             | Channel Description from RSS
Language_Major | TEXT  | YES        | NO  | NULL          |             | Channel Language (before '-') from RSS
Language_Minor | TEXT  | YES        | NO  | NULL          |             | Channel Language (after '-') from RSS
Copyright  | TEXT      | YES        | NO  | NULL          |             | Channel Copyright from RSS
Managing_Editor | TEXT | YES        | NO  | NULL          |             | Email address of the Managing Editor of the RSS Feed
Webmaster  | TEXT      | YES        | NO  | NULL          |             | Email address of the webmaster of the RSS Feed
Publication_Date | TEXT | YES       | NO  | NULL          |             | ISO-8601 Date of Publication of RSS Feed
Last_Build_Date | TEXT | YES        | NO  | NULL          |             | ISO-8601 Date of last update of RSS feed
Generator  | TEXT      | YES        | NO  | NULL          |             | Program that generated the RSS feed
Documentation | TEXT   | YES        | NO  | NULL          |             | Documentation of RSS Feed
RSS_Version | TEXT     | YES        | NO  | NULL          |             | RSS Version Information
TTL        | INTEGER   | YES        | NO  | NULL          |             | RSS Feed Time To Live in minutes
Image_URL  | TEXT      | YES        | NO  | NULL          |             | Channel Image URL from RSS
Image_Title | TEXT     | YES        | NO  | NULL          |             | Channel Image Title from RSS
Image_Link | TEXT      | YES        | NO  | NULL          |             | Channel Image Link from RSS
Image_Description | TEXT | YES      | NO  | NULL          |             | Channel Image Description from RSS
Image_Width | INTEGER  | YES        | NO  | NULL          |             | Channel Image Width from RSS
Image_Height | INTEGER | YES        | NO  | NULL          |             | Channel Image Height from RSS
Last_Refresh_Date | TEXT | NO       | NO  | NULL          |             | Last time the feed was refreshed from the URL
Directory  | TEXT      | NO         | NO  | ''            |             | Name of the directory in which the downloaded items will be stored.


## Table: Channel_Category

Field Name | Data Type | Allow Null | Key | Default Value | Constraints | Notes
---------- | --------- | ---------- | --- | ------------- | ----------- | -----
CCID       | INTEGER   | NO         | PRIMARY | NULL    | AUTOINCREMENT | Reference ID
Channel_ID | INTEGER   | NO         | FOREIGN | 0         |             | Links to Channel_ID in Channel table
Category   | TEXT      | NO         | NO  | ''            |             | Category Name
Domain     | TEXT      | YES        | NO  | NULL          |             | Category Domain


## Table: Channel_Skip_Day

Field Name | Data Type | Allow Null | Key | Default Value | Constraints | Notes
---------- | --------- | ---------- | --- | ------------- | ----------- | -----
CSDID      | INTEGER   | NO         | PRIMARY | NULL    | AUTOINCREMENT | Reference ID
Channel_ID | INTEGER   | NO         | FOREIGN | 0         |             | Links to Channel_ID in Channel table
Day_Name   | TEXT      | NO         | NO  | 'Sunday'      |             | Weekday Name (Sunday-Saturday)
Day_Number | INTEGER   | NO         | NO  | 0             |             | Weekday Number (0-6)


## Table: Channel_Skip_Hour

Field Name | Data Type | Allow Null | Key | Default Value | Constraints | Notes
---------- | --------- | ---------- | --- | ------------- | ----------- | -----
CSHID      | INTEGER   | NO         | PRIMARY | NULL    | AUTOINCREMENT | Reference ID
Channel_ID | INTEGER   | NO         | FOREIGN | 0         |             | Links to Channel_ID in Channel table
Hour       | INTEGER   | NO         | NO  | 0             |             | Hour Number in GMT (0-23)


## Table: Item

Field Name | Data Type | Allow Null | Key | Default Value | Constraints | Notes
---------- | --------- | ---------- | --- | ------------- | ----------- | -----
Item_ID    | INTEGER   | NO         | PRIMARY | NULL    | AUTOINCREMENT | Reference ID
Channel_ID | INTEGER   | NO         | FOREIGN | 0         |             | Links to Channel_ID in Channel table
Title      | TEXT      | NO         | NO  | NULL          |             | Item Title from RSS
Link       | TEXT      | YES        | NO  | NULL          |             | Item Link from RSS
Description | TEXT     | YES        | NO  | NULL          |             | Item Description from RSS
Author     | TEXT      | YES        | NO  | NULL          |             | Item Author email address
Enclosure_URL | TEXT   | YES        | NO  | NULL          |             | Item Enclosure URL
Enclosure_Length | INTEGER | YES    | NO  | NULL          |             | Item Enclosure size in Bytes
Enclosure_Type | TEXT  | YES        | NO  | NULL          |             | Item Enclosure MIME Type
GUID       | TEXT      | YES        | NO  | NULL          |             | Item GUID from RSS
GUID_Is_Permalink | INTEGER | NO    | NO  | 0             |             | Item GUID Is Permalink Boolean (0 or 1)
Publication_Date | TEXT | YES       | NO  | NULL          |             | Item Publication Date as ISO-8601 Date
Source_URL | TEXT      | YES        | NO  | NULL          |             | Item Source URL from RSS
Source_Name | TEXT     | YES        | NO  | NULL          |             | Item Source Text from RSS
Downloaded | INTEGER   | NO         | NO  | 0             |             | Has been downloaded Boolean (0 or 1)
Download_Date | TEXT   | YES        | NO  | NULL          |             | ISO-8601 Date it was downloaded
Original_Filename | TEXT | YES      | NO  | NULL          |             | Filename specified by the enclosure
Filename   | TEXT      | YES        | NO  | NULL          |             | Filename the file was actually stored as
Play_Count | INTEGER   | YES        | NO  | 0             |             | Number of times the file has been played


## Table: Item_Category

Field Name | Data Type | Allow Null | Key | Default Value | Constraints | Notes
---------- | --------- | ---------- | --- | ------------- | ----------- | -----
ICID       | INTEGER   | NO         | PRIMARY | NULL    | AUTOINCREMENT | Reference ID
Item_ID    | INTEGER   | NO         | FOREIGN | 0         |             | Links to Item_ID in Item table
Category   | TEXT      | NO         | NO  | ''            |             | Category Name
Domain     | TEXT      | YES        | NO  | NULL          |             | Category Domain


## Table: Config
Field Name | Data Type | Allow Null | Key | Default Value | Constraints | Notes
---------- | --------- | ---------- | --- | ------------- | ----------- | -----
Setting    | TEXT      | NO         | PRIMARY | NULL      | UNIQUE      | The name of the setting.
Data       | TEXT      | YES        | NO  | NULL          |             | What it's set to.


## Table Creation Code

### Channel

```sqlite
BEGIN TRANSACTION;
CREATE TABLE Channel (
Channel_ID INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
Channel_URL TEXT NOT NULL UNIQUE,
Title TEXT NOT NULL,
Link TEXT DEFAULT NULL,
Description TEXT DEFAULT NULL,
Language_Major TEXT DEFAULT NULL,
Language_Minor TEXT DEFAULT NULL,
Copyright TEXT DEFAULT NULL,
Managing_Editor TEXT DEFAULT NULL,
Webmaster TEXT DEFAULT NULL,
Publication_Date TEXT DEFAULT NULL,
Last_Build_Date TEXT DEFAULT NULL,
Generator TEXT DEFAULT NULL,
Documentation TEXT DEFAULT NULL,
RSS_Version TEXT DEFAULT NULL,
TTL INTEGER DEFAULT NULL,
Image_URL TEXT DEFAULT NULL,
Image_Title TEXT DEFAULT NULL,
Image_Link TEXT DEFAULT NULL,
Image_Description TEXT DEFAULT NULL,
Image_Width INTEGER DEFAULT NULL,
Image_Height INTEGER DEFAULT NULL,
Last_Refresh_Date TEXT NOT NULL,
Directory TEXT NOT NULL DEFAULT ''
);
CREATE INDEX ChanURL ON Channel (Channel_URL);
COMMIT;
```

### Channel_Category

```sqlite
CREATE TABLE Channel_Category (
CCID INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
Channel_ID INTEGER NOT NULL DEFAULT 0,
Category TEXT NOT NULL,
Domain TEXT DEFAULT NULL,
FOREIGN KEY (Channel_ID) REFERENCES Channel(Channel_ID)
);
```

### Channel_Skip_Day

```sqlite
CREATE TABLE Channel_Skip_Day (
CSDID INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
Channel_ID INTEGER NOT NULL DEFAULT 0,
Day_Name TEXT NOT NULL DEFAULT 'Sunday',
Day_Number INTEGER NOT NULL DEFAULT 0,
FOREIGN KEY (Channel_ID) REFERENCES Channel(Channel_ID)
);
```

### Channel_Skip_Hour

```sqlite
CREATE TABLE Channel_Skip_Hour (
CSHID INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
Channel_ID INTEGER NOT NULL DEFAULT 0,
Hour INTEGER NOT NULL DEFAULT 0,
FOREIGN KEY (Channel_ID) REFERENCES Channel(Channel_ID)
);
```

### Item

```sqlite
CREATE TABLE Item (
Item_ID INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
Channel_ID INTEGER NOT NULL DEFAULT 0,
Title TEXT NOT NULL,
Link TEXT DEFAULT NULL,
Description TEXT DEFAULT NULL,
Author TEXT DEFAULT NULL,
Enclosure_URL TEXT DEFAULT NULL,
Enclosure_Length INTEGER DEFAULT NULL,
Enclosure_Type TEXT DEFAULT NULL,
GUID TEXT DEFAULT NULL,
GUID_Is_Permalink INTEGER NOT NULL DEFAULT 0,
Publication_Date TEXT DEFAULT NULL,
Source_URL TEXT DEFAULT NULL,
Source_Name TEXT DEFAULT NULL,
Downloaded INTEGER NOT NULL DEFAULT 0,
Downloaded_Date TEXT DEFAULT NULL,
Original_Filename TEXT DEFAULT NULL,
Filename TEXT DEFAULT NULL,
Play_Count INTEGER DEFAULT 0,
FOREIGN KEY (Channel_ID) REFERENCES Channel(Channel_ID)
);
```

### Item_Category

```sqlite
CREATE TABLE Item_Category (
ICID INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
Item_ID INTEGER NOT NULL DEFAULT 0,
Category TEXT NOT NULL,
Domain TEXT DEFAULT NULL,
FOREIGN KEY (Item_ID) REFERENCES Item(Item_ID)
);
```

### Config

```sqlite
CREATE TABLE Config (
Setting TEXT NOT NULL PRIMARY KEY,
Data TEXT DEFAULT NULL
);
```
