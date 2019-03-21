#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowPlayerSnapshotRecord()
{
    py::class_< UWillowPlayerSnapshotRecord,  USnapshotRecord   >("UWillowPlayerSnapshotRecord")
        .def_readwrite("MyWillowPawnName", &UWillowPlayerSnapshotRecord::MyWillowPawnName)
        .def("StaticClass", &UWillowPlayerSnapshotRecord::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}