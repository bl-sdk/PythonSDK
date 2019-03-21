#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIMissionInventory()
{
    py::class_< UIMissionInventory,  UInterface   >("UIMissionInventory")
        .def("StaticClass", &UIMissionInventory::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}