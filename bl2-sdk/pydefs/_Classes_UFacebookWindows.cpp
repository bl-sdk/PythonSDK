#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFacebookWindows()
{
    class_< UFacebookWindows, bases< UFacebookIntegration >  , boost::noncopyable>("UFacebookWindows", no_init)
        .def_readonly("UnknownData00", &UFacebookWindows::UnknownData00)
        .def("StaticClass", &UFacebookWindows::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}