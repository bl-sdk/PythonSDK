#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UOnlineAccountInterface()
{
    class_< UOnlineAccountInterface, bases< UInterface >  , boost::noncopyable>("UOnlineAccountInterface", no_init)
        .def("StaticClass", &UOnlineAccountInterface::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetLocalAccountNames", &UOnlineAccountInterface::GetLocalAccountNames)
        .def("DeleteLocalAccount", &UOnlineAccountInterface::DeleteLocalAccount)
        .def("RenameLocalAccount", &UOnlineAccountInterface::RenameLocalAccount)
        .def("CreateLocalAccount", &UOnlineAccountInterface::CreateLocalAccount)
        .def("ClearCreateOnlineAccountCompletedDelegate", &UOnlineAccountInterface::ClearCreateOnlineAccountCompletedDelegate)
        .def("AddCreateOnlineAccountCompletedDelegate", &UOnlineAccountInterface::AddCreateOnlineAccountCompletedDelegate)
        .def("OnCreateOnlineAccountCompleted", &UOnlineAccountInterface::OnCreateOnlineAccountCompleted)
        .def("CreateOnlineAccount", &UOnlineAccountInterface::CreateOnlineAccount)
        .staticmethod("StaticClass")
  ;
}