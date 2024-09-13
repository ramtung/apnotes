#ifndef _MY_HANDLERS_
#define _MY_HANDLERS_

#include "../server/server.hpp"
#include "gbservice.hpp"
#include <iostream>

class EditForm : public RequestHandler {
public:
	EditForm(GradebookService* gbs) : gbservice(gbs) {}
	Response *callback(Request *);
private:
	GradebookService* gbservice;
};

class UpdateGrades : public RequestHandler {
public:
	UpdateGrades(GradebookService* gbs) : gbservice(gbs) {}
	Response *callback(Request *);
private:
	GradebookService* gbservice;
};

class ShowGradebook : public RequestHandler {
public:
	ShowGradebook(GradebookService* gbs) : gbservice(gbs) {}
	Response *callback(Request *);
private:
	GradebookService* gbservice;
};

#endif
