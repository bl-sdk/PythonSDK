#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FUniqueNetId()
{
    class_< FUniqueNetId >("FUniqueNetId", no_init)
        .def_readwrite("Uid", &FUniqueNetId::Uid)
        .def_readonly("NpId", &FUniqueNetId::NpId)
  ;
}