#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULocalInventoryRefreshMessage(py::object m)
{
    py::class_< ULocalInventoryRefreshMessage,  UWillowLocalMessage   >(m, "ULocalInventoryRefreshMessage")
        .def("StaticClass", &ULocalInventoryRefreshMessage::StaticClass, py::return_value_policy::reference)
        .def("ClientInventoryRefresh", &ULocalInventoryRefreshMessage::ClientInventoryRefresh)
          ;
}