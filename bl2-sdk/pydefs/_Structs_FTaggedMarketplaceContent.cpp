#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTaggedMarketplaceContent()
{
    class_< FTaggedMarketplaceContent >("FTaggedMarketplaceContent", no_init)
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