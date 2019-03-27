#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchDirection_ToMyRight(py::module &m)
{
    py::class_< USearchDirection_ToMyRight,  USearchDirection   >(m, "USearchDirection_ToMyRight")
		.def_static("StaticClass", &USearchDirection_ToMyRight::StaticClass, py::return_value_policy::reference)
          ;
}