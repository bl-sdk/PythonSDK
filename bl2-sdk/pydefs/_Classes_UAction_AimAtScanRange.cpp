#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_AimAtScanRange(py::module &m)
{
    py::class_< UAction_AimAtScanRange,  UWillowActionSequencePawn   >(m, "UAction_AimAtScanRange")
		.def_static("StaticClass", &UAction_AimAtScanRange::StaticClass, py::return_value_policy::reference)
        .def_readwrite("YawRange", &UAction_AimAtScanRange::YawRange)
        .def_readwrite("ScanSpeed", &UAction_AimAtScanRange::ScanSpeed)
        .def_readwrite("PointDelay", &UAction_AimAtScanRange::PointDelay)
        .def_readwrite("CurrentYawRange", &UAction_AimAtScanRange::CurrentYawRange)
        .def("SetNewRotation", &UAction_AimAtScanRange::SetNewRotation)
        .def("eventStop", &UAction_AimAtScanRange::eventStop)
        .def("eventStart", &UAction_AimAtScanRange::eventStart)
          ;
}