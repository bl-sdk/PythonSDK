#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshPathConstraint(py::module &m)
{
    py::class_< UNavMeshPathConstraint,  UObject   >(m, "UNavMeshPathConstraint")
		.def_static("StaticClass", &UNavMeshPathConstraint::StaticClass, py::return_value_policy::reference)
        .def_readwrite("NextConstraint", &UNavMeshPathConstraint::NextConstraint)
        .def_readwrite("NumNodesProcessed", &UNavMeshPathConstraint::NumNodesProcessed)
        .def_readwrite("NumThrownOutNodes", &UNavMeshPathConstraint::NumThrownOutNodes)
        .def_readwrite("AddedDirectCost", &UNavMeshPathConstraint::AddedDirectCost)
        .def_readwrite("AddedHeuristicCost", &UNavMeshPathConstraint::AddedHeuristicCost)
        .def("eventGetDumpString", &UNavMeshPathConstraint::eventGetDumpString)
        .def("eventRecycle", &UNavMeshPathConstraint::eventRecycle)
          ;
}