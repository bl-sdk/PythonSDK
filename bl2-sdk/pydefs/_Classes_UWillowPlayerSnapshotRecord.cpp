#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowPlayerSnapshotRecord(py::module &m)
{
    py::class_< UWillowPlayerSnapshotRecord,  USnapshotRecord   >(m, "UWillowPlayerSnapshotRecord")
		.def_static("StaticClass", &UWillowPlayerSnapshotRecord::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MyWillowPawnName", &UWillowPlayerSnapshotRecord::MyWillowPawnName)
          ;
}