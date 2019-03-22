#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxManager(py::module &m)
{
    py::class_< UGFxManager,  UObject   >(m, "UGFxManager")
        .def_readwrite("MyDefinition", &UGFxManager::MyDefinition)
        .def("StaticClass", &UGFxManager::StaticClass, py::return_value_policy::reference)
        .def("GetFocusMovie", &UGFxManager::GetFocusMovie, py::return_value_policy::reference)
        .def("eventLookupSound", &UGFxManager::eventLookupSound, py::return_value_policy::reference)
        .def("eventShowDialog", &UGFxManager::eventShowDialog, py::return_value_policy::reference)
        .def("eventInit", &UGFxManager::eventInit)
          ;
}