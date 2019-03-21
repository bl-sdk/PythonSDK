#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowPauseTicker()
{
    class_< UWillowPauseTicker, bases< UObject >  , boost::noncopyable>("UWillowPauseTicker", no_init)
        .def_readwrite("VfTable_FTickableObject", &UWillowPauseTicker::VfTable_FTickableObject)
        .def_readwrite("Timers", &UWillowPauseTicker::Timers)
        .def("StaticClass", &UWillowPauseTicker::StaticClass, return_value_policy< reference_existing_object >())
        .def("ClearTimer", &UWillowPauseTicker::ClearTimer)
        .def("IsTimerActive", &UWillowPauseTicker::IsTimerActive)
        .def("SetTimer", &UWillowPauseTicker::SetTimer)
        .staticmethod("StaticClass")
  ;
}