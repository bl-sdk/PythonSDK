#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FProviderRemovalRequest()
{
    class_< FProviderRemovalRequest >("FProviderRemovalRequest", no_init)
        .def_readwrite("ConsumerHandle", &FProviderRemovalRequest::ConsumerHandle)
        .def_readwrite("ProvidersIndex", &FProviderRemovalRequest::ProvidersIndex)
  ;
}