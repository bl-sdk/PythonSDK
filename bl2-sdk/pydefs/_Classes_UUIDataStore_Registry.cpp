#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataStore_Registry(py::module &m)
{
    py::class_< UUIDataStore_Registry,  UUIDataStore   >(m, "UUIDataStore_Registry")
        .def_readwrite("RegistryDataProvider", &UUIDataStore_Registry::RegistryDataProvider)
        .def("StaticClass", &UUIDataStore_Registry::StaticClass, py::return_value_policy::reference)
        .def("GetDataProvider", &UUIDataStore_Registry::GetDataProvider, py::return_value_policy::reference)
          ;
}