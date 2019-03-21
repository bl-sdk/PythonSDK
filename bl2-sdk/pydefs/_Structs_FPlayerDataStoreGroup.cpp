#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPlayerDataStoreGroup()
{
    class_< FPlayerDataStoreGroup >("FPlayerDataStoreGroup", no_init)
        .def_readwrite("PlayerOwner", &FPlayerDataStoreGroup::PlayerOwner)
        .def_readwrite("DataStores", &FPlayerDataStoreGroup::DataStores)
  ;
}