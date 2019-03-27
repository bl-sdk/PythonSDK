#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URulePlaceholder(py::module &m)
{
    py::class_< URulePlaceholder,  URule   >(m, "URulePlaceholder")
		.def_static("StaticClass", &URulePlaceholder::StaticClass, py::return_value_policy::reference)
          ;
}