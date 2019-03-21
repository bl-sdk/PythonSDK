#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFiringCondition()
{
    class_< UFiringCondition, bases< UObject >  , boost::noncopyable>("UFiringCondition", no_init)
        .def("StaticClass", &UFiringCondition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}