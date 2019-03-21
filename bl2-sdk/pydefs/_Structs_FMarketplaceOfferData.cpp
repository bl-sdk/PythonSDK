#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMarketplaceOfferData()
{
    class_< FMarketplaceOfferData >("FMarketplaceOfferData", no_init)
        .def_readwrite("OfferId", &FMarketplaceOfferData::OfferId)
        .def_readwrite("Category", &FMarketplaceOfferData::Category)
        .def_readwrite("SellTextLocKey", &FMarketplaceOfferData::SellTextLocKey)
  ;
}