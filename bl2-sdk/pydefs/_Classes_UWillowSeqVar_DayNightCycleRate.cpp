#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqVar_DayNightCycleRate()
{
    class_< UWillowSeqVar_DayNightCycleRate, bases< UWillowSeqVar_DayNightCycleVariable >  , boost::noncopyable>("UWillowSeqVar_DayNightCycleRate", no_init)
        .def("StaticClass", &UWillowSeqVar_DayNightCycleRate::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}