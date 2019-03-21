#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AVantageNode(py::object m)
{
    py::class_< AVantageNode,  APathNode   >(m, "AVantageNode")
        .def_readwrite("VantageOnAreas", &AVantageNode::VantageOnAreas)
        .def_readwrite("WeaponTypeFilters", &AVantageNode::WeaponTypeFilters)
        .def("StaticClass", &AVantageNode::StaticClass, py::return_value_policy::reference)
          ;
}