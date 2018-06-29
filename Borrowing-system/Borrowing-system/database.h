#pragma once
class database
{
public:
	database(char* title, char* num, char* author, char* level)
	{
		this->title = title; this->author = author; this->num = num; this->level = level;
	}
	~database(){}
	char* title;
	char* author;
	char* num;
	char* level;
};
class book :public database
{
public:
	book(char* title, char* num, char* author, char* level,char* publisher,char* ISBN,char* page):database(title,num,author,level)
	{
		this->publisher = publisher;
		this->ISBN = ISBN;
		this->page = page;
	}

	~book()
	{
	}
	char* publisher;
	char* ISBN;
	char* page;
private:

};
class video:public database
{
public:
	video(char* title, char* num, char* author, char* level,char* pname,char* pyear,char* time):database(title, num, author, level)
	{
		this->pname = pname;
		this->pyear = pyear;
		this->time = time;
	}

	~video()
	{
	}
	char* pname;
	char* pyear;
	char* time;
private:

};
class picture:public database
{
public:
	picture(char* title, char* num, char* author, char* level,char* country,char* length,char* width):database(title, num, author, level)
	{
		this->country = country;
		this->length = length;
		this->width = width;
	}

	~picture()
	{
	}
	char* country;
	char* length;
	char* width;
private:

};

