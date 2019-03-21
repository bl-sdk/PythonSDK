#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIMissionObjective()
{
    class_< UIMissionObjective, bases< UInterface >  , boost::noncopyable>("UIMissionObjective", no_init)
        .def("StaticClass", &UIMissionObjective::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjectiveBit", &UIMissionObjective::eventGetObjectiveBit)
        .staticmethod("StaticClass")
  ;
}