#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANxForceFieldSpawnable(py::module &m)
{
    py::class_< ANxForceFieldSpawnable,  AActor   >(m, "ANxForceFieldSpawnable")
		.def_static("StaticClass", &ANxForceFieldSpawnable::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ForceFieldComponent", &ANxForceFieldSpawnable::ForceFieldComponent)
        .def("OnToggle", &ANxForceFieldSpawnable::OnToggle)
          ;
}