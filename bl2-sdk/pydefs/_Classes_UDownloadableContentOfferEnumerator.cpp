#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDownloadableContentOfferEnumerator()
{
    py::class_< UDownloadableContentOfferEnumerator,  UObject   >("UDownloadableContentOfferEnumerator")
        .def_readwrite("CurrentEnumerationState", &UDownloadableContentOfferEnumerator::CurrentEnumerationState)
        .def_readwrite("MarketplaceOffers", &UDownloadableContentOfferEnumerator::MarketplaceOffers)
        .def_readwrite("FindDlcOfferDelegates", &UDownloadableContentOfferEnumerator::FindDlcOfferDelegates)
        .def("StaticClass", &UDownloadableContentOfferEnumerator::StaticClass, py::return_value_policy::reference)
        .def("IsBusy", &UDownloadableContentOfferEnumerator::IsBusy)
        .def("TriggerFindDlcOfferDelegates", &UDownloadableContentOfferEnumerator::TriggerFindDlcOfferDelegates)
        .def("ClearFindDlcOfferDelegate", &UDownloadableContentOfferEnumerator::ClearFindDlcOfferDelegate)
        .def("AddFindDlcOfferDelegate", &UDownloadableContentOfferEnumerator::AddFindDlcOfferDelegate)
        .def("OnFindDlcOfferComplete", &UDownloadableContentOfferEnumerator::OnFindDlcOfferComplete)
        .def("FindContentOffers", &UDownloadableContentOfferEnumerator::FindContentOffers)
        .staticmethod("StaticClass")
  ;
}