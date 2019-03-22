#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNavMeshPath_MinDistBetweenSpecsOfType(py::module &m)
{
    py::class_< UNavMeshPath_MinDistBetweenSpecsOfType,  UNavMeshPathConstraint   >(m, "UNavMeshPath_MinDistBetweenSpecsOfType")
        .def_readwrite("MinDistBetweenEdgeTypes", &UNavMeshPath_MinDistBetweenSpecsOfType::MinDistBetweenEdgeTypes)
        .def_readwrite("InitLocation", &UNavMeshPath_MinDistBetweenSpecsOfType::InitLocation)
        .def_readwrite("EdgeType", &UNavMeshPath_MinDistBetweenSpecsOfType::EdgeType)
        .def_readwrite("Penalty", &UNavMeshPath_MinDistBetweenSpecsOfType::Penalty)
        .def("StaticClass", &UNavMeshPath_MinDistBetweenSpecsOfType::StaticClass, py::return_value_policy::reference)
        .def("Recycle", &UNavMeshPath_MinDistBetweenSpecsOfType::Recycle)
        .def("EnforceMinDist", &UNavMeshPath_MinDistBetweenSpecsOfType::EnforceMinDist)
          ;
}