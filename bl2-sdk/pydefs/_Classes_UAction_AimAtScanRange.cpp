#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_AimAtScanRange()
{
    class_< UAction_AimAtScanRange, bases< UWillowActionSequencePawn >  , boost::noncopyable>("UAction_AimAtScanRange", no_init)
        .def_readwrite("YawRange", &UAction_AimAtScanRange::YawRange)
        .def_readwrite("ScanSpeed", &UAction_AimAtScanRange::ScanSpeed)
        .def_readwrite("PointDelay", &UAction_AimAtScanRange::PointDelay)
        .def_readwrite("CurrentYawRange", &UAction_AimAtScanRange::CurrentYawRange)
        .def("StaticClass", &UAction_AimAtScanRange::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetNewRotation", &UAction_AimAtScanRange::SetNewRotation)
        .def("eventStop", &UAction_AimAtScanRange::eventStop)
        .def("eventStart", &UAction_AimAtScanRange::eventStart)
        .staticmethod("StaticClass")
  ;
}