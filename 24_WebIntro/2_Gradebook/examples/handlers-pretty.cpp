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
    << "    <head><title>Gradebook</title>" << endl
    << "      <link rel='stylesheet' href='https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css' integrity='sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T' crossorigin='anonymous'>" << endl
    << "      <script src='https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/js/bootstrap.min.js' integrity='sha384-JjSmVgyd0p3pXB1rRibZUAYoIIy6OrQ6VrjIEaFf/nJGzIxFDsf4x0xIM+B07jRM' crossorigin='anonymous'></script>" << endl
    << "    </head>"
    << "    <body><div class='container'>" << endl
    << "  <h3>" << endl
    << "    Grades for " << student->get_name() << endl
    << "  </h3>" << endl
    << "  <form action='updateGrades' method='POST'>" << endl
    << "    <input type='hidden' name='id' value='" << student->get_id() << "'/><br/>" << endl
    << "    <div class='form-group'>"
    << "      <label for='hwid'>Homework</label> <input type='text' class='form-control' id='hwid' name='hw' value='" << student->get_homework() << "'/>" << endl
    << "      <label for='midid'>Mid-Term</label> <input type='text' class='form-control' id='midid' name='mid' value='" << student->get_midterm() << "'/><br/>" << endl
    << "      <label for='finid'>Final</label> <input type='text' class='form-control' id='finid' name='fin' value='" << student->get_final() << "'/><br/>" << endl
    << "    <button type='submit' class='btn btn-info'>Save</button>" << endl
    << "  </form>" << endl
    << "    </div></body>" << endl
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
    << "      <link rel='stylesheet' href='https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css' integrity='sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T' crossorigin='anonymous'>" << endl
    << "      <script src='https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/js/bootstrap.min.js' integrity='sha384-JjSmVgyd0p3pXB1rRibZUAYoIIy6OrQ6VrjIEaFf/nJGzIxFDsf4x0xIM+B07jRM' crossorigin='anonymous'></script>" << endl
    << "    </head>"
    << "    <body><div class='container'>" << endl
    << "            <table class='table'>" << endl
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
        << "                        <td><a class='btn btn-info' href='editGrades?id=" << all_students[i]->get_id() << "'>Edit Grades</a></td>" << endl
        << "                    </tr>" << endl;
    }
  body
    << "            </table>" << endl
    << "    <div class='alert alert-dark'>" << endl
    << "      Percent Passed: " << gbservice->percentPassed() << endl
    << "    </div>" << endl
    << "    </div></body>" << endl
    << "</html>" << endl;

  res->setBody(body.str());
  return res;
}
