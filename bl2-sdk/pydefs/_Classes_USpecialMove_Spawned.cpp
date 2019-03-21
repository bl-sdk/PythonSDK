#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USpecialMove_Spawned()
{
    class_< USpecialMove_Spawned, bases< UWillowAnimDefinition >  , boost::noncopyable>("USpecialMove_Spawned", no_init)
        .def_readwrite("StretchyStartTime", &USpecialMove_Spawned::StretchyStartTime)
        .def_readwrite("StretchyEndTime", &USpecialMove_Spawned::StretchyEndTime)
        .def("StaticClass", &USpecialMove_Spawned::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventClientFinished", &USpecialMove_Spawned::eventClientFinished)
        .def("eventClientStarted", &USpecialMove_Spawned::eventClientStarted)
        .def("eventServerFinished", &USpecialMove_Spawned::eventServerFinished)
        .def("eventServerStarted", &USpecialMove_Spawned::eventServerStarted)
        .staticmethod("StaticClass")
  ;
}