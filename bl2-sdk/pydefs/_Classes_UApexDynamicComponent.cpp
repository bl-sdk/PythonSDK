#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UApexDynamicComponent(py::module &m)
{
    py::class_< UApexDynamicComponent,  UApexComponentBase   >(m, "UApexDynamicComponent")
        .def_readwrite("ComponentDynamicResources", &UApexDynamicComponent::ComponentDynamicResources)
          ;
}