#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMorphNodeWeight(py::object m)
{
    py::class_< UMorphNodeWeight,  UMorphNodeBase   >(m, "UMorphNodeWeight")
        .def_readwrite("NodeWeight", &UMorphNodeWeight::NodeWeight)
        .def_readwrite("NodeConns", &UMorphNodeWeightBase::NodeConns)
        .def("StaticClass", &UMorphNodeWeight::StaticClass, py::return_value_policy::reference)
        .def("SetNodeWeight", &UMorphNodeWeight::SetNodeWeight)
          ;
}