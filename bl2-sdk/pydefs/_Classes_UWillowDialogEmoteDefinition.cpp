#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDialogEmoteDefinition(py::module &m)
{
    py::class_< UWillowDialogEmoteDefinition,  UGBXDefinition   >(m, "UWillowDialogEmoteDefinition")
		.def_static("StaticClass", &UWillowDialogEmoteDefinition::StaticClass, py::return_value_policy::reference)
          ;
}