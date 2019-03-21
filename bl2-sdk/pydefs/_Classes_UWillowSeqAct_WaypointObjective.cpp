#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_WaypointObjective()
{
    class_< UWillowSeqAct_WaypointObjective, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_WaypointObjective", no_init)
        .def_readwrite("WaypointInfo", &UWillowSeqAct_WaypointObjective::WaypointInfo)
        .def_readwrite("WaypointObjective", &UWillowSeqAct_WaypointObjective::WaypointObjective)
        .def("StaticClass", &UWillowSeqAct_WaypointObjective::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}