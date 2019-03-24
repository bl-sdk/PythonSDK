#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URES_CustomAnimation(py::module &m)
{
    py::class_< URES_CustomAnimation,  UActionResource   >(m, "URES_CustomAnimation")
		.def_static("StaticClass", &URES_CustomAnimation::StaticClass, py::return_value_policy::reference)
          ;
}