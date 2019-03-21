#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIListElementCellProvider(py::object m)
{
    py::class_< UUIListElementCellProvider,  UInterface   >(m, "UUIListElementCellProvider")
        .def("StaticClass", &UUIListElementCellProvider::StaticClass, py::return_value_policy::reference)
          ;
}