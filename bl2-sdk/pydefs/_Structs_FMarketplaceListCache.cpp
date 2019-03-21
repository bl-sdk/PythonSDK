#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMarketplaceListCache()
{
    class_< FMarketplaceListCache >("FMarketplaceListCache", no_init)
        .def_readwrite("Content", &FMarketplaceListCache::Content)
        .def_readwrite("ReadState", &FMarketplaceListCache::ReadState)
        .def_readwrite("ReadCompleteDelegates", &FMarketplaceListCache::ReadCompleteDelegates)
  ;
}