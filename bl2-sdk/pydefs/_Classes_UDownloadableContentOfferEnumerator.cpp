#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDownloadableContentOfferEnumerator()
{
    class_< UDownloadableContentOfferEnumerator, bases< UObject >  , boost::noncopyable>("UDownloadableContentOfferEnumerator", no_init)
        .def_readwrite("CurrentEnumerationState", &UDownloadableContentOfferEnumerator::CurrentEnumerationState)
        .def_readwrite("MarketplaceOffers", &UDownloadableContentOfferEnumerator::MarketplaceOffers)
        .def_readwrite("FindDlcOfferDelegates", &UDownloadableContentOfferEnumerator::FindDlcOfferDelegates)
        .def("StaticClass", &UDownloadableContentOfferEnumerator::StaticClass, return_value_policy< reference_existing_object >())
        .def("IsBusy", &UDownloadableContentOfferEnumerator::IsBusy)
        .def("TriggerFindDlcOfferDelegates", &UDownloadableContentOfferEnumerator::TriggerFindDlcOfferDelegates)
        .def("ClearFindDlcOfferDelegate", &UDownloadableContentOfferEnumerator::ClearFindDlcOfferDelegate)
        .def("AddFindDlcOfferDelegate", &UDownloadableContentOfferEnumerator::AddFindDlcOfferDelegate)
        .def("OnFindDlcOfferComplete", &UDownloadableContentOfferEnumerator::OnFindDlcOfferComplete)
        .def("FindContentOffers", &UDownloadableContentOfferEnumerator::FindContentOffers)
        .staticmethod("StaticClass")
  ;
}