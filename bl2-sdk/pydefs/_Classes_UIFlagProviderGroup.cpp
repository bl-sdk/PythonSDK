#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIFlagProviderGroup(py::module &m)
{
    py::class_< UIFlagProviderGroup,  UInterface   >(m, "UIFlagProviderGroup")
        .def("StaticClass", &UIFlagProviderGroup::StaticClass, py::return_value_policy::reference)
          ;
}