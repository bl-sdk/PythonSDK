#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWwiseSoundGroupRenderingComponent(py::module &m)
{
    py::class_< UWwiseSoundGroupRenderingComponent,  UPrimitiveComponent   >(m, "UWwiseSoundGroupRenderingComponent")
		.def_static("StaticClass", &UWwiseSoundGroupRenderingComponent::StaticClass, py::return_value_policy::reference)
          ;
}