#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UOnlineNewsInterfaceMcp()
{
    class_< UOnlineNewsInterfaceMcp, bases< UMCPBase >  , boost::noncopyable>("UOnlineNewsInterfaceMcp", no_init)
        .def_readwrite("NewsItems", &UOnlineNewsInterfaceMcp::NewsItems)
        .def_readwrite("ReadNewsDelegates", &UOnlineNewsInterfaceMcp::ReadNewsDelegates)
        .def("StaticClass", &UOnlineNewsInterfaceMcp::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetNews", &UOnlineNewsInterfaceMcp::GetNews)
        .def("ClearReadNewsCompletedDelegate", &UOnlineNewsInterfaceMcp::ClearReadNewsCompletedDelegate)
        .def("AddReadNewsCompletedDelegate", &UOnlineNewsInterfaceMcp::AddReadNewsCompletedDelegate)
        .def("OnReadNewsCompleted", &UOnlineNewsInterfaceMcp::OnReadNewsCompleted)
        .def("ReadNews", &UOnlineNewsInterfaceMcp::ReadNews)
        .staticmethod("StaticClass")
  ;
}