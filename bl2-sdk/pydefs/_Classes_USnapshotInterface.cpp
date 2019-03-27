#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USnapshotInterface(py::module &m)
{
    py::class_< USnapshotInterface,  UObject   >(m, "USnapshotInterface")
		.def_static("StaticClass", &USnapshotInterface::StaticClass, py::return_value_policy::reference)
          ;
}