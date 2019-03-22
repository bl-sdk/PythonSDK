#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineNewsInterface(py::module &m)
{
    py::class_< UOnlineNewsInterface,  UInterface   >(m, "UOnlineNewsInterface")
        .def("GetNews", &UOnlineNewsInterface::GetNews)
        .def("ClearReadNewsCompletedDelegate", &UOnlineNewsInterface::ClearReadNewsCompletedDelegate)
        .def("AddReadNewsCompletedDelegate", &UOnlineNewsInterface::AddReadNewsCompletedDelegate)
        .def("OnReadNewsCompleted", &UOnlineNewsInterface::OnReadNewsCompleted)
        .def("ReadNews", &UOnlineNewsInterface::ReadNews)
          ;
}