#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_DayNightCycle()
{
    class_< UWillowSeqAct_DayNightCycle, bases< USeqAct_Interp >  , boost::noncopyable>("UWillowSeqAct_DayNightCycle", no_init)
        .def("StaticClass", &UWillowSeqAct_DayNightCycle::StaticClass, return_value_policy< reference_existing_object >())
        .def("TogglePauseDayCycle", &UWillowSeqAct_DayNightCycle::TogglePauseDayCycle)
        .def("SetTimeOfDay", &UWillowSeqAct_DayNightCycle::SetTimeOfDay)
        .staticmethod("StaticClass")
  ;
}