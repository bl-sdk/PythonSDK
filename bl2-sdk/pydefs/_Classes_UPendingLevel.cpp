#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPendingLevel(py::module &m)
{
    py::class_< UPendingLevel,  ULevelBase   >(m, "UPendingLevel")
		.def_static("StaticClass", &UPendingLevel::StaticClass, py::return_value_policy::reference)
          ;
}