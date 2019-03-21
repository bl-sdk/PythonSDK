#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UApexDynamicComponent(py::object m)
{
    py::class_< UApexDynamicComponent,  UApexComponentBase   >(m, "UApexDynamicComponent")
        .def_readwrite("ComponentDynamicResources", &UApexDynamicComponent::ComponentDynamicResources)
        .def("StaticClass", &UApexDynamicComponent::StaticClass, py::return_value_policy::reference)
          ;
}