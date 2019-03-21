#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULocalInventoryRefreshMessage()
{
    py::class_< ULocalInventoryRefreshMessage,  UWillowLocalMessage   >("ULocalInventoryRefreshMessage")
        .def("StaticClass", &ULocalInventoryRefreshMessage::StaticClass, py::return_value_policy::reference)
        .def("ClientInventoryRefresh", &ULocalInventoryRefreshMessage::ClientInventoryRefresh)
        .staticmethod("StaticClass")
  ;
}