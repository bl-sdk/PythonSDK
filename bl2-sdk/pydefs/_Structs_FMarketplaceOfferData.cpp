#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMarketplaceOfferData()
{
    py::class_< FMarketplaceOfferData >("FMarketplaceOfferData")
        .def_readwrite("OfferId", &FMarketplaceOfferData::OfferId)
        .def_readwrite("Category", &FMarketplaceOfferData::Category)
        .def_readwrite("SellTextLocKey", &FMarketplaceOfferData::SellTextLocKey)
  ;
}