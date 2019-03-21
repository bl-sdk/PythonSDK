#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMorphNodeWeightBase()
{
    py::class_< UMorphNodeWeightBase,  UMorphNodeBase   >("UMorphNodeWeightBase")
        .def_readwrite("NodeConns", &UMorphNodeWeightBase::NodeConns)
        .def("StaticClass", &UMorphNodeWeightBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}