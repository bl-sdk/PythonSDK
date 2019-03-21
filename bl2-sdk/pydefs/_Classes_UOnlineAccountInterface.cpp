#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineAccountInterface(py::object m)
{
    py::class_< UOnlineAccountInterface,  UInterface   >(m, "UOnlineAccountInterface")
        .def("StaticClass", &UOnlineAccountInterface::StaticClass, py::return_value_policy::reference)
        .def("GetLocalAccountNames", &UOnlineAccountInterface::GetLocalAccountNames)
        .def("DeleteLocalAccount", &UOnlineAccountInterface::DeleteLocalAccount)
        .def("RenameLocalAccount", &UOnlineAccountInterface::RenameLocalAccount)
        .def("CreateLocalAccount", &UOnlineAccountInterface::CreateLocalAccount)
        .def("ClearCreateOnlineAccountCompletedDelegate", &UOnlineAccountInterface::ClearCreateOnlineAccountCompletedDelegate)
        .def("AddCreateOnlineAccountCompletedDelegate", &UOnlineAccountInterface::AddCreateOnlineAccountCompletedDelegate)
        .def("OnCreateOnlineAccountCompleted", &UOnlineAccountInterface::OnCreateOnlineAccountCompleted)
        .def("CreateOnlineAccount", &UOnlineAccountInterface::CreateOnlineAccount)
          ;
}