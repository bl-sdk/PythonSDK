#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInventoryUIStatComparer(py::object m)
{
    py::class_< UInventoryUIStatComparer,  UQSortComparer   >(m, "UInventoryUIStatComparer")
        .def_readwrite("StatIndex", &UInventoryUIStatComparer::StatIndex)
        .def("StaticClass", &UInventoryUIStatComparer::StaticClass, py::return_value_policy::reference)
          ;
}