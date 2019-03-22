#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBankGFxMovie(py::module &m)
{
    py::class_< UBankGFxMovie,  UTwoPanelInterfaceGFxMovie   >(m, "UBankGFxMovie")
        .def_readwrite("BankTitle", &UBankGFxMovie::BankTitle)
        .def_readwrite("BankAddTip", &UBankGFxMovie::BankAddTip)
        .def_readwrite("BankStorage", &UBankGFxMovie::BankStorage)
        .def("StaticClass", &UBankGFxMovie::StaticClass, py::return_value_policy::reference)
        .def("SetItemLocation", &UBankGFxMovie::SetItemLocation)
        .def("OnInventoryPanelSetActive", &UBankGFxMovie::OnInventoryPanelSetActive)
        .def("GetStorageReferenceForTransferring", &UBankGFxMovie::GetStorageReferenceForTransferring, py::return_value_policy::reference)
        .def("GetStorageReferenceForSwapping", &UBankGFxMovie::GetStorageReferenceForSwapping, py::return_value_policy::reference)
        .def("GetPlayerPanelItems", &UBankGFxMovie::GetPlayerPanelItems)
        .def("GetStoragePanelItems", &UBankGFxMovie::GetStoragePanelItems)
        .def("GetAddTip", &UBankGFxMovie::GetAddTip)
        .def("GetTitle", &UBankGFxMovie::GetTitle)
        .def("eventOnClose", &UBankGFxMovie::eventOnClose)
        .def("extInitMainPanel", &UBankGFxMovie::extInitMainPanel)
        .def("eventStart", &UBankGFxMovie::eventStart)
          ;
}