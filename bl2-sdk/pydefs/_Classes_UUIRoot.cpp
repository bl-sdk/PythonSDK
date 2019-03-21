#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIRoot()
{
    class_< UUIRoot, bases< UObject >  , boost::noncopyable>("UUIRoot", no_init)
        .def_readwrite("BadCapsLocContexts", &UUIRoot::BadCapsLocContexts)
        .def("StaticClass", &UUIRoot::StaticClass, return_value_policy< reference_existing_object >())
        .def("SafeCaps", &UUIRoot::SafeCaps)
        .def("GetOnlinePlayerInterfaceEx", &UUIRoot::GetOnlinePlayerInterfaceEx, return_value_policy< reference_existing_object >())
        .def("GetOnlinePlayerInterface", &UUIRoot::GetOnlinePlayerInterface, return_value_policy< reference_existing_object >())
        .def("GetOnlineGameInterface", &UUIRoot::GetOnlineGameInterface, return_value_policy< reference_existing_object >())
        .def("GetDataStoreStringValue", &UUIRoot::GetDataStoreStringValue)
        .def("GetDataStoreFieldValue", &UUIRoot::GetDataStoreFieldValue)
        .def("SetDataStoreStringValue", &UUIRoot::SetDataStoreStringValue)
        .def("SetDataStoreFieldValue", &UUIRoot::SetDataStoreFieldValue)
        .def("StaticResolveDataStore", &UUIRoot::StaticResolveDataStore, return_value_policy< reference_existing_object >())
        .def("GetSceneClient", &UUIRoot::GetSceneClient, return_value_policy< reference_existing_object >())
        .def("GetCurrentUIController", &UUIRoot::GetCurrentUIController, return_value_policy< reference_existing_object >())
        .def("GetInputPlatformType", &UUIRoot::GetInputPlatformType)
        .staticmethod("StaticClass")
  ;
}