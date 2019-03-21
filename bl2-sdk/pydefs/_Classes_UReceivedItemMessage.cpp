#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UReceivedItemMessage(py::object m)
{
    py::class_< UReceivedItemMessage,  ULocalItemMessage   >(m, "UReceivedItemMessage")
        .def_readwrite("ReceivedItem", &UReceivedItemMessage::ReceivedItem)
        .def_readwrite("SelfReceivedItem", &UReceivedItemMessage::SelfReceivedItem)
        .def("StaticClass", &UReceivedItemMessage::StaticClass, py::return_value_policy::reference)
        .def("GetItemString", &UReceivedItemMessage::GetItemString)
          ;
}