#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULightFunction(py::module &m)
{
    py::class_< ULightFunction,  UObject   >(m, "ULightFunction")
        .def_readwrite("SourceMaterial", &ULightFunction::SourceMaterial)
        .def_readwrite("Scale", &ULightFunction::Scale)
        .def_readwrite("DisabledBrightness", &ULightFunction::DisabledBrightness)
        .def("StaticClass", &ULightFunction::StaticClass, py::return_value_policy::reference)
          ;
}