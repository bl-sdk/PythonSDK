#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchDirection_TowardMe(py::module &m)
{
    py::class_< USearchDirection_TowardMe,  USearchDirection   >(m, "USearchDirection_TowardMe")
		.def_static("StaticClass", &USearchDirection_TowardMe::StaticClass, py::return_value_policy::reference)
          ;
}