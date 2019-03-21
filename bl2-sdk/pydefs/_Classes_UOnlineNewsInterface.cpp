#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineNewsInterface()
{
    py::class_< UOnlineNewsInterface,  UInterface   >("UOnlineNewsInterface")
        .def("StaticClass", &UOnlineNewsInterface::StaticClass, py::return_value_policy::reference)
        .def("GetNews", &UOnlineNewsInterface::GetNews)
        .def("ClearReadNewsCompletedDelegate", &UOnlineNewsInterface::ClearReadNewsCompletedDelegate)
        .def("AddReadNewsCompletedDelegate", &UOnlineNewsInterface::AddReadNewsCompletedDelegate)
        .def("OnReadNewsCompleted", &UOnlineNewsInterface::OnReadNewsCompleted)
        .def("ReadNews", &UOnlineNewsInterface::ReadNews)
        .staticmethod("StaticClass")
  ;
}