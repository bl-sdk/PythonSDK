#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMarketplaceContent(py::module &m)
{
    py::class_< FMarketplaceContent >(m, "FMarketplaceContent")
        .def_readwrite("UserIndex", &FMarketplaceContent::UserIndex)
        .def_readwrite("OfferId", &FMarketplaceContent::OfferId)
        .def_readwrite("PreviewOfferId", &FMarketplaceContent::PreviewOfferId)
        .def_readwrite("OfferName", &FMarketplaceContent::OfferName)
        .def_readwrite("OfferType", &FMarketplaceContent::OfferType)
        .def_readwrite("ContentId", &FMarketplaceContent::ContentId)
        .def_readwrite("LicenseMask", &FMarketplaceContent::LicenseMask)
        .def_readwrite("TitleId", &FMarketplaceContent::TitleId)
        .def_readwrite("ContentCategory", &FMarketplaceContent::ContentCategory)
        .def_readwrite("TitleName", &FMarketplaceContent::TitleName)
        .def_readwrite("PackageSize", &FMarketplaceContent::PackageSize)
        .def_readwrite("InstallSize", &FMarketplaceContent::InstallSize)
        .def_readwrite("SellText", &FMarketplaceContent::SellText)
        .def_readwrite("AssetId", &FMarketplaceContent::AssetId)
        .def_readwrite("PurchaseQuantity", &FMarketplaceContent::PurchaseQuantity)
        .def_readwrite("PointsPrice", &FMarketplaceContent::PointsPrice)
        .def_readwrite("PriceText", &FMarketplaceContent::PriceText)
        .def_readwrite("OfferIdText", &FMarketplaceContent::OfferIdText)
  ;
}