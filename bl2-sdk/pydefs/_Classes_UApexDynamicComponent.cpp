#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UApexDynamicComponent(py::module &m)
{
    py::class_< UApexDynamicComponent,  UApexComponentBase   >(m, "UApexDynamicComponent")
		.def_static("StaticClass", &UApexDynamicComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ComponentDynamicResources", &UApexDynamicComponent::ComponentDynamicResources)
          ;
}