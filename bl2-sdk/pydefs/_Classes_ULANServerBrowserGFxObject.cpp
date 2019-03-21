#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULANServerBrowserGFxObject()
{
    class_< ULANServerBrowserGFxObject, bases< UGFxObject >  , boost::noncopyable>("ULANServerBrowserGFxObject", no_init)
        .def("StaticClass", &ULANServerBrowserGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetSortDirectionButtonLabel", &ULANServerBrowserGFxObject::SetSortDirectionButtonLabel)
        .def("SetSortTypeButtonLabel", &ULANServerBrowserGFxObject::SetSortTypeButtonLabel)
        .def("GetSelectedServerIndex", &ULANServerBrowserGFxObject::GetSelectedServerIndex)
        .def("SetSelectedServerIndex", &ULANServerBrowserGFxObject::SetSelectedServerIndex)
        .def("SetSearchingForGames", &ULANServerBrowserGFxObject::SetSearchingForGames)
        .def("SetGameCountString", &ULANServerBrowserGFxObject::SetGameCountString)
        .def("EndConfigureServerList", &ULANServerBrowserGFxObject::EndConfigureServerList)
        .def("BeginConfigureServerList", &ULANServerBrowserGFxObject::BeginConfigureServerList)
        .def("AddServerListEntry", &ULANServerBrowserGFxObject::AddServerListEntry)
        .staticmethod("StaticClass")
  ;
}