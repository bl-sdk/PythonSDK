#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialEffect(py::module &m)
{
    py::class_< UMaterialEffect,  UPostProcessEffect   >(m, "UMaterialEffect")
        .def_readwrite("Material", &UMaterialEffect::Material)
        .def("StaticClass", &UMaterialEffect::StaticClass, py::return_value_policy::reference)
          ;
}