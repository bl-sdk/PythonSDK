#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AMatineeActor(py::module &m)
{
    py::class_< AMatineeActor,  AActor   >(m, "AMatineeActor")
        .def_readwrite("InterpAction", &AMatineeActor::InterpAction)
        .def_readwrite("PlayRate", &AMatineeActor::PlayRate)
        .def_readwrite("Position", &AMatineeActor::Position)
        .def_readwrite("ClientSidePositionErrorTolerance", &AMatineeActor::ClientSidePositionErrorTolerance)
        .def("StaticClass", &AMatineeActor::StaticClass, py::return_value_policy::reference)
        .def("CheckPriorityRefresh", &AMatineeActor::CheckPriorityRefresh)
        .def("eventUpdate", &AMatineeActor::eventUpdate)
        .def("AddAIGroupActor", &AMatineeActor::AddAIGroupActor)
          ;
}