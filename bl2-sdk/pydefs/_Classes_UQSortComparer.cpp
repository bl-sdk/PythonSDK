#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UQSortComparer(py::module &m)
{
    py::class_< UQSortComparer,  UObject   >(m, "UQSortComparer")
		.def_static("StaticClass", &UQSortComparer::StaticClass, py::return_value_policy::reference)
          ;
}