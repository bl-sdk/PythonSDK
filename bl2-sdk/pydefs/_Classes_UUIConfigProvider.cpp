#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIConfigProvider(py::object m)
{
    py::class_< UUIConfigProvider,  UUIDataProvider   >(m, "UUIConfigProvider")
        .def("StaticClass", &UUIConfigProvider::StaticClass, py::return_value_policy::reference)
          ;
}