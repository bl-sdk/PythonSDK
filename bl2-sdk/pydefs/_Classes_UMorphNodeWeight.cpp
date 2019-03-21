#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMorphNodeWeight()
{
    py::class_< UMorphNodeWeight,  UMorphNodeBase   >("UMorphNodeWeight")
        .def_readwrite("NodeWeight", &UMorphNodeWeight::NodeWeight)
        .def_readwrite("NodeConns", &UMorphNodeWeightBase::NodeConns)
        .def("StaticClass", &UMorphNodeWeight::StaticClass, py::return_value_policy::reference)
        .def("SetNodeWeight", &UMorphNodeWeight::SetNodeWeight)
        .staticmethod("StaticClass")
  ;
}