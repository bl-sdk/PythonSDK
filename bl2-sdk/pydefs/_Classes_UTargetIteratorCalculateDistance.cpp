#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTargetIteratorCalculateDistance(py::module &m)
{
    py::class_< UTargetIteratorCalculateDistance,  UTargetIterator   >(m, "UTargetIteratorCalculateDistance")
		.def_static("StaticClass", &UTargetIteratorCalculateDistance::StaticClass, py::return_value_policy::reference)
          ;
}