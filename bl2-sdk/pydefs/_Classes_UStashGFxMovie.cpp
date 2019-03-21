#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStashGFxMovie(py::object m)
{
    py::class_< UStashGFxMovie,  UTwoPanelInterfaceGFxMovie   >(m, "UStashGFxMovie")
        .def_readwrite("StashTitle", &UStashGFxMovie::StashTitle)
        .def_readwrite("StashAddTip", &UStashGFxMovie::StashAddTip)
        .def_readwrite("StashStorage", &UStashGFxMovie::StashStorage)
        .def_readwrite("StorageSortConfiguration", &UStashGFxMovie::StorageSortConfiguration)
        .def("StaticClass", &UStashGFxMovie::StaticClass, py::return_value_policy::reference)
        .def("SetItemLocation", &UStashGFxMovie::SetItemLocation)
        .def("OnInventoryPanelSetActive", &UStashGFxMovie::OnInventoryPanelSetActive)
        .def("GetSortConfigDataForPanel", &UStashGFxMovie::GetSortConfigDataForPanel)
        .def("GetStorageReferenceForTransferring", &UStashGFxMovie::GetStorageReferenceForTransferring, py::return_value_policy::reference)
        .def("GetStorageReferenceForSwapping", &UStashGFxMovie::GetStorageReferenceForSwapping, py::return_value_policy::reference)
        .def("GetPlayerPanelItems", &UStashGFxMovie::GetPlayerPanelItems)
        .def("GetStoragePanelItems", &UStashGFxMovie::GetStoragePanelItems)
        .def("GetAddTip", &UStashGFxMovie::GetAddTip)
        .def("GetTitle", &UStashGFxMovie::GetTitle)
        .def("OnLeftPanelInit", &UStashGFxMovie::OnLeftPanelInit)
        .def("extInitMainPanel", &UStashGFxMovie::extInitMainPanel)
        .def("eventOnClose", &UStashGFxMovie::eventOnClose)
        .def("eventStart", &UStashGFxMovie::eventStart)
          ;
}