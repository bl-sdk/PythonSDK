#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_VehicleTurret(py::module &m)
{
    py::class_< UAction_VehicleTurret,  UWillowActionSequencePawn   >(m, "UAction_VehicleTurret")
		.def_static("StaticClass", &UAction_VehicleTurret::StaticClass, py::return_value_policy::reference)
        .def("eventUpdate", &UAction_VehicleTurret::eventUpdate)
        .def("eventStop", &UAction_VehicleTurret::eventStop)
        .def("eventStart", &UAction_VehicleTurret::eventStart)
        .def("eventCanRun", &UAction_VehicleTurret::eventCanRun)
          ;
}