#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADynamicAnchor(py::module &m)
{
    py::class_< ADynamicAnchor,  ANavigationPoint   >(m, "ADynamicAnchor")
        .def_readwrite("CurrentUser", &ADynamicAnchor::CurrentUser)
          ;
}