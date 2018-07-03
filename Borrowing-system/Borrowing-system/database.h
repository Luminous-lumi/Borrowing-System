#pragma once
class database
{
public:
	database() {};
	database(char* title, char* num, char* author, char* level)
	{
		this->title = title; this->author = author; this->num = num; this->level = level;
	}
	~database(){}
	char* title=new char;
	char* author=new char;
	char* num= new char;
	char* level= new char;
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
	book() {}
	~book()
	{
	}
	char* publisher= new char;
	char* ISBN= new char;
	char* page= new char;
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
	video(){}
	~video()
	{
	}
	char* pname= new char;
	char* pyear= new char;
	char* time= new char;
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
	picture(){}
	~picture()
	{
	}
	char* country= new char;
	char* length= new char;
	char* width= new char;
private:

};

