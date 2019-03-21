#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USpecialMove_Motion()
{
    class_< USpecialMove_Motion, bases< UWillowAnimDefinition >  , boost::noncopyable>("USpecialMove_Motion", no_init)
        .def("StaticClass", &USpecialMove_Motion::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}