#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UObjectRedirector()
{
    class_< UObjectRedirector, bases< UObject >  , boost::noncopyable>("UObjectRedirector", no_init)
        .def_readonly("UnknownData00", &UObjectRedirector::UnknownData00)
        .def("StaticClass", &UObjectRedirector::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}