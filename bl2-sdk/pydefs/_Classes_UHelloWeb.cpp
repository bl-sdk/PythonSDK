#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UHelloWeb()
{
    class_< UHelloWeb, bases< UWebApplication >  , boost::noncopyable>("UHelloWeb", no_init)
        .def("StaticClass", &UHelloWeb::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventQuery", &UHelloWeb::eventQuery)
        .def("Init", &UHelloWeb::Init)
        .staticmethod("StaticClass")
  ;
}