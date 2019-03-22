#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDecalMaterial(py::module &m)
{
    py::class_< UDecalMaterial,  UMaterial   >(m, "UDecalMaterial")
        .def("StaticClass", &UDecalMaterial::StaticClass, py::return_value_policy::reference)
          ;
}