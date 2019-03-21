#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USpecialMove_PerchLoop()
{
    class_< USpecialMove_PerchLoop, bases< UWillowAnimDefinition >  , boost::noncopyable>("USpecialMove_PerchLoop", no_init)
        .def("StaticClass", &USpecialMove_PerchLoop::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}