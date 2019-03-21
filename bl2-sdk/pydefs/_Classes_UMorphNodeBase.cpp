#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMorphNodeBase()
{
    py::class_< UMorphNodeBase,  UAnimObject   >("UMorphNodeBase")
        .def_readwrite("NodeName", &UMorphNodeBase::NodeName)
        .def("StaticClass", &UMorphNodeBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}