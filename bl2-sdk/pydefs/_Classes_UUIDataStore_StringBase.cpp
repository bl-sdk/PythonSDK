#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataStore_StringBase(py::object m)
{
    py::class_< UUIDataStore_StringBase,  UUIDataStore   >(m, "UUIDataStore_StringBase")
        .def("StaticClass", &UUIDataStore_StringBase::StaticClass, py::return_value_policy::reference)
          ;
}