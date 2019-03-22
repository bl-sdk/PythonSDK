#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULANServerBrowserGFxObject(py::module &m)
{
    py::class_< ULANServerBrowserGFxObject,  UGFxObject   >(m, "ULANServerBrowserGFxObject")
        .def("StaticClass", &ULANServerBrowserGFxObject::StaticClass, py::return_value_policy::reference)
        .def("SetSortDirectionButtonLabel", &ULANServerBrowserGFxObject::SetSortDirectionButtonLabel)
        .def("SetSortTypeButtonLabel", &ULANServerBrowserGFxObject::SetSortTypeButtonLabel)
        .def("GetSelectedServerIndex", &ULANServerBrowserGFxObject::GetSelectedServerIndex)
        .def("SetSelectedServerIndex", &ULANServerBrowserGFxObject::SetSelectedServerIndex)
        .def("SetSearchingForGames", &ULANServerBrowserGFxObject::SetSearchingForGames)
        .def("SetGameCountString", &ULANServerBrowserGFxObject::SetGameCountString)
        .def("EndConfigureServerList", &ULANServerBrowserGFxObject::EndConfigureServerList)
        .def("BeginConfigureServerList", &ULANServerBrowserGFxObject::BeginConfigureServerList)
        .def("AddServerListEntry", &ULANServerBrowserGFxObject::AddServerListEntry)
          ;
}