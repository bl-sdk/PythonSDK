#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAccumulateAlphaEffect()
{
    py::class_< UAccumulateAlphaEffect,  UPostProcessEffect   >("UAccumulateAlphaEffect")
        .def("StaticClass", &UAccumulateAlphaEffect::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}