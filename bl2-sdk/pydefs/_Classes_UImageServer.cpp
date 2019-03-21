#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UImageServer()
{
    class_< UImageServer, bases< UWebApplication >  , boost::noncopyable>("UImageServer", no_init)
        .def("StaticClass", &UImageServer::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventQuery", &UImageServer::eventQuery)
        .staticmethod("StaticClass")
  ;
}