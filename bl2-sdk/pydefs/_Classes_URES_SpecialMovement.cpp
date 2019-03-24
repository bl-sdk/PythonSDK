#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_SpecialMovement(py::module &m)
{
    py::class_< URES_SpecialMovement,  UActionResource   >(m, "URES_SpecialMovement")
		.def_static("StaticClass", &URES_SpecialMovement::StaticClass, py::return_value_policy::reference)
          ;
}