#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataStore_Settings(py::object m)
{
    py::class_< UUIDataStore_Settings,  UUIDataStore   >(m, "UUIDataStore_Settings")
        .def("StaticClass", &UUIDataStore_Settings::StaticClass, py::return_value_policy::reference)
          ;
}