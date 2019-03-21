#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqVar_DayNightCycleVariable()
{
    class_< UWillowSeqVar_DayNightCycleVariable, bases< USeqVar_Float >  , boost::noncopyable>("UWillowSeqVar_DayNightCycleVariable", no_init)
        .def("StaticClass", &UWillowSeqVar_DayNightCycleVariable::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}