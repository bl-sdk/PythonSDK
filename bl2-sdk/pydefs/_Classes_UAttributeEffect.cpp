#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttributeEffect(py::module &m)
{
    py::class_< UAttributeEffect,  UObject   >(m, "UAttributeEffect")
        .def("RemoveAttributeEffects", &UAttributeEffect::RemoveAttributeEffects)
        .def("ApplyAttributeEffects", &UAttributeEffect::ApplyAttributeEffects)
          ;
}