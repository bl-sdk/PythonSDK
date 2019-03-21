#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USmokeTestCommandlet()
{
    class_< USmokeTestCommandlet, bases< UCommandlet >  , boost::noncopyable>("USmokeTestCommandlet", no_init)
        .def("StaticClass", &USmokeTestCommandlet::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}