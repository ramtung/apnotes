#include <string>
#include <sstream>
#include "handlers.hpp"
using namespace std;

Response *EditForm::callback(Request *req) {
  Response *res = new Response;
  res->setHeader("Content-Type", "text/html");

  Student* student = gbservice->get_student(req->getQueryParam("id"));

  ostringstream body;
  body
    << "<html>" << endl
    << "<head><title>Grades Form</title></head>" << endl
    << "<body>" << endl
    << "  <p>" << endl
    << "    Grades for " << student->get_name() << endl
    << "  </p>" << endl
    << "  <form action='updateGrades' method='POST'>" << endl
    << "    <input type='hidden' name='id' value='" << student->get_id() << "'/><br/>" << endl
    << "    Homework: <input type='text' name='hw' value='" << student->get_homework() << "'/><br/>" << endl
    << "    Mid-Term: <input type='text' name='mid' value='" << student->get_midterm() << "'/><br/>" << endl
    << "    Final: <input type='text' name='fin' value='" << student->get_final() << "'/><br/>" << endl
    << "    <input type='submit' value='Save'/>" << endl
    << "  </form>" << endl
    << "</body>" << endl
    << "</html>" << endl;

  res->setBody(body.str());
  return res;
}

Response *UpdateGrades::callback(Request *req) {
  gbservice->update_student(
    req->getBodyParam("id"),
    stod(req->getBodyParam("hw")),
    stod(req->getBodyParam("mid")),
    stod(req->getBodyParam("fin"))
  );
  return Response::redirect("/");
}


Response *ShowGradebook::callback(Request *req) {
  Response *res = new Response;
  res->setHeader("Content-Type", "text/html");

  vector<Student*> all_students = gbservice->get_all_students();

  ostringstream body;
  body
    << "<html>" << endl
    << "    <head><title>Gradebook</title>" << endl
    << "    </head>" << endl
    << "    <body>" << endl
    << "            <table border=1>" << endl
    << "                <tr>" << endl
    << "                    <th>Name</th>" << endl
    << "                    <th>Homework</th>" << endl
    << "                    <th>Mid-Term</th>" << endl
    << "                    <th>Final</th>" << endl
    << "                    <th>&nbsp;</th>" << endl
    << "                </tr>" << endl;

    for (int i = 0; i < all_students.size(); i++) {
      body
        << "                    <tr>" << endl
        << "                        <td>" << all_students[i]->get_name() << "</td>" << endl
        << "                        <td>" << all_students[i]->get_homework() << "</td>" << endl
        << "                        <td>" << all_students[i]->get_midterm() << "</td>" << endl
        << "                        <td>" << all_students[i]->get_final() << "</td>" << endl
        << "                        <td><a href='editGrades?id=" << all_students[i]->get_id() << "'>Edit Grades</a></td>" << endl
        << "                    </tr>" << endl;
    }
  body
    << "            </table>" << endl
    << "    <p>" << endl
    << "      Percent Passed: " << gbservice->percentPassed() << endl
    << "    </p>" << endl
    << "    </body>" << endl
    << "</html>" << endl;

  res->setBody(body.str());
  return res;
}
