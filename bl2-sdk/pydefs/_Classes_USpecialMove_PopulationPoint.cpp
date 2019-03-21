#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USpecialMove_PopulationPoint()
{
    class_< USpecialMove_PopulationPoint, bases< UWillowAnimDefinition >  , boost::noncopyable>("USpecialMove_PopulationPoint", no_init)
        .def("StaticClass", &USpecialMove_PopulationPoint::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}