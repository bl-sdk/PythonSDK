#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMarketplaceOfferDownloadState()
{
    class_< FMarketplaceOfferDownloadState >("FMarketplaceOfferDownloadState", no_init)
  ;
}