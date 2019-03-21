#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAccumulateAlphaEffect(py::object m)
{
    py::class_< UAccumulateAlphaEffect,  UPostProcessEffect   >(m, "UAccumulateAlphaEffect")
        .def("StaticClass", &UAccumulateAlphaEffect::StaticClass, py::return_value_policy::reference)
          ;
}