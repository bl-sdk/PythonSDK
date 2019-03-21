#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UServerCommandlet(py::object m)
{
    py::class_< UServerCommandlet,  UCommandlet   >(m, "UServerCommandlet")
        .def("StaticClass", &UServerCommandlet::StaticClass, py::return_value_policy::reference)
          ;
}