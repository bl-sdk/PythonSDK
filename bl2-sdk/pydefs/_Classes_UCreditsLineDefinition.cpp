#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCreditsLineDefinition(py::module &m)
{
    py::class_< UCreditsLineDefinition,  UGBXDefinition   >(m, "UCreditsLineDefinition")
		.def_static("StaticClass", &UCreditsLineDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("LinkageName", &UCreditsLineDefinition::LinkageName)
          ;
}