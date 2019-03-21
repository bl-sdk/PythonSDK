#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTaggedMarketplaceContent()
{
    py::class_< FTaggedMarketplaceContent >("FTaggedMarketplaceContent")
        .def_readwrite("Tag", &FTaggedMarketplaceContent::Tag)
        .def_readwrite("OfferId", &FTaggedMarketplaceContent::OfferId)
        .def_readwrite("OfferIdText", &FTaggedMarketplaceContent::OfferIdText)
        .def_readwrite("OfferName", &FTaggedMarketplaceContent::OfferName)
        .def_readwrite("SellText", &FTaggedMarketplaceContent::SellText)
        .def_readwrite("ContentCategory", &FTaggedMarketplaceContent::ContentCategory)
        .def_readwrite("PackageId", &FTaggedMarketplaceContent::PackageId)
        .def_readwrite("ContentId", &FTaggedMarketplaceContent::ContentId)
  ;
}