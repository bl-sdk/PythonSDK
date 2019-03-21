#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USpecialMove_Perch()
{
    class_< USpecialMove_Perch, bases< UWillowAnimDefinition >  , boost::noncopyable>("USpecialMove_Perch", no_init)
        .def("StaticClass", &USpecialMove_Perch::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}