#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APopulationPoint_Dynamic()
{
    class_< APopulationPoint_Dynamic, bases< APopulationPoint >  , boost::noncopyable>("APopulationPoint_Dynamic", no_init)
        .def_readwrite("DynamicPointName", &APopulationPoint_Dynamic::DynamicPointName)
        .def("StaticClass", &APopulationPoint_Dynamic::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}