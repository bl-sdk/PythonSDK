#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UApexStaticComponent(py::module &m)
{
    py::class_< UApexStaticComponent,  UApexComponentBase   >(m, "UApexStaticComponent")
		.def_static("StaticClass", &UApexStaticComponent::StaticClass, py::return_value_policy::reference)
          ;
}