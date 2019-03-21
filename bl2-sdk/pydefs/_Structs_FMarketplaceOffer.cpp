#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMarketplaceOffer()
{
    class_< FMarketplaceOffer >("FMarketplaceOffer", no_init)
        .def_readwrite("OfferId", &FMarketplaceOffer::OfferId)
        .def_readwrite("ContentCategory", &FMarketplaceOffer::ContentCategory)
        .def_readwrite("OfferName", &FMarketplaceOffer::OfferName)
        .def_readwrite("ContentId", &FMarketplaceOffer::ContentId)
        .def_readwrite("LicenseMask", &FMarketplaceOffer::LicenseMask)
  ;
}