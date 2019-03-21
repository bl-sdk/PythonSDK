#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBankGFxMovie()
{
    class_< UBankGFxMovie, bases< UTwoPanelInterfaceGFxMovie >  , boost::noncopyable>("UBankGFxMovie", no_init)
        .def_readwrite("BankTitle", &UBankGFxMovie::BankTitle)
        .def_readwrite("BankAddTip", &UBankGFxMovie::BankAddTip)
        .def_readwrite("BankStorage", &UBankGFxMovie::BankStorage)
        .def("StaticClass", &UBankGFxMovie::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetItemLocation", &UBankGFxMovie::SetItemLocation)
        .def("OnInventoryPanelSetActive", &UBankGFxMovie::OnInventoryPanelSetActive)
        .def("GetStorageReferenceForTransferring", &UBankGFxMovie::GetStorageReferenceForTransferring, return_value_policy< reference_existing_object >())
        .def("GetStorageReferenceForSwapping", &UBankGFxMovie::GetStorageReferenceForSwapping, return_value_policy< reference_existing_object >())
        .def("GetPlayerPanelItems", &UBankGFxMovie::GetPlayerPanelItems)
        .def("GetStoragePanelItems", &UBankGFxMovie::GetStoragePanelItems)
        .def("GetAddTip", &UBankGFxMovie::GetAddTip)
        .def("GetTitle", &UBankGFxMovie::GetTitle)
        .def("eventOnClose", &UBankGFxMovie::eventOnClose)
        .def("extInitMainPanel", &UBankGFxMovie::extInitMainPanel)
        .def("eventStart", &UBankGFxMovie::eventStart)
        .staticmethod("StaticClass")
  ;
}