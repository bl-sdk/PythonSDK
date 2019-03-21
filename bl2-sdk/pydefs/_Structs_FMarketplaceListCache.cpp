#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMarketplaceListCache(py::object m)
{
    py::class_< FMarketplaceListCache >(m, "FMarketplaceListCache")
        .def_readwrite("Content", &FMarketplaceListCache::Content)
        .def_readwrite("ReadState", &FMarketplaceListCache::ReadState)
        .def_readwrite("ReadCompleteDelegates", &FMarketplaceListCache::ReadCompleteDelegates)
  ;
}