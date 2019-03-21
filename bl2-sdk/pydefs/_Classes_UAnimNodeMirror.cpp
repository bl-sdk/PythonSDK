#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodeMirror()
{
    py::class_< UAnimNodeMirror,  UAnimNodeBlendBase   >("UAnimNodeMirror")
        .def("StaticClass", &UAnimNodeMirror::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}