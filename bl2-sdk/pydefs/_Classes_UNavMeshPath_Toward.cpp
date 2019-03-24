#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshPath_Toward(py::module &m)
{
    py::class_< UNavMeshPath_Toward,  UNavMeshPathConstraint   >(m, "UNavMeshPath_Toward")
		.def_static("StaticClass", &UNavMeshPath_Toward::StaticClass, py::return_value_policy::reference)
        .def_readwrite("GoalActor", &UNavMeshPath_Toward::GoalActor)
        .def_readwrite("GoalPoint", &UNavMeshPath_Toward::GoalPoint)
        .def("Recycle", &UNavMeshPath_Toward::Recycle)
        .def("TowardPoint", &UNavMeshPath_Toward::TowardPoint)
        .def("TowardGoal", &UNavMeshPath_Toward::TowardGoal)
          ;
}