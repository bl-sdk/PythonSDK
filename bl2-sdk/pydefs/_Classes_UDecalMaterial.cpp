#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDecalMaterial()
{
    py::class_< UDecalMaterial,  UMaterial   >("UDecalMaterial")
        .def("StaticClass", &UDecalMaterial::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}