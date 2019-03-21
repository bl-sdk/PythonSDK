#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGammaScreenGFxDefinition()
{
    py::class_< UGammaScreenGFxDefinition,  UWillowGFxMovie3DDefinition   >("UGammaScreenGFxDefinition")
        .def_readwrite("Parameters", &UGammaScreenGFxDefinition::Parameters)
        .def("StaticClass", &UGammaScreenGFxDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}