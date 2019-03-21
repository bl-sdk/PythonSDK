#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USelection(py::object m)
{
    py::class_< USelection,  UObject   >(m, "USelection")
        .def("StaticClass", &USelection::StaticClass, py::return_value_policy::reference)
          ;
}