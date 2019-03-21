#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDwTriovizImplEffect(py::object m)
{
    py::class_< UDwTriovizImplEffect,  UPostProcessEffect   >(m, "UDwTriovizImplEffect")
        .def("StaticClass", &UDwTriovizImplEffect::StaticClass, py::return_value_policy::reference)
          ;
}