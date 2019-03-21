#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLocalizedStringSetting()
{
    class_< FLocalizedStringSetting >("FLocalizedStringSetting", no_init)
        .def_readwrite("Id", &FLocalizedStringSetting::Id)
        .def_readwrite("ValueIndex", &FLocalizedStringSetting::ValueIndex)
        .def_readwrite("AdvertisementType", &FLocalizedStringSetting::AdvertisementType)
  ;
}