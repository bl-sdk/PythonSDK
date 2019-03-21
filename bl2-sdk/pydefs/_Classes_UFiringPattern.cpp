#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFiringPattern()
{
    class_< UFiringPattern, bases< UObject >  , boost::noncopyable>("UFiringPattern", no_init)
        .def("StaticClass", &UFiringPattern::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}