#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USnapshotInterface(py::object m)
{
    py::class_< USnapshotInterface,  UObject   >(m, "USnapshotInterface")
        .def("StaticClass", &USnapshotInterface::StaticClass, py::return_value_policy::reference)
          ;
}