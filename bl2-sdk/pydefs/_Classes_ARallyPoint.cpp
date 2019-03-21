#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ARallyPoint()
{
    class_< ARallyPoint, bases< AActor >  , boost::noncopyable>("ARallyPoint", no_init)
        .def("StaticClass", &ARallyPoint::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}