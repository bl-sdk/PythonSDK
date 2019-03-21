#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FUIDataStoreInputAlias()
{
    class_< FUIDataStoreInputAlias >("FUIDataStoreInputAlias", no_init)
        .def_readwrite("AliasName", &FUIDataStoreInputAlias::AliasName)
        .def_readonly("PlatformInputKeys", &FUIDataStoreInputAlias::PlatformInputKeys)
  ;
}