#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineNewsInterfaceMcp(py::object m)
{
    py::class_< UOnlineNewsInterfaceMcp,  UMCPBase   >(m, "UOnlineNewsInterfaceMcp")
        .def_readwrite("NewsItems", &UOnlineNewsInterfaceMcp::NewsItems)
        .def_readwrite("ReadNewsDelegates", &UOnlineNewsInterfaceMcp::ReadNewsDelegates)
        .def("StaticClass", &UOnlineNewsInterfaceMcp::StaticClass, py::return_value_policy::reference)
        .def("GetNews", &UOnlineNewsInterfaceMcp::GetNews)
        .def("ClearReadNewsCompletedDelegate", &UOnlineNewsInterfaceMcp::ClearReadNewsCompletedDelegate)
        .def("AddReadNewsCompletedDelegate", &UOnlineNewsInterfaceMcp::AddReadNewsCompletedDelegate)
        .def("OnReadNewsCompleted", &UOnlineNewsInterfaceMcp::OnReadNewsCompleted)
        .def("ReadNews", &UOnlineNewsInterfaceMcp::ReadNews)
          ;
}