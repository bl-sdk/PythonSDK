#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPlayerStorageArrayProvider()
{
    class_< FPlayerStorageArrayProvider >("FPlayerStorageArrayProvider", no_init)
        .def_readwrite("PlayerStorageId", &FPlayerStorageArrayProvider::PlayerStorageId)
        .def_readwrite("PlayerStorageName", &FPlayerStorageArrayProvider::PlayerStorageName)
        .def_readwrite("Provider", &FPlayerStorageArrayProvider::Provider)
  ;
}