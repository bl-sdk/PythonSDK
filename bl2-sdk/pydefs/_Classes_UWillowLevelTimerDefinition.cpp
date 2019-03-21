#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowLevelTimerDefinition()
{
    class_< UWillowLevelTimerDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UWillowLevelTimerDefinition", no_init)
        .def_readwrite("TimerHeader", &UWillowLevelTimerDefinition::TimerHeader)
        .def_readwrite("XPosition", &UWillowLevelTimerDefinition::XPosition)
        .def_readwrite("YPosition", &UWillowLevelTimerDefinition::YPosition)
        .def_readwrite("TimerFont", &UWillowLevelTimerDefinition::TimerFont)
        .def_readwrite("TimerColor", &UWillowLevelTimerDefinition::TimerColor)
        .def("StaticClass", &UWillowLevelTimerDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}