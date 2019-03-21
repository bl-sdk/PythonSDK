#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSnapshotRecord()
{
    py::class_< UWillowSnapshotRecord,  USnapshotRecord   >("UWillowSnapshotRecord")
        .def("StaticClass", &UWillowSnapshotRecord::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}