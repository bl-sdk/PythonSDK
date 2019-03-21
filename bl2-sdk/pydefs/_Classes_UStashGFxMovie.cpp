#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UStashGFxMovie()
{
    class_< UStashGFxMovie, bases< UTwoPanelInterfaceGFxMovie >  , boost::noncopyable>("UStashGFxMovie", no_init)
        .def_readwrite("StashTitle", &UStashGFxMovie::StashTitle)
        .def_readwrite("StashAddTip", &UStashGFxMovie::StashAddTip)
        .def_readwrite("StashStorage", &UStashGFxMovie::StashStorage)
        .def_readwrite("StorageSortConfiguration", &UStashGFxMovie::StorageSortConfiguration)
        .def("StaticClass", &UStashGFxMovie::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetItemLocation", &UStashGFxMovie::SetItemLocation)
        .def("OnInventoryPanelSetActive", &UStashGFxMovie::OnInventoryPanelSetActive)
        .def("GetSortConfigDataForPanel", &UStashGFxMovie::GetSortConfigDataForPanel)
        .def("GetStorageReferenceForTransferring", &UStashGFxMovie::GetStorageReferenceForTransferring, return_value_policy< reference_existing_object >())
        .def("GetStorageReferenceForSwapping", &UStashGFxMovie::GetStorageReferenceForSwapping, return_value_policy< reference_existing_object >())
        .def("GetPlayerPanelItems", &UStashGFxMovie::GetPlayerPanelItems)
        .def("GetStoragePanelItems", &UStashGFxMovie::GetStoragePanelItems)
        .def("GetAddTip", &UStashGFxMovie::GetAddTip)
        .def("GetTitle", &UStashGFxMovie::GetTitle)
        .def("OnLeftPanelInit", &UStashGFxMovie::OnLeftPanelInit)
        .def("extInitMainPanel", &UStashGFxMovie::extInitMainPanel)
        .def("eventOnClose", &UStashGFxMovie::eventOnClose)
        .def("eventStart", &UStashGFxMovie::eventStart)
        .staticmethod("StaticClass")
  ;
}