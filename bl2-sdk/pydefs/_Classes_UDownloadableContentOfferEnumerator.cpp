#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDownloadableContentOfferEnumerator(py::module &m)
{
    py::class_< UDownloadableContentOfferEnumerator,  UObject   >(m, "UDownloadableContentOfferEnumerator")
        .def_readwrite("CurrentEnumerationState", &UDownloadableContentOfferEnumerator::CurrentEnumerationState)
        .def_readwrite("MarketplaceOffers", &UDownloadableContentOfferEnumerator::MarketplaceOffers)
        .def_readwrite("FindDlcOfferDelegates", &UDownloadableContentOfferEnumerator::FindDlcOfferDelegates)
        .def("IsBusy", &UDownloadableContentOfferEnumerator::IsBusy)
        .def("TriggerFindDlcOfferDelegates", &UDownloadableContentOfferEnumerator::TriggerFindDlcOfferDelegates)
        .def("ClearFindDlcOfferDelegate", &UDownloadableContentOfferEnumerator::ClearFindDlcOfferDelegate)
        .def("AddFindDlcOfferDelegate", &UDownloadableContentOfferEnumerator::AddFindDlcOfferDelegate)
        .def("OnFindDlcOfferComplete", &UDownloadableContentOfferEnumerator::OnFindDlcOfferComplete)
        .def("FindContentOffers", &UDownloadableContentOfferEnumerator::FindContentOffers)
          ;
}