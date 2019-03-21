#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USpecialMove_Cover()
{
    class_< USpecialMove_Cover, bases< UWillowAnimDefinition >  , boost::noncopyable>("USpecialMove_Cover", no_init)
        .def("StaticClass", &USpecialMove_Cover::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetSMNode", &USpecialMove_Cover::GetSMNode, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}