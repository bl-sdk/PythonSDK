#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AHoldingAreaDestination(py::module &m)
{
    py::class_< AHoldingAreaDestination,  AActor   >(m, "AHoldingAreaDestination")
        .def_readwrite("ExitPoints", &ATeleporterDestination::ExitPoints)
        .def_readwrite("ExitPointsCounter", &ATeleporterDestination::ExitPointsCounter)
        .def("StaticClass", &AHoldingAreaDestination::StaticClass, py::return_value_policy::reference)
        .def("GetNextExitPoint", &ATeleporterDestination::GetNextExitPoint, py::return_value_policy::reference)
        .def("OnToggle", &ATeleporterDestination::OnToggle)
          ;
}