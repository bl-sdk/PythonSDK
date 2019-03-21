#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FProviderRecord()
{
    class_< FProviderRecord >("FProviderRecord", no_init)
        .def_readwrite("ProviderDefinition", &FProviderRecord::ProviderDefinition)
        .def_readwrite("ReferenceCount", &FProviderRecord::ReferenceCount)
  ;
}