#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNetPendingLevel(py::module &m)
{
    py::class_< UNetPendingLevel,  UPendingLevel   >(m, "UNetPendingLevel")
		.def_static("StaticClass", &UNetPendingLevel::StaticClass, py::return_value_policy::reference)
          ;
}