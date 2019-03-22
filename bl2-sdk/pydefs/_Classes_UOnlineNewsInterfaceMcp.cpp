#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineNewsInterfaceMcp(py::module &m)
{
    py::class_< UOnlineNewsInterfaceMcp,  UMCPBase   >(m, "UOnlineNewsInterfaceMcp")
        .def_readwrite("NewsItems", &UOnlineNewsInterfaceMcp::NewsItems)
        .def_readwrite("ReadNewsDelegates", &UOnlineNewsInterfaceMcp::ReadNewsDelegates)
        .def("GetNews", &UOnlineNewsInterfaceMcp::GetNews)
        .def("ClearReadNewsCompletedDelegate", &UOnlineNewsInterfaceMcp::ClearReadNewsCompletedDelegate)
        .def("AddReadNewsCompletedDelegate", &UOnlineNewsInterfaceMcp::AddReadNewsCompletedDelegate)
        .def("OnReadNewsCompleted", &UOnlineNewsInterfaceMcp::OnReadNewsCompleted)
        .def("ReadNews", &UOnlineNewsInterfaceMcp::ReadNews)
          ;
}