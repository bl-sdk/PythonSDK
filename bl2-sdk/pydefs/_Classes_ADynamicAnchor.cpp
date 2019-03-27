#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADynamicAnchor(py::module &m)
{
    py::class_< ADynamicAnchor,  ANavigationPoint   >(m, "ADynamicAnchor")
		.def_static("StaticClass", &ADynamicAnchor::StaticClass, py::return_value_policy::reference)
        .def_readwrite("CurrentUser", &ADynamicAnchor::CurrentUser)
          ;
}