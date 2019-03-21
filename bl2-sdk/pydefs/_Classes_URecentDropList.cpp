#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URecentDropList(py::object m)
{
    py::class_< URecentDropList,  UObject   >(m, "URecentDropList")
        .def_readwrite("NextIndex", &URecentDropList::NextIndex)
        .def("StaticClass", &URecentDropList::StaticClass, py::return_value_policy::reference)
        .def("Contains", &URecentDropList::Contains)
        .def("Add", &URecentDropList::Add)
          ;
}