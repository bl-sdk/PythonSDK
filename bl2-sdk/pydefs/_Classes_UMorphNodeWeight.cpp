#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMorphNodeWeight(py::module &m)
{
    py::class_< UMorphNodeWeight,  UMorphNodeBase   >(m, "UMorphNodeWeight")
		.def_static("StaticClass", &UMorphNodeWeight::StaticClass, py::return_value_policy::reference)
        .def_readwrite("NodeWeight", &UMorphNodeWeight::NodeWeight)
        .def_readwrite("NodeConns", &UMorphNodeWeightBase::NodeConns)
        .def("SetNodeWeight", &UMorphNodeWeight::SetNodeWeight)
          ;
}