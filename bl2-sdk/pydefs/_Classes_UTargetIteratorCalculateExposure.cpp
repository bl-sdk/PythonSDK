#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTargetIteratorCalculateExposure(py::module &m)
{
    py::class_< UTargetIteratorCalculateExposure,  UTargetIterator   >(m, "UTargetIteratorCalculateExposure")
		.def_static("StaticClass", &UTargetIteratorCalculateExposure::StaticClass, py::return_value_policy::reference)
          ;
}