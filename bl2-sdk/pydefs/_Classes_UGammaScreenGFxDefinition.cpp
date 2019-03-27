#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGammaScreenGFxDefinition(py::module &m)
{
    py::class_< UGammaScreenGFxDefinition,  UWillowGFxMovie3DDefinition   >(m, "UGammaScreenGFxDefinition")
		.def_static("StaticClass", &UGammaScreenGFxDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Parameters", &UGammaScreenGFxDefinition::Parameters)
          ;
}