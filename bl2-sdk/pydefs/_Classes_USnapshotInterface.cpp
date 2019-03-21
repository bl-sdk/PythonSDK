#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USnapshotInterface()
{
    py::class_< USnapshotInterface,  UObject   >("USnapshotInterface")
        .def("StaticClass", &USnapshotInterface::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}