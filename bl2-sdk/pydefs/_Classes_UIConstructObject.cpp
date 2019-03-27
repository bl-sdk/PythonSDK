#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIConstructObject(py::module &m)
{
    py::class_< UIConstructObject,  UInterface   >(m, "UIConstructObject")
		.def_static("StaticClass", &UIConstructObject::StaticClass, py::return_value_policy::reference)
          ;
}