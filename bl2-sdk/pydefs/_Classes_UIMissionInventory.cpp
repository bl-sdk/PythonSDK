#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIMissionInventory(py::module &m)
{
    py::class_< UIMissionInventory,  UInterface   >(m, "UIMissionInventory")
        .def("StaticClass", &UIMissionInventory::StaticClass, py::return_value_policy::reference)
          ;
}