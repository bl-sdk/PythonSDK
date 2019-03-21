#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIRoot(py::object m)
{
    py::class_< UUIRoot,  UObject   >(m, "UUIRoot")
        .def_readwrite("BadCapsLocContexts", &UUIRoot::BadCapsLocContexts)
        .def("StaticClass", &UUIRoot::StaticClass, py::return_value_policy::reference)
        .def("SafeCaps", &UUIRoot::SafeCaps)
        .def("GetOnlinePlayerInterfaceEx", &UUIRoot::GetOnlinePlayerInterfaceEx, py::return_value_policy::reference)
        .def("GetOnlinePlayerInterface", &UUIRoot::GetOnlinePlayerInterface, py::return_value_policy::reference)
        .def("GetOnlineGameInterface", &UUIRoot::GetOnlineGameInterface, py::return_value_policy::reference)
        .def("GetDataStoreStringValue", &UUIRoot::GetDataStoreStringValue)
        .def("GetDataStoreFieldValue", &UUIRoot::GetDataStoreFieldValue)
        .def("SetDataStoreStringValue", &UUIRoot::SetDataStoreStringValue)
        .def("SetDataStoreFieldValue", &UUIRoot::SetDataStoreFieldValue)
        .def("StaticResolveDataStore", &UUIRoot::StaticResolveDataStore, py::return_value_policy::reference)
        .def("GetSceneClient", &UUIRoot::GetSceneClient, py::return_value_policy::reference)
        .def("GetCurrentUIController", &UUIRoot::GetCurrentUIController, py::return_value_policy::reference)
        .def("GetInputPlatformType", &UUIRoot::GetInputPlatformType)
          ;
}