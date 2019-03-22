#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataStore_Remote(py::module &m)
{
    py::class_< UUIDataStore_Remote,  UUIDataStore   >(m, "UUIDataStore_Remote")
        .def("StaticClass", &UUIDataStore_Remote::StaticClass, py::return_value_policy::reference)
          ;
}