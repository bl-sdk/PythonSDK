#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UITimerBehavior()
{
    class_< UITimerBehavior, bases< UInterface >  , boost::noncopyable>("UITimerBehavior", no_init)
        .def("StaticClass", &UITimerBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetTimerState", &UITimerBehavior::SetTimerState)
        .def("GetTimerState", &UITimerBehavior::GetTimerState)
        .def("GetTimeSeconds", &UITimerBehavior::GetTimeSeconds)
        .staticmethod("StaticClass")
  ;
}